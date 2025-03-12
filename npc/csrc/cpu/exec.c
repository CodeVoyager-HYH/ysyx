#include "../include/common.h"

#define MAX_INST_TO_PRINT 10
void checkWatchPoint();
void device_update();
CPU_state cpu = {};
uint32_t inst;
extern FILE *log_fp ;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static void execute(uint64_t n,Decode *s);
extern void isa_reg_display();
extern uint32_t dut_npc;
extern Vysyx_24080014_cpu dut;
extern VerilatedContext* contextp; 
extern VerilatedVcdC *m_trace;
extern uint8_t *pmem ;
extern uint32_t snpc; 
extern int exit_diff;
extern uint32_t dut_pc;
NPCState npc_state;
int no_img = 0;
void ftrace_check_inst(uint32_t inst);
bool log_enable(); 
char logbuf[128];
#define BUF 16
#define inside 1024
char iringbuf[BUF][inside];
int a = 0;

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    if (log_enable() && log_fp != NULL) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)
#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    if (log_enable() && log_fp != NULL) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

static void trace_and_difftest(Decode *_this, vaddr_t dnpc,char *logbuf) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND==1) { log_write("%s\n", logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(logbuf)); }
} 


static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

//=================================ITRACE==================================================
void trace(){
#ifdef CONFIG_ITRACE
  char logbuf[128];
  char *p = logbuf; 
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", dut_pc); 
  int ilen;
  ilen = 4;
  int i;
  uint8_t *inst_write = (uint8_t *)&inst; 
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst_write[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, logbuf + sizeof(logbuf) - p, dut_pc, (uint8_t *)(&inst),
              ilen);
#ifdef CONFIG_ITRACE_COND             
  if(a==16){
	  a = 0;
  }
  strcpy(iringbuf[a++], logbuf);
#endif
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
#endif
g_nr_guest_inst ++;
//=====================================================================================================  
  //uint64_t timer_end = get_time();
  //g_timer += timer_end - timer_start;

  //===================================================end==
//  return inst;
}

void state_judge(){
  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}

void Decode_exec_once(Decode *s, vaddr_t pc){
  s->pc = pc;
  s->snpc = pc;
  s->inst = inst;
}

uint32_t cpu_exec(uint64_t n){
  Decode s;
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      Log("Program execution has ended. To restart the program, exit NPC and run again.\n");
      exit(0) ;
    default: npc_state.state = NPC_RUNNING;
  }
  uint64_t timer_start = get_time();

//-----------------excute-----------------------  
  execute(n,&s); 
  state_judge();

  //trace();
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;
  
  //a++;
  return inst;

}

void difftest_step();
int diff_run = 0;
extern "C" void difftest(int exec){
  if(exec) {diff_run = 1; }
  else{ diff_run = 0;}
}

 void execute(uint64_t n,Decode *s) {
  int j = n;
  int ready = 0;
 for (;n > 0; n --) {
    inst = fetch_ins();
    Decode_exec_once(s, dut_pc);
    //ftrace
    IFDEF(CONFIG_FTRACE, ftrace_check_inst(inst));
//----------------------------------------------
    if(n!=1){
      if(j == n){
        dut.eval();  // 评估当前状态
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据
        trace();
        IFDEF(CONFIG_DEVICE, device_update());
        IFDEF(CONFIG_DIFFTEST,trace_and_difftest(s, dut_npc,logbuf));
        //IFDEF(CONFIG_DIFFTEST, difftest_step());
      }
      int cirle = 0;
      dut.clk = 0;
      dut.eval();  // 评估当前状态
      contextp->timeInc(1);  // 增加仿真时间
      IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据

      if(exit_diff) {
        for(int time = 0; time < 5; time++){
          dut.clk = 1;
          dut.eval();
          contextp->timeInc(1); 
          m_trace->dump(contextp->time());

          dut.clk = 0;
          dut.eval();
          contextp->timeInc(1); 
          m_trace->dump(contextp->time());
        }
        m_trace->close();
        printf("exit_diff = %d\n",exit_diff);
        exit(0);
      }

      dut.clk = 1;
      dut.rst = 1;  // 解除复位

      dut.eval();  // 评估电路状态
        
      if(n>1){
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据

        trace();
        IFDEF(CONFIG_DEVICE, device_update());
        IFDEF(CONFIG_DIFFTEST,trace_and_difftest(s, dut_npc,logbuf));
        if(diff_run){ IFDEF(CONFIG_DIFFTEST,difftest_step());
          if(ready == 1){
            IFDEF(CONFIG_DIFFTEST,difftest_step());
            ready = 0;
          }
           else ready ++;
        }
        
      }
    }  
//-------------------------------------
    trace();
    IFDEF(CONFIG_DIFFTEST,trace_and_difftest(s, dut_npc,logbuf));
    if (npc_state.state != NPC_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

void printIB(){
    for(int i = 0; i<=15; i++){
        if(i == a-1){
		printf("-->%d:%s\n",i,iringbuf[i]);
	}
	else printf("   %d:%s\n",i,iringbuf[i]);
    }
}

void assert_fail_msg() {//输出错误信息
  isa_reg_display();
  Log("-------------");
  printIB();
  statistic();
}


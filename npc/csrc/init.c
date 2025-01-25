#include <getopt.h>
#include "include/common.h"
#include "include/macro.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "verilated_vcd_c.h"  // 用于波形输出
#include "Vysyx_24080014_cpu.h"  // 顶层模块
#include "verilated.h"

static int is_batch_mode = false;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;
static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_d(char *args);
static int cmd_p(char *args);
static int cmd_si(char *args);
static int cmd_help(char *args);
static int cmd_info(char *args);
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
int quit = 0;
int cmdc = 0;

void difftest_step();
extern uint32_t dut_npc;
extern Vysyx_24080014_cpu dut;
extern VerilatedContext* contextp; 
extern VerilatedVcdC *m_trace;
extern uint8_t pmem[PMEM_MSIZE];
extern uint32_t snpc; 
extern uint32_t dut_pc;
uint64_t g_nr_guest_inst = 0;
NPCState npc_state;
uint32_t inst;
FILE *log_fp = NULL;
//==========================================开关！！！！！！！
int no_img = 0;

void ftrace_check_inst(uint32_t inst);
void init_difftest(char *ref_so_file, long img_size);
void init_ftrace(const char *elf_file);
void trace();
void init_mem() ;
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#ifdef CONFIG_ITRACE_COND
  #define BUF 16
  #define inside 1024
  char iringbuf[BUF][inside];
  int a = 0;
#endif
extern uint32_t dut_pc;
IFDEF(CONFIG_ITRACE, char logbuf[128]);

static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

uint8_t* guest_to_host(uint32_t paddr);
uint8_t* guest_to_host(uint32_t paddr);
void state_judge();
void sdb_set_batch_mode() {
  is_batch_mode = true;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {"img"      , required_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg ;printf("log_file = %s\n",log_file); break;
      case 'e': elf_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg;printf("img_file = %s\n",img_file); break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           parse elf form FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_rand() ;

//-----------------------------------------------------表达式求值
static int cmd_p(char *args){
  bool success=true;
  int32_t res = expr(args, &success);Log("error");
  if(!success){Log("error");
    printf("Invalid expression.Please enter a right expression.\n");
    return 1;
  }
  else {
    Log("error");
    printf("%d\n", res);
    return 0;
  }
  Log("ERROR in cmd_p");
  return 0; 
}

static int cmd_x(char *args){
  //parse argument 
  char* var1 = strtok(args," ");
  char* var2 = strtok(NULL," ");
  int len = 0;
  //判断是否有输入
  if(var1 == NULL){printf("Please enter an argument!\n"); return 1;}
  if(var2 == NULL){printf("Please enter an argument!\n"); return 1;}
  paddr_t addr = 0;
  sscanf(var1, "%d", &len);
  sscanf(var2,"%x", &addr);
  
  for(int i = 0 ; i < len ; i ++)
  {
      printf("0x%08x = 0x%08x\n",addr,paddr_read(addr,4));
      addr = addr + 4;
  }
  return 0;
}
void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    if(fp == NULL){
        printf("Can not open '%s'", log_file);Log("1");
    }
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

extern long write_inst_to_mem() ;
static long load_img(char *img_file) {
  if(img != NULL) Log("img_file = %s",img_file);
  if (img_file == NULL) {
    no_img = 1;
    printf("No image is given. Use the default build-in image.\n");
    long size = write_inst_to_mem() ;
    return size; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) printf("Can not open '%s'", img_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
char str[20];  // 定义一个足够大的字符数组来存储转换后的字符串
sprintf(str, "%u", RESET_VECTOR);  // 将 RESET_VECTOR 转换为字符串并存储到 str 中
//printf("%s", str);  // 输出转换后的字符串

  /* Initialize this virtual computer system. */
  //restart();
}

void init_regex();
void init_wp_pool();
void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(riscv), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}
void init_monitor(int argc, char **argv) {
  /* Parse arguments. */
  parse_args(argc, argv);
  
  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /*init elf_file*/
  IFDEF(CONFIG_FTRACE, init_ftrace(elf_file));
  /* Initialize memory. */
  init_mem();

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img(img_file);
  
  /* Initialize differential testing. */
  IFDEF(CONFIG_DIFFTEST,init_difftest(diff_so_file, img_size));
  /* Initialize the simple debugger. */
  init_sdb();
  //===========================================================反汇编
  init_disasm((MUXDEF(CONFIG_RV64, "riscv64","riscv32")"-pc-linux-gnu"));
  //==============================================================
  /* Initialize differential testing. */
  welcome();
}

static void statistic() {
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

//=================================trace_and_difftest====================================
extern uint64_t g_nr_guest_inst;
bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}
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

bool check_bits(uint32_t value) {//jalr
    // 检查低 7 位是否为 1100111
    bool low7_match = (value & 0x7F) == 0x67;

    // 提取第 13, 14, 15 位 (对应位掩码为 0xE000，即 1110000000000000)
    bool bits_13_14_15_match = (value & 0xE000) == 0;

    return low7_match && bits_13_14_15_match;
}
bool check_low7(uint32_t value) {//jal
    return (value & 0x7F) == 0x67; // 提取低 7 位并比较
}

void Decode_exec_once(Decode *s, vaddr_t pc){
  s->pc = pc;
  s->snpc = pc;
  s->inst = inst;
}
//=================================================执行==============================
uint32_t cpu_exec(uint64_t n){//,uint32_t pc){
  Decode s;
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      Log("Program execution has ended. To restart the program, exit NPC and run again.\n");
      exit(0) ;
    default: npc_state.state = NPC_RUNNING;
  }
  int j = n;
  uint64_t timer_start = get_time();

//-----------------excute-----------------------  
  for (;n > 0; n --) {
    inst = fetch_ins();
    Decode_exec_once(&s, dut_pc);
    //ftrace
    IFDEF(CONFIG_FTRACE, ftrace_check_inst(inst));
//----------------------------------------------
    if(n!=1){
      // if(j == n){
      //   dut.eval();  // 评估当前状态
      //   contextp->timeInc(1);  // 增加仿真时间
      //   m_trace->dump(contextp->time());  // 写入波形数据
      //   IFDEF(CONFIG_DIFFTEST,trace_and_difftest(&s, dut_npc,logbuf));
      //   IFDEF(CONFIG_DIFFTEST, difftest_step());
      // }
      
      dut.clk = 0;
      dut.eval();  // 评估当前状态
      contextp->timeInc(1);  // 增加仿真时间
      m_trace->dump(contextp->time());  // 写入波形数据
      //IFDEF(CONFIG_DIFFTEST, difftest_step());

      dut.clk = 1;
      dut.rst = 0;  // 解除复位
      dut.eval();  // 评估电路状态
      
      if(n>1){
        contextp->timeInc(1);  // 增加仿真时间
        m_trace->dump(contextp->time());  // 写入波形数据 
        printf("a0 = %d\n",cpu_gpr[10]);
        //IFDEF(CONFIG_DIFFTEST,trace_and_difftest(&s, dut_npc,logbuf));
        IFDEF(CONFIG_DIFFTEST, difftest_step());
      }
    }  
//-------------------------------------
    g_nr_guest_inst ++;
    IFDEF(CONFIG_DIFFTEST,trace_and_difftest(&s, dut_npc,logbuf));
    if (npc_state.state != NPC_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
  state_judge();

  //trace();
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;
  
  //a++;
  return inst;

}
//=================================ITRACE==================================================
// void trace(){
// #ifdef CONFIG_ITRACE
//   char logbuf[128];
//   char *p = logbuf; 
//   p += snprintf(p, sizeof(logbuf), FMT_WORD ":", dut_pc); 
//   int ilen;
//   ilen = 4;
//   int i;
//   uint8_t *inst_write = (uint8_t *)&inst; 
//   for (i = ilen - 1; i >= 0; i --) {
//     p += snprintf(p, 4, " %02x", inst_write[i]);
//   }
//   int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
//   int space_len = ilen_max - ilen;
//   if (space_len < 0) space_len = 0;
//   space_len = space_len * 3 + 1;
//   memset(p, ' ', space_len);
//   p += space_len;

// #ifndef CONFIG_ISA_loongarch32r
//   void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
//   disassemble(p, logbuf + sizeof(logbuf) - p, dut_pc, (uint8_t *)(&inst),
//               ilen);
// #ifdef CONFIG_ITRACE_COND             
//   if(a==16){
// 	  a = 0;
//   }
//   strcpy(iringbuf[a++], logbuf);
// #endif
// #else
//   p[0] = '\0'; // the upstream llvm does not support loongarch32r
// #endif
// #endif
//   trace_and_difftest(&s, dut_npc,logbuf);
// //=====================================================================================================  
//   //uint64_t timer_end = get_time();
//   //g_timer += timer_end - timer_start;

//   //===================================================end==
// //  return inst;
// }

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
//---------------------------------------------------

//--------------------------------------------------设置监视点
static int cmd_w(char *args){
  bool success = true;
  word_t exprAns;
  char express[65536];

  if (strlen(args) <= 0){
    printf("Please enter the argument!\n");
    return 1;
  }
  /*检查表达式是否正确是必要的*/
  exprAns = expr(args, &success);
  if (success == false){
    printf("express is error\n");
    return 1;
  }
  Assert(strlen(args) < 65536, "express is too long in cmd_w");
  strncpy(express, args, strlen(args));
  express[strlen(args)] = '\0';
  //这里直接传递args会有奇怪的错误
  watchpoint_create(express, exprAns);

  return 0;
}
//--------------------------------操作
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","Pause the program after stepping through N instructions,When N is not given, it defaults to 1", cmd_si },
  {"info","Print register status", cmd_info },
  {"x","Find the value of the expression EXPR as the starting memory address, and output N consecutive 4-byte outputs in hexadecimal",cmd_x},
  {"p","Calculate the value of the expression after calculating p", cmd_p },
  {"d","Delete monitoring point with serial number N",cmd_d},
  {"w","Pause program execution when the value of expression EXPR changes",cmd_w},	

  /* TODO: Add more commands */

};
#define NR_CMD ARRLEN(cmd_table)
//----------------------------------------------------删除监视点
static int cmd_d(char *args){
  int no = -1;
  sscanf(args,"%d",&no);
   //bool success = true;
  if(no <= -1){
    printf("Please enter a right argument!\n");
    return 1;
  }
  else{
    free_wp(no);
    return 0;
  }
  Log("ERROR in cmd_d");
  return 0;
}
//------------------------------------打印寄存器
static int cmd_info(char *args){
  char *arg = strtok(args," ");
  if(arg == NULL){
    printf("PLEASR ENTER AN ARGUMNET\n");
    return 1;}
  else if (*arg == 'r'){
    isa_reg_display();
    return 0;
  }
  else if (*arg == 'w'){
    watchpoint_print();
    return 0;
  }
  else {
    printf("Don't have this argument\n");
    return 1;
  }
  Log("ERROR in cmd_info");
  return 0;
}
//-------------------------------------退出
static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}
//------------------------------------帮助
static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command %s\n", arg);
  }
  return 0;
}

//--------------------------------单步执行
static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    i = 1;
  }
  else {
    sscanf (arg, "%d", &i);
    printf("si_i=%d\n",i);
  }
  quit =1;
  cpu_exec(i);
  return 0;
}

//----------------------------------------cmd_c
static int cmd_c(char *args){
  is_batch_mode = 1;
  quit = 1;
  uint32_t inst = cpu_exec(-1);//,pc);
  return 0;
}
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}


void sdb_mainloop(){
  if(is_batch_mode == 1) {
    cmd_c(NULL);
    return;
  }
  quit = 0;
  while(1){
    for (char *str; (str = rl_gets()) != NULL; ) {
     char *str_end = str + strlen(str);
      
      /* extract the first token as the command */
      char *cmd = strtok(str, " ");
      if (cmd == NULL) { continue;}

      /* treat the remaining string as the arguments,
         which may need further parsing
      */
      char *args = cmd + strlen(cmd) + 1;
      if (args >= str_end) {
        args = NULL;
      } 

      int i;
      for (i = 0; i < NR_CMD; i ++) {
        if (strcmp(cmd, cmd_table[i].name) == 0) {
          if (cmd_table[i].handler(args) < 0) {return; }
            break;
        }
      }
      if(quit == 1 ) { return;}
      if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    }
    if(quit == 1 ) {break;}
  }
}


//=================================iringbuf===================================
#ifdef CONFIG_ITRACE_COND
void printIB(){
    for(int i = 0; i<=15; i++){
        if(i == a-1){
		printf("-->%d:%s\n",i,iringbuf[i]);
	}
	else printf("   %d:%s\n",i,iringbuf[i]);
    }
}
extern void isa_reg_display();
void assert_fail_msg() {//输出错误信息
  isa_reg_display();
  Log("-------------");
  //printList();
  //freeList();
  printIB();
  statistic();
}
#endif

//===============================ftrace======================================

typedef struct {
    char name[64];
    paddr_t addr;      //the function head address
    Elf32_Xword size;
} Symbol;

Symbol *s_table = NULL;  //储存符号表的函数信息
int func_num = 0;//记录符号表中函数的个数
void init_ftrace(const char *elf_file)
{
    //==================================判断文件是否正确=================================
    printf("111111111111111111111111\n");
    if(elf_file == NULL){
      printf("elf_file == NULL\n");
      return;
    } 
    
    FILE *fp;
    fp = fopen(elf_file, "rb");
    
    if(fp == NULL)
    {
        printf("failed to open the elf file!\n");
        exit(0);
    }
	
    Elf32_Ehdr edhr;
	  //读取elf头
    if(fread(&edhr, sizeof(Elf32_Ehdr), 1, fp) <= 0)
    {
        printf("fail to read the elf_head!\n");
        exit(0);
    }
    //判断是不是一个elf文件
    if(edhr.e_ident[0] != 0x7f || edhr.e_ident[1] != 'E' || 
       edhr.e_ident[2] != 'L' ||edhr.e_ident[3] != 'F')
    {
        printf("The opened file isn't a elf file!\n");
        exit(0);
    }
    //移动到节头表
    fseek(fp, edhr.e_shoff, SEEK_SET);// e_shoff节头表偏移量

    Elf32_Shdr shdr;
    char *string_table = NULL;
    //寻找字符串表
    for(int i = 0; i < edhr.e_shnum; i++)// e_shnum节头表中的条目数量
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)//节头信息读取到shdr
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        
        if(shdr.sh_type == SHT_STRTAB)//找到字符串表
        {
            //获取字符串表
            string_table = (char *)malloc(shdr.sh_size);
            fseek(fp, shdr.sh_offset, SEEK_SET);//移动到在符号表的偏移位置
            if(fread(string_table, shdr.sh_size, 1, fp) <= 0)//保存符号表的内容
            {
                printf("fail to read the strtab\n");
                exit(0);
            }
        }
    }
    
    //===============================================寻找符号表
    fseek(fp, edhr.e_shoff, SEEK_SET);//移动到节头表
    
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }

        if(shdr.sh_type == SHT_SYMTAB)//寻找到字符串表
        { 
            fseek(fp, shdr.sh_offset, SEEK_SET);

            Elf32_Sym sym;

            size_t sym_count = shdr.sh_size / shdr.sh_entsize;//符号表中符号的数量
            s_table = (Symbol*)malloc(sizeof(Symbol) * sym_count);

            for(size_t j = 0; j < sym_count; j++)
            {
                if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }

                if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
                {
                    const char *name = string_table + sym.st_name;
                    strncpy(s_table[func_num].name, name, sizeof(s_table[func_num].name) - 1);
                    s_table[func_num].addr = sym.st_value;
                    s_table[func_num].size = sym.st_size;
                    func_num++;
                }
            }
        }
    }
    fclose(fp);
    for(int i = 0; i < func_num; i++){
      printf("[ftrace] name:%s\taddr:0X%x\tsize:%ld\n",s_table[i].name,s_table[i].addr,s_table[i].size);
    }
    free(string_table);
}

int rec_depth = 1;
void call_func()
{
    int i = 0;
    for(; i < func_num; i++)
    {//用地址判断函数
        if( dut_pc >= s_table[i].addr &&  dut_pc < (s_table[i].addr + s_table[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", dut_pc);

    for(int k = 0; k < rec_depth; k++) printf("  ");

    rec_depth++;

    printf("call  [%s@0x%08x]\n", s_table[i].name,  dut_pc);
}

void ret_func()
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(dut_pc >= s_table[i].addr && dut_pc < (s_table[i].addr + s_table[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", dut_pc);

    rec_depth--;

    for(int k = 0; k < rec_depth; k++) printf("  ");

    printf("ret  [%s]\n", s_table[i].name);
}
bool prev_call = false;
bool prev_ret = false;
void ftrace_check_inst(uint32_t inst)
{
    if (prev_call)
        call_func();
    if (prev_ret)
        ret_func();
    if (((inst & 0xfff) == 0xef) || ((inst & 0x7fff) == 0xe7))
        prev_call = true;
    else
        prev_call = false;

    if (inst == 0x8067)
        prev_ret = true;
    else
        prev_ret = false;

}
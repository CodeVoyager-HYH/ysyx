#include <verilated.h>  // Verilator 库头文件
#include "Vysyx_24080014_cpu.h"  // 包含由 Verilator 生成的设计头文件
#include "../include/common.h"
#include "../include/vaddr.h"

extern uint32_t dut_npc ;
extern uint32_t inst;
extern Vysyx_24080014_cpu dut;
extern int no_img;
extern uint64_t g_nr_guest_inst;
uint32_t cpu_gpr[20] ;//16+4 32个寄存器 4个csrs寄存器 顺序mcause mepc mstatus mtvec
uint32_t* snpc;
uint32_t ins_val;
extern uint8_t *pmem;//物理内存
extern NPCState npc_state;
int global_judge = ERROR;
int right_judge = ERROR;
int diff_pc_change = 0;
void state_judge();
extern uint32_t dut_pc;
int cpu_gpr10;
void init_disasm(const char *triple);
uint32_t npc = 0x80000000;



//取指过程是先把物理地址转换成虚拟地址，然后进行赋值

//===========================================自己指定的指令======================
static const uint32_t img_memory[] {
  0b00101010101000000000010100010011,
  0b01000001111101010101010110010011,
  0b00000000000100000000000001110011
};

uint32_t *noimg(size_t size){//init_mem
  uint32_t *memory = (uint32_t*)malloc(size * sizeof(uint32_t));
  memcpy(memory,img_memory,sizeof(img_memory));
  if(memory == NULL) exit(0);
  return memory;
}
uint32_t guest(uint32_t addr){return addr-0x80000000;}
uint32_t noimg_pread(uint32_t *memory, uint32_t vaddr){//pmem_read
  uint32_t paddr = guest(vaddr);
  return memory[paddr/4];
}

long write_inst_to_mem() {
  for (size_t i = 0; i < sizeof(img_memory) / sizeof(img_memory[0]); i++) {
        uint32_t inst = img_memory[i];
        pmem[i * 4 + 0] = (inst >> 0) & 0xFF;   // 低 8 位
        pmem[i * 4 + 1] = (inst >> 8) & 0xFF;  // 次低 8 位
        pmem[i * 4 + 2] = (inst >> 16) & 0xFF; // 次高 8 位
        pmem[i * 4 + 3] = (inst >> 24) & 0xFF; // 高 8 位
    }
  return sizeof(img_memory);
}

void set_npc_state(int state, vaddr_t pc, int halt_ret) {
    npc_state.state = state;
    npc_state.halt_pc = pc;
    npc_state.halt_ret = halt_ret;
}
//----------------------------------取指---------------------------------------
uint32_t fetch_ins(){//uint32_t pc){
    uint32_t ins;
   // g_nr_guest_inst ++;
    ins = vaddr_ifetch(dut_pc,4);
    if(no_img == 1){
      uint32_t *memory;
      printf("noimg\n");
      memory = noimg(sizeof(img_memory)/sizeof(uint32_t));
      uint32_t tem_ins = noimg_pread(memory,dut_pc);
      printf("tem_ins = %u\n",tem_ins);
      return noimg_pread(memory,dut_pc);
    }
    return vaddr_ifetch(dut_pc,4);//取指
}
//--------------------------------寄存器---------------------------------
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {

   uint32_t* gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
   for(int i = 0; i < 20; i++){
    cpu_gpr[i] = gpr[i];
   }
   
}

extern "C" void set_nextpc_ptr(const svLogicVecVal* r) {
    snpc = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
//----------------------------------ebreak-----------------------------

extern "C" void npctrap(){
  Log("excute the ebreak inst");
  Log("cpu_gpr[10] = 0x%x",cpu_gpr[10]);
  global_judge = OK;
  cpu_gpr10 = cpu_gpr[10];
  npc_state.state = NPC_QUIT;
}

//---------------------------------打印寄存器------------------------------
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *CSRs[] = {
  "mcause", "mepc", "mstatus", "mtvec"
};

bool checkregs(regfile *ref, regfile *dut) {
  if(ref->pc != dut->pc){
    printf("difftest error: ");
    printf("next reg pc is diff: ref = 0x%x, dut = 0x%x\n",ref->pc,dut->pc);
    return false;
  }

  for (int i = 0; i < 16; i++) {
    if(ref->x[i] != dut->x[i]){
      printf("difftest error at nextpc = 0x%x, ",dut->pc);
      printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",regs[i],ref->x[i],dut->x[i]);
      return false;
    }
  }
  
  // if(ref->mcause != dut->mcause){//mcause mepc mstatus mtvec
  //   printf("difftest error at nextpc = 0x%x, ",dut->pc);
  //   printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",CSRs[0],ref->mcause,dut->mcause);
  //   return false;
  // }
  // if(ref->mepc != dut->mepc){//mcause mepc mstatus mtvec
  //   printf("difftest error at nextpc = 0x%x, ",dut->pc);
  //   printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",CSRs[1],ref->mepc,dut->mepc);
  //   return false;
  // }
  // if(ref->mstatus != dut->mstatus){//mcause mepc mstatus mtvec
  //   printf("difftest error at nextpc = 0x%x, ",dut->pc);
  //   printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",CSRs[2],ref->mstatus,dut->mstatus);
  //   return false;
  // }
  // if(ref->mtvec != dut->mtvec){//mcause mepc mstatus mtvec
  //   printf("difftest error at nextpc = 0x%x, ",dut->pc);
  //   printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",CSRs[3],ref->mtvec,dut->mtvec);
  //   return false;
  // }  

  return true;
}
void print_regs(regfile *ref, regfile *dut){
  printf("---------------DUT REGS---------------\n");
  printf("$pc = 0x%x\n",dut->pc);
  for (int i = 0; i < 16; i++) {
    printf("%-7s = 0x%08x\t",regs[i],dut->x[i]);
    if(i % 4==3) {
      printf("\n");
    }
  }
  printf("%-7s = 0x%08x\t",CSRs[0],dut->mcause);
  printf("%-7s = 0x%08x\t",CSRs[1],dut->mepc);
  printf("%-7s = 0x%08x\t",CSRs[2],dut->mstatus);
  printf("%-7s = 0x%08x\t",CSRs[3],dut->mtvec);

  printf("\n---------------REF REGS---------------\n");
  printf("$pc = 0x%x\n",ref->pc);
  for (int i = 0; i < 16; i++) {
    printf("%-7s = 0x%08x\t",regs[i],ref->x[i]);
    if(i % 4==3) {
      printf("\n");
    }
  }
  printf("%-7s = 0x%08x\t",CSRs[0],ref->mcause);
  printf("%-7s = 0x%08x\t",CSRs[1],ref->mepc);
  printf("%-7s = 0x%08x\t",CSRs[2],ref->mstatus);
  printf("%-7s = 0x%08x\t",CSRs[3],ref->mtvec);
  printf("\n\n");
}

extern "C" void isa_reg_display() {
  printf("-------------------------------NPC------------------\n");
  for (int i = 0; i < 16; i++){
    printf("%-10s\t0x%-10x\t0x%x\n", regs[i], cpu_gpr[i], cpu_gpr[i]);    
  }
  printf("%-10s\t0x%-10x\t0x%x\n", "pc", dut_pc, dut_pc);
  printf("%-10s\t0x%-10x\t0x%x\n", "mcause", cpu_gpr[32], cpu_gpr[32]);
  printf("%-10s\t0x%-10x\t0x%x\n", "mepc", cpu_gpr[33], cpu_gpr[33]);
  printf("%-10s\t0x%-10x\t0x%x\n", "mstatus", cpu_gpr[34], cpu_gpr[34]);
  printf("%-10s\t0x%-10x\t0x%x\n", "mtvec", cpu_gpr[35], cpu_gpr[35]);
}


word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  *success = true;
  for (i = 0; i < 16; i ++) {
    if (strcmp(regs[i], s) == 0) return cpu_gpr[i];
  }

  if (strcmp("pc", s) == 0) return dut_pc;

  *success = false;
  return 0;
}

//================================================================
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool flag = true;
    // printf("ref_r.pc : %#x,pc : %#x\n",ref_r->pc,pc);
    for(int i = 0;i < 16;i++){
        // nemu的gpr与npc的gpr相比
        if(ref_r -> gpr[i] != cpu_gpr[i]){
            Log("PC = 0x%x, Difftest Reg Compare failed at %s, Difftest reg Get " FMT_WORD ", NPC reg Get " FMT_WORD, pc, regs[i], ref_r->gpr[i], cpu_gpr[i]);
            flag = false;
        }
    }
    if(ref_r -> pc != dut_pc){
        Log("ref_r pc: " FMT_WORD "\tpc:" FMT_WORD "\tdnpc:" FMT_WORD, ref_r->pc, pc, dut_npc);
        flag = false;
    }
    return flag;
}

extern "C" int change_npc(int next_pc){
  if(diff_pc_change) {
    diff_pc_change = 0;
    return  (int)npc;
  }
  return next_pc;
}
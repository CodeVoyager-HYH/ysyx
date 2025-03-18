#include <dlfcn.h>
#include "../include/common.h"         
#include "../include/addr.h"                   
#include "../include/difftest-def.h"
extern uint32_t cpu_gpr[20];//mcause mepc mstatus mtvec
extern uint32_t dut_pc;
extern Vysyx_24080014_cpu dut;
extern VerilatedContext* contextp; 
extern VerilatedVcdC *m_trace;
bool is_skip_ref = false;
bool is_skip_ref_r = false;
regfile pack_dut_regfile(uint32_t *dut_reg,uint32_t pc) {
  regfile dut;
  for (int i = 0; i < 16; i++) {
    dut.x[i] = dut_reg[i];
  }
  dut.mcause = dut_reg[17];
  dut.mepc =  dut_reg[18];
  dut.mstatus =  dut_reg[19];
  dut.mtvec =  dut_reg[20];
  dut.pc = pc;

  return dut;
}

bool checkregs(regfile *ref, regfile *dut) ;
void print_regs(regfile *ref, regfile *dut);
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint32_t n) = NULL;
void (*ref_difftest_raise_intr)(uint32_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size) {
  for(int i = 0; i < 16; i++){
    cpu_gpr[i] = 0;
  }
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  if((handle = dlopen(ref_so_file, RTLD_NOW)) == NULL) {  
        printf("dlopen - %sn", dlerror());  
        exit(-1);  
    }  

  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))dlsym(handle , "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint32_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint32_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init();
  ref_difftest_memcpy(INST_START,guest_to_host(INST_START), img_size, DIFFTEST_TO_REF);
 
  //regfile dut = pack_dut_regfile(cpu_gpr, INST_START); printf("sd\n");
  ref_difftest_regcpy(&cpu_gpr, DIFFTEST_TO_REF);
}

int exit_diff = 0;
extern void isa_reg_display();
bool difftest_check() {
  regfile ref,dut;
  uint8_t ret;
  if (is_skip_ref_r) {
    dut = pack_dut_regfile(cpu_gpr, dut_pc);
    ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);
    is_skip_ref_r = false;
    return true;
  }

  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  dut = pack_dut_regfile(cpu_gpr, dut_pc);
  ret = checkregs(&ref, &dut);
  if(!ret) {
    print_regs(&ref, &dut);
    exit_diff = 1;
    //IFNDEF(CONFIG_DIFFTEST_RUN,assert(0));
  }    
  return ret;
}

void difftest_step() {
  if (is_skip_ref_r) {
    is_skip_ref_r = true;
    is_skip_ref = false;
    return;
  }
  ref_difftest_exec(1);
  difftest_check();
}
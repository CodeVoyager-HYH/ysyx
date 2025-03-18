/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"
#define REG 32
extern int gpr_index ;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *CSRs[] = {
  "mcause", "mepc", "mstatus", "mtvec"
};

void isa_reg_display() {
  int i;
  printf("------------------------nemu-----------------\n");
  for (i = 0; i < REG; i++){
    printf("%-10s\t0x%-10x\t0x%x\n", regs[i], cpu.gpr[i], cpu.gpr[i]);    
  }
  printf("%-10s\t0x%-10x\t0x%x\n", "mcause", cpu.csrs.mcause, cpu.csrs.mcause);
  printf("%-10s\t0x%-10x\t0x%x\n", "mepc", cpu.csrs.mepc, cpu.csrs.mepc);
  printf("%-10s\t0x%-10x\t0x%x\n", "mstatus", cpu.csrs.mstatus, cpu.csrs.mstatus);
  printf("%-10s\t0x%-10x\t0x%x\n", "mtvec", cpu.csrs.mtvec, cpu.csrs.mtvec);
  printf("%-10s\t0x%-10x\t0x%x\n", "pc", cpu.pc, cpu.pc);
  printf("\n");
}

void print_regs(CPU_state *ref, vaddr_t pc){

  printf("difftest error at nextpc = 0x%x, ",pc);
  printf("reg %s is diff: ref = 0x%x, dut = 0x%x\n",regs[gpr_index],ref->gpr[gpr_index],cpu.gpr[gpr_index]); 
  printf("---------------DUT REGS---------------\n");
  printf("$pc = 0x%x\n",pc);
  for (int i = 0; i < 32; i++) {
    printf("%-7s = 0x%08x\t",regs[i],cpu.gpr[i]);
    if(i % 4==3) {
      printf("\n");
    }
  }
  printf("%-7s = 0x%08x\t",CSRs[0],cpu.csrs.mcause);
  printf("%-7s = 0x%08x\t",CSRs[1],cpu.csrs.mepc);
  printf("%-7s = 0x%08x\t",CSRs[2],cpu.csrs.mstatus);
  printf("%-7s = 0x%08x\t",CSRs[3],cpu.csrs.mtvec);

  printf("\n---------------REF REGS---------------\n");
  printf("$pc = 0x%x\n",ref->pc);
  for (int i = 0; i < 32; i++) {
    printf("%-7s = 0x%08x\t",regs[i],ref->gpr[i]);
    if(i % 4==3) {
      printf("\n");
    }
  }
  printf("\n\n");
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  *success = true;
  for (i = 0; i < 32; i ++) {
    if (strcmp(regs[i], s) == 0) return cpu.gpr[i];
  }

  if (strcmp("pc", s) == 0) return cpu.pc;

  *success = false;
  return 0;
}

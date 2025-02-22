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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

extern void isa_reg_display();
#define REG 32
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	
	if(direction == DIFFTEST_TO_REF) {
		memcpy(guest_to_host(addr), buf, n);
	}
	else {
		assert(0);
	}
}
typedef struct {
  uint32_t x[REG];
  uint32_t pc;
  uint32_t mepc;
  uint32_t mcause;
  uint32_t mtvec;
  uint32_t mstatus;
} regfile;
__EXPORT void difftest_regcpy(void *dut, bool direction) {
	regfile *diff_context = (regfile *)dut;
	uint32_t* context = (uint32_t*)dut;
	if(direction == DIFFTEST_TO_REF) {
		for(int i=0; i<REG; i++) {
			cpu.gpr[i] = context[i];
		}
		cpu.csrs.mcause = context[32];//cause mepc mstatus mtvec
		cpu.csrs.mepc = context[33];
		cpu.csrs.mstatus = context[34];
		cpu.csrs.mtvec = context[35];
	}
	else {
		for(int i=0; i<REG; i++) {
			diff_context->x[i] = cpu.gpr[i];
		}
		diff_context->pc = cpu.pc;
		diff_context->mcause = cpu.csrs.mcause;
		diff_context->mepc = cpu.csrs.mepc;
		diff_context->mstatus = cpu.csrs.mstatus;
		diff_context->mtvec = cpu.csrs.mtvec;
	}

}

__EXPORT void difftest_exec(uint64_t n) {
	
	cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
	
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
  
}
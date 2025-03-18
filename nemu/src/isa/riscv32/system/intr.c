/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
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

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //nemu是硬件，我们要完成异常实现硬件需要做的事:
  //1.保存pc到mepc
  //2.mcause保存异常号
  //3.从mtvec寄存器中取出异常入口地址
  //4.跳转到异常入口地址
  cpu.csrs.mepc = epc;
  cpu.csrs.mcause = NO;
  cpu.csrs.mstatus = 0x1800;
#ifdef CONFIG_ETRACE
  printf("[ETrace] mtvec = 0x%x, mepc = 0x%x, mstatus = 0x%x, mcause = 0x%x\n",
    cpu.csrs.mtvec, cpu.csrs.mepc, cpu.csrs.mstatus, cpu.csrs.mcause);
#endif
  return cpu.csrs.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

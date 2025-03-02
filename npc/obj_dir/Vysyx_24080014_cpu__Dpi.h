// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24080014_CPU__DPI_H_
#define VERILATED_VYSYX_24080014_CPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_jump.v:5:30
    extern void get_npc(int npc);
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_pc.v:1:30
    extern void get_pc(int pc);
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_gpr.v:2:30
    extern void isa_reg_display();
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_idu.v:156:30
    extern void npctrap();
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_if_sram.v:1:29
    extern int rtl_pmem_read(int raddr);
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_mem_ass.v:1:30
    extern void rtl_pmem_write(int waddr, int wdata, char wmask);
    // DPI import at /home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_gpr.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard

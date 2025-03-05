// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24080014_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24080014_cpu__Syms.h"
#include "Vysyx_24080014_cpu___024unit.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit(const VlUnpacked<IData/*31:0*/, 36> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {35, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void isa_reg_display();

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_isa_reg_display_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_isa_reg_display_TOP____024unit\n"); );
    // Body
    isa_reg_display();
}

extern "C" void npctrap();

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_npctrap_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_npctrap_TOP____024unit\n"); );
    // Body
    npctrap();
}

extern "C" int rtl_pmem_read(int raddr);

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rtl_pmem_read__Vfuncrtn__Vcvt;
    rtl_pmem_read__Vfuncrtn__Vcvt = rtl_pmem_read(raddr__Vcvt);
    rtl_pmem_read__Vfuncrtn = rtl_pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void get_npc(int npc);

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit(IData/*31:0*/ npc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit\n"); );
    // Body
    int npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    get_npc(npc__Vcvt);
}

extern "C" void rtl_pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    rtl_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void get_pc(int pc);

VL_INLINE_OPT void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    get_pc(pc__Vcvt);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24080014_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24080014_cpu__Syms.h"
#include "Vysyx_24080014_cpu___024root.h"

extern "C" void difftest(int exec);

VL_INLINE_OPT void Vysyx_24080014_cpu___024root____Vdpiimwrap_ysyx_24080014_cpu__DOT__pc1__DOT__difftest_TOP(IData/*31:0*/ exec) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root____Vdpiimwrap_ysyx_24080014_cpu__DOT__pc1__DOT__difftest_TOP\n"); );
    // Body
    int exec__Vcvt;
    for (size_t exec__Vidx = 0; exec__Vidx < 1; ++exec__Vidx) exec__Vcvt = exec;
    difftest(exec__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__ico(Vysyx_24080014_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24080014_cpu___024root___eval_triggers__ico(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24080014_cpu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__act(Vysyx_24080014_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24080014_cpu___024root___eval_triggers__act(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__tem_rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24080014_cpu__DOT__tem_rst)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24080014_cpu__DOT__tem_rst 
        = vlSelf->ysyx_24080014_cpu__DOT__tem_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24080014_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit(const VlUnpacked<IData/*31:0*/, 21> &a);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_24080014_cpu___024root___nba_sequent__TOP__1(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__2__Vfuncout;
    __Vfunc_rtl_pmem_read__2__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0;
    __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v2;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v2 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7;
    __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v9;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v9 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13;
    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13 = 0;
    // Body
    vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc = vlSelf->ysyx_24080014_cpu__DOT__pc;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12 = 0U;
    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13 = 0U;
    if (vlSelf->rst) {
        if (vlSelf->ysyx_24080014_cpu__DOT__ready) {
            if (((0x80000000U == vlSelf->ysyx_24080014_cpu__DOT__pc) 
                 & (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid))) {
                Vysyx_24080014_cpu___024root____Vdpiimwrap_ysyx_24080014_cpu__DOT__pc1__DOT__difftest_TOP(1U);
                vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc 
                    = vlSelf->ysyx_24080014_cpu__DOT__next_pc;
            } else if (((0x80000000U != vlSelf->ysyx_24080014_cpu__DOT__pc) 
                        & (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid))) {
                Vysyx_24080014_cpu___024root____Vdpiimwrap_ysyx_24080014_cpu__DOT__pc1__DOT__difftest_TOP(1U);
                vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc 
                    = vlSelf->ysyx_24080014_cpu__DOT__next_pc;
            }
        } else {
            Vysyx_24080014_cpu___024root____Vdpiimwrap_ysyx_24080014_cpu__DOT__pc1__DOT__difftest_TOP(0U);
        }
    } else {
        vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc = 0x80000000U;
    }
    if ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        if (vlSelf->ysyx_24080014_cpu__DOT__mem_ready) {
            if (((IData)(vlSelf->ysyx_24080014_cpu__DOT__RegWr) 
                 & (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid))) {
                vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__0 
                    = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
                if ((0x14U >= (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 
                        = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__0;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 = 1U;
                    __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0 
                        = vlSelf->ysyx_24080014_cpu__DOT__rd;
                }
                if ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1 
                        = vlSelf->ysyx_24080014_cpu__DOT__pc;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1 = 1U;
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v2 
                        = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                        [0xfU];
                } else if ((0x300U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3 
                        = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3 = 1U;
                } else if ((0x305U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4 
                        = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4 = 1U;
                } else if ((0x341U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5 
                        = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5 = 1U;
                } else if ((0x342U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
                    __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6 
                        = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
                    __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6 = 1U;
                }
            }
        }
    } else if (((IData)(vlSelf->ysyx_24080014_cpu__DOT__RegWr) 
                & (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid))) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__1 
            = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        if ((0x14U >= (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 
                = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__1;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 = 1U;
            __Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7 
                = vlSelf->ysyx_24080014_cpu__DOT__rd;
        }
        if ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8 
                = vlSelf->ysyx_24080014_cpu__DOT__pc;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8 = 1U;
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v9 
                = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                [0xfU];
        } else if ((0x300U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10 = 1U;
        } else if ((0x305U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11 = 1U;
        } else if ((0x341U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12 = 1U;
        } else if ((0x342U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
            __Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13 = 1U;
        }
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[__Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v0;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x12U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v1;
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x11U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v2;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x13U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v3;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x14U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v4;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x12U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v5;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x11U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v6;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[__Vdlyvdim0__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v7;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x12U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v8;
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x11U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v9;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x13U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v10;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x14U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v11;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x12U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v12;
    }
    if (__Vdlyvset__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x11U] 
            = __Vdlyvval__ysyx_24080014_cpu__DOT__gpr__DOT__general_register__v13;
    }
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0U] = 0U;
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register);
    if ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write)))) {
            Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(
                                                                                ((1U 
                                                                                == 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                                 ? 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 7U)))
                                                                                 : 7U))
                                                                                 ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                                                 : 0U), 
                                                                                ((0U 
                                                                                == 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                                 ? 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 0U
                                                                                 : 7U)))
                                                                                 : 7U))
                                                                                 ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                                 : 0U), 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                                 ? 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                                >> 0xcU)))
                                                                                 ? 3U
                                                                                 : 0U)))
                                                                                 : 0U));
            vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__i 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__i)));
            vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write = 1U;
        }
        vlSelf->ysyx_24080014_cpu__DOT__mem_ready = 1U;
        vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write = 1U;
    } else if ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock))) {
        Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(
                                                                                ((1U 
                                                                                == 
                                                                                ((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                                 ? 1U
                                                                                 : 7U))
                                                                                 ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                                                 : 0U), __Vfunc_rtl_pmem_read__2__Vfuncout);
        vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
            = __Vfunc_rtl_pmem_read__2__Vfuncout;
        vlSelf->ysyx_24080014_cpu__DOT__mem_ready = 1U;
    } else {
        vlSelf->ysyx_24080014_cpu__DOT__mem_ready = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write = 0U;
    }
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock 
        = (((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
            & (~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)))
            ? 1U : (((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                     & (~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)))
                     ? 2U : 0U));
}

void Vysyx_24080014_cpu___024unit____Vdpiimwrap_npctrap_TOP____024unit();

VL_INLINE_OPT void Vysyx_24080014_cpu___024root___nba_sequent__TOP__2(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__0__Vfuncout;
    __Vfunc_rtl_pmem_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->ysyx_24080014_cpu__DOT__tem_rst) {
        if ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state))) {
            vlSelf->ysyx_24080014_cpu__DOT__valid = 1U;
            if (vlSelf->ysyx_24080014_cpu__DOT__ready) {
                vlSelf->ysyx_24080014_cpu__DOT__valid = 0U;
                vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state))) {
            Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__pc, __Vfunc_rtl_pmem_read__0__Vfuncout);
            vlSelf->ysyx_24080014_cpu__DOT__inst = __Vfunc_rtl_pmem_read__0__Vfuncout;
            vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state))) {
            if (vlSelf->ysyx_24080014_cpu__DOT__ready) {
                vlSelf->ysyx_24080014_cpu__DOT__valid = 1U;
                vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 0U;
            }
        } else {
            vlSelf->ysyx_24080014_cpu__DOT__valid = 1U;
            vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 0U;
        }
    } else {
        vlSelf->ysyx_24080014_cpu__DOT__valid = 1U;
        vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 0U;
    }
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state 
        = vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state;
    if ((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        if ((1U == (vlSelf->ysyx_24080014_cpu__DOT__inst 
                    >> 0x14U))) {
            Vysyx_24080014_cpu___024unit____Vdpiimwrap_npctrap_TOP____024unit();
        }
    }
    if ((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        if ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                          >> 0xcU)))) {
            vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add 
                = (0xfffU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                             >> 0x14U));
            vlSelf->ysyx_24080014_cpu__DOT__rd_ctl = 2U;
        } else if ((1U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0xcU)))) {
            vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add 
                = (0xfffU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                             >> 0x14U));
            vlSelf->ysyx_24080014_cpu__DOT__rd_ctl = 5U;
        } else {
            vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add 
                = (0xfffU & 0U);
            vlSelf->ysyx_24080014_cpu__DOT__rd_ctl = 2U;
        }
        vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl = 
            ((0U == (vlSelf->ysyx_24080014_cpu__DOT__inst 
                     >> 0x14U)) ? 1U : ((0x302U == 
                                         (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0x14U))
                                         ? 2U : 0U));
        vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add 
            = (0xfffU & ((1U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xcU))) ? 
                         (vlSelf->ysyx_24080014_cpu__DOT__inst 
                          >> 0x14U) : ((2U == (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x14U)
                                        : 0U)));
    } else {
        vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__rd_ctl = ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                   ? 4U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 1U
                                                      : 2U))));
        vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add = 0U;
    }
    if ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        vlSelf->ysyx_24080014_cpu__DOT__rd = (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U));
        vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 2U;
        vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = 2U;
        vlSelf->ysyx_24080014_cpu__DOT__rs2_addr = 
            (0x1fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                      >> 0x14U));
        vlSelf->ysyx_24080014_cpu__DOT__rs1_addr = 
            (0x1fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                      >> 0xfU));
        vlSelf->ysyx_24080014_cpu__DOT__imm_type = 0U;
    } else {
        if ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
            vlSelf->ysyx_24080014_cpu__DOT__rd = (0x1fU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 7U));
            vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 2U;
            vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = 3U;
            vlSelf->ysyx_24080014_cpu__DOT__imm_type = 1U;
        } else {
            vlSelf->ysyx_24080014_cpu__DOT__rd = (0x1fU 
                                                  & ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                       ? 
                                                      (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 7U)
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                        ? 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 7U)
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                         ? 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                         >> 7U)
                                                         : 
                                                        ((0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                          ? 
                                                         (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                          >> 7U)
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                           ? 
                                                          (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                           >> 7U)
                                                           : 
                                                          ((0x67U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                            ? 
                                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 7U)
                                                            : 0U))))))));
            if ((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
                vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 3U;
                vlSelf->ysyx_24080014_cpu__DOT__imm_type = 4U;
            } else if ((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
                vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 2U;
                vlSelf->ysyx_24080014_cpu__DOT__imm_type = 2U;
            } else {
                vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr 
                    = ((0x67U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                        ? 2U : ((0x6fU == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 0U : 2U)));
                vlSelf->ysyx_24080014_cpu__DOT__imm_type 
                    = ((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                        ? 1U : ((0x67U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                 ? 1U : ((0x6fU == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 5U : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                   ? 3U
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 3U
                                                    : 6U)))));
            }
            vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr 
                = ((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                    ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                     >> 0xcU))) ? 6U
                        : 2U) : ((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 0U : ((0x23U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? 3U : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                       ? 3U
                                                       : 2U)))))));
        }
        vlSelf->ysyx_24080014_cpu__DOT__rs2_addr = 
            (0x1fU & ((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                       ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                          >> 0x14U) : ((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x14U)
                                        : 0U)));
        vlSelf->ysyx_24080014_cpu__DOT__rs1_addr = 
            (0x1fU & ((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                       ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                          >> 0xfU) : ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0xfU) : 
                                      ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0xfU)
                                        : ((0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xfU)
                                            : ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xfU)
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0xfU)
                                                    : 0U)))))));
    }
    vlSelf->ysyx_24080014_cpu__DOT__RegWr = ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                             | ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                | ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                   | ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                         | ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                            | ((0x73U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                               | (0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)))))))));
    if ((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        vlSelf->ysyx_24080014_cpu__DOT__npc_ctr = 3U;
        vlSelf->ysyx_24080014_cpu__DOT__eq_ctl = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 7U));
        vlSelf->ysyx_24080014_cpu__DOT__compare_ctl 
            = ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                             >> 0xcU))) ? 5U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 6U
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 7U))));
    } else {
        vlSelf->ysyx_24080014_cpu__DOT__npc_ctr = (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 0U
                                                     : 2U));
        vlSelf->ysyx_24080014_cpu__DOT__eq_ctl = 7U;
        vlSelf->ysyx_24080014_cpu__DOT__compare_ctl 
            = ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0xcU))) ? ((0U 
                                                == 
                                                (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0x19U))
                                                ? 4U
                                                : 7U)
                    : ((3U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                     >> 0xcU))) ? (
                                                   (0U 
                                                    == 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x19U))
                                                    ? 2U
                                                    : 7U)
                        : 7U)) : ((0x13U == (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                   ? ((3U == (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xcU)))
                                       ? 0U : 7U) : 7U));
    }
    vlSelf->ysyx_24080014_cpu__DOT__rmask = ((3U == 
                                              (0x7fU 
                                               & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                              ? ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 4U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 1U
                                                      : 7U)))))
                                              : 7U);
    if ((0x37U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        vlSelf->ysyx_24080014_cpu__DOT__alu_ctl = 8U;
        vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl = 2U;
    } else {
        vlSelf->ysyx_24080014_cpu__DOT__alu_ctl = (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 4U
                                                     : 1U)
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x19U))
                                                       ? 6U
                                                       : 0xfU)
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                         >> 0x19U))
                                                        ? 9U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                          >> 0x19U))
                                                         ? 9U
                                                         : 0xfU))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                          >> 0x19U))
                                                         ? 5U
                                                         : 0xfU)
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                           >> 0x19U))
                                                          ? 1U
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0x19U))
                                                           ? 0U
                                                           : 0xfU))
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0x19U))
                                                           ? 6U
                                                           : 0xfU)
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0x19U))
                                                            ? 8U
                                                            : 0xfU)
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                >> 0xcU)))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 0x19U))
                                                             ? 4U
                                                             : 0xfU)
                                                            : 
                                                           ((7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0x19U))
                                                              ? 3U
                                                              : 0xfU)
                                                             : 0xfU))))))))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 0U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 0U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 0U
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 0U
                                                           : 0xfU)))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 7U
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 6U
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 6U
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 6U
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                >> 0xcU)))
                                                            ? 6U
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? 7U
                                                             : 0xfU))))))
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                        ? 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 0U
                                                           : 0xfU)))
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                >> 0x1aU))
                                                               ? 8U
                                                               : 0xfU)
                                                              : 
                                                             ((5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                   >> 0xcU)))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                 >> 0x1aU))
                                                                ? 9U
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                  >> 0x1aU))
                                                                 ? 9U
                                                                 : 0xfU))
                                                               : 
                                                              ((4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                    >> 0xcU)))
                                                                ? 5U
                                                                : 
                                                               ((3U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                     >> 0xcU)))
                                                                 ? 6U
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                      >> 0xcU)))
                                                                  ? 4U
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                       >> 0xcU)))
                                                                   ? 3U
                                                                   : 0xfU)))))))
                                                            : 0xfU)))))))));
        vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl = 
            ((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
              ? ((5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                               >> 0xcU))) ? ((0x10U 
                                              == (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x1aU))
                                              ? 3U : 0U)
                  : 0U) : ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                            ? ((5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                             >> 0xcU)))
                                ? ((0x20U == (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x19U))
                                    ? 6U : ((0U == 
                                             (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x19U))
                                             ? 4U : 0U))
                                : ((1U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0xcU)))
                                    ? ((0U == (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x19U))
                                        ? 5U : 0U) : 0U))
                            : 0U));
    }
    vlSelf->ysyx_24080014_cpu__DOT__imm = ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__imm_type))
                                            ? (((- (IData)(
                                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xbU) 
                                               | (0x7ffU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))
                                            : ((3U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__imm_type))
                                                ? (0xfffff000U 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__imm_type))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                >> 0x14U)))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__imm_type))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                              >> 7U))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__imm_type))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                  >> 7U)))))
                                                      : 0U)))));
}

void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit(IData/*31:0*/ pc);

VL_INLINE_OPT void Vysyx_24080014_cpu___024root___nba_sequent__TOP__3(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_24080014_cpu__DOT__pc = vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc;
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__pc);
}

void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit(IData/*31:0*/ npc);

VL_INLINE_OPT void Vysyx_24080014_cpu___024root___nba_comb__TOP__0(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24080014_cpu__DOT__ready = (1U & (~ 
                                                   ((~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem_ready)) 
                                                    & ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                       | (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24080014_cpu__DOT__inst))))));
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2 
        = ((0x14U >= (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr))
            ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
           [vlSelf->ysyx_24080014_cpu__DOT__rs2_addr]
            : 0U);
    vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data = 
        ((0x300U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
         [0x13U] : ((0x305U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                     ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                    [0x14U] : ((0x341U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                               [0x12U] : ((0x342U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                          [0x11U] : 0U))));
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
        = ((0x14U >= (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr))
            ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
           [vlSelf->ysyx_24080014_cpu__DOT__rs1_addr]
            : 0U);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0 
        = (vlSelf->ysyx_24080014_cpu__DOT__imm + vlSelf->ysyx_24080014_cpu__DOT__pc);
    vlSelf->ysyx_24080014_cpu__DOT__alu_rs2 = ((0U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__pc
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr))
                                                      ? vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr))
                                                       ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                                       : 0U)))));
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h03500f17__0 
        = ((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                               >> 0x14U))) ? (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                              >> (0x3fU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))
            : 0U);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal 
        = ((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
           & (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
              == vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2));
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And = 
        (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
         & ((2U == ((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                     ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
             : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2));
    vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 = ((0U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__pc
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr))
                                                      ? vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr))
                                                       ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                                       : 0U)))));
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor = 
        (vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 ^ vlSelf->ysyx_24080014_cpu__DOT__alu_rs2);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add = 
        (vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 + vlSelf->ysyx_24080014_cpu__DOT__alu_rs2);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare 
        = (((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
             : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                 ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                 : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                     ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                     : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                         ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                         : 0U)))) < ((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                      : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                          : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                              : ((1U 
                                                  == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                  : 0U)))));
    vlSelf->ysyx_24080014_cpu__DOT__alu_out = ((5U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h03500f17__0
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__imm)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                       ? 
                                                      ((0x1fU 
                                                        >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                        ? 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                        << vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                        ? 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2))
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0x14U)))
                                                         ? 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                         << 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0x14U)))
                                                         : 0U)))))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                      ? 
                                                     ((0x1fU 
                                                       >= 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                           >> 0x14U)))
                                                       ? 
                                                      VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                                     (0x3fU 
                                                                      & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                         >> 0x14U)))
                                                       : 
                                                      (- 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                        >> 0x1fU)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                       ? 
                                                      ((0x1fU 
                                                        >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                        : 
                                                       (- 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                         >> 0x1fU)))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl))
                                                        ? 
                                                       ((0x1fU 
                                                         >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                         ? 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                                         >> vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                                         : 0U)
                                                        : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h03500f17__0)))
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl))
                                                       ? 
                                                      ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal)
                                                        ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->ysyx_24080014_cpu__DOT__pc))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal)
                                                         ? 
                                                        ((IData)(4U) 
                                                         + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                         : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add)
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->ysyx_24080014_cpu__DOT__pc)))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                        ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                         ? 
                                                        (vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                                         - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                          ? 
                                                         (~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                            ? 
                                                           (vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                                            | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl))
                                                              ? 
                                                             ((6U 
                                                               == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                               ? 
                                                              (VL_LTS_III(32, 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                            ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                            : 
                                                                           ((6U 
                                                                             == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                              : 0U))), 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                            ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                            : 
                                                                           ((6U 
                                                                             == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                              : 0U))))
                                                                ? 
                                                               ((IData)(4U) 
                                                                + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                                : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                ? 
                                                               (VL_LTS_III(32, 
                                                                           ((5U 
                                                                             == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                             : 
                                                                            ((6U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                               : 0U))), 
                                                                           ((5U 
                                                                             == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                             ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                             : 
                                                                            ((6U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                               : 0U))))
                                                                 ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0
                                                                 : 
                                                                ((IData)(4U) 
                                                                 + vlSelf->ysyx_24080014_cpu__DOT__pc))
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                 ? 
                                                                (VL_LTS_III(32, 
                                                                            ((5U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                              : 
                                                                             ((6U 
                                                                               == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                               : 
                                                                              ((4U 
                                                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                                                : 0U))), 
                                                                            ((5U 
                                                                              == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                              : 
                                                                             ((6U 
                                                                               == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                               : 
                                                                              ((4U 
                                                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                                                : 0U))))
                                                                  ? 1U
                                                                  : 0U)
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare)
                                                                   ? 
                                                                  ((IData)(4U) 
                                                                   + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                                   : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0)
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare)
                                                                    ? 1U
                                                                    : 0U)
                                                                   : 
                                                                  ((0U 
                                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                    ? 
                                                                   ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare)
                                                                     ? 1U
                                                                     : 0U)
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                                     ? 
                                                                    ((IData)(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare)
                                                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0
                                                                      : 
                                                                     ((IData)(4U) 
                                                                      + vlSelf->ysyx_24080014_cpu__DOT__pc))
                                                                     : 
                                                                    ((IData)(4U) 
                                                                     + vlSelf->ysyx_24080014_cpu__DOT__pc))))))))
                                                              : 0U))))))))))));
    vlSelf->ysyx_24080014_cpu__DOT__next_pc = ((0U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                                    ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__alu_out)
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->ysyx_24080014_cpu__DOT__pc))))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                    ? 
                                                   vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                                   [0x14U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                     ? 
                                                    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                                    [0x12U]
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->ysyx_24080014_cpu__DOT__pc))));
    vlSelf->ysyx_24080014_cpu__DOT__rd_data = ((2U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                    ? 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 
                                                    (((~ 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                             >> 0xcU))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                               >> 0xcU))))) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24080014_cpu__DOT__inst)))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
                                                                        >> 0xfU)))) 
                                                         << 0x10U) 
                                                        | (0xffffU 
                                                           & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                                        : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                                        : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                       ? vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                        ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                         ? 
                                                        ((IData)(4U) 
                                                         + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                         : 0U)))))));
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__next_pc);
}

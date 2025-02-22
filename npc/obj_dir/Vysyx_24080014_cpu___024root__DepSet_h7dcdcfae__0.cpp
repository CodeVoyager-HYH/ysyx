// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24080014_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24080014_cpu__Syms.h"
#include "Vysyx_24080014_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__act(Vysyx_24080014_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24080014_cpu___024root___eval_triggers__act(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24080014_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit(const VlUnpacked<IData/*31:0*/, 36> &a);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit(IData/*31:0*/ pc);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_npctrap_TOP____024unit();
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit(IData/*31:0*/ npc);

VL_INLINE_OPT void Vysyx_24080014_cpu___024root___nba_sequent__TOP__0(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
         | ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
            | ((0x67U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
               | ((0x6fU == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                  | ((0x17U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                     | ((0x37U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                        | ((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                           | (0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))))))))) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_hdcffde56__0 
            = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[(0x1fU 
                                                                    & ((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                        ? 
                                                                       (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                        >> 7U)
                                                                        : 
                                                                       ((3U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                                         ? 
                                                                        (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                         >> 7U)
                                                                         : 
                                                                        ((0x13U 
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
                                                                                : 0U))))))))))] 
            = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_hdcffde56__0;
        if ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))) {
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x21U] 
                = vlSelf->ysyx_24080014_cpu__DOT__pc;
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x20U] 
                = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                [0xfU];
        } else if ((0x300U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x22U] 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        } else if ((0x305U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x23U] 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        } else if ((0x341U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x21U] 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        } else if ((0x342U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add))) {
            vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0x20U] 
                = vlSelf->ysyx_24080014_cpu__DOT__rd_data;
        }
    }
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0U] = 0U;
    vlSelf->ysyx_24080014_cpu__DOT__pc = ((IData)(vlSelf->rst)
                                           ? 0x80000000U
                                           : vlSelf->ysyx_24080014_cpu__DOT__next_pc);
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc3_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register);
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__pc);
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24080014_cpu__DOT__pc, vlSelf->__Vfunc_rtl_pmem_read__0__rdata, vlSelf->__Vfunc_rtl_pmem_read__0__Vfuncout);
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__tem = vlSelf->__Vfunc_rtl_pmem_read__0__rdata;
    vlSelf->ysyx_24080014_cpu__DOT__inst = vlSelf->__Vfunc_rtl_pmem_read__0__Vfuncout;
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
        vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl = 0U;
        vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add = 0U;
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
                                                     : 7U))))
                                              : 7U);
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
                                                          : 0xfU))))
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
                                                                ((7U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                                      >> 0xcU)))
                                                                  ? 3U
                                                                  : 0xfU))))))
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
    if ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 2U;
        vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = 2U;
        vlSelf->ysyx_24080014_cpu__DOT__imm_type = 0U;
    } else if ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
        vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = 2U;
        vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = 3U;
        vlSelf->ysyx_24080014_cpu__DOT__imm_type = 1U;
    } else {
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
                             ? 0U : ((0x17U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                      ? 0U : 2U)));
            vlSelf->ysyx_24080014_cpu__DOT__imm_type 
                = ((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                    ? 1U : ((0x67U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                             ? 1U : ((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                      ? 5U : ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? 3U
                                               : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                   ? 3U
                                                   : 6U)))));
        }
        vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = (
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
                                                     ? 6U
                                                     : 2U)
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
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
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2 
        = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
        [(0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                    ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                       >> 0x14U) : ((0x63U == (0x7fU 
                                               & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                     ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                        >> 0x14U) : 
                                    ((0x23U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                      ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                         >> 0x14U) : 0U))))];
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
        = vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
        [(0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                    ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                       >> 0xfU) : ((0x73U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                    ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xfU) : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                     ? 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                       ? 
                                                      (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                        ? 
                                                       (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0xfU)
                                                        : 0U))))))))];
    vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data = 
        ((0x300U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
         [0x22U] : ((0x305U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                     ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                    [0x23U] : ((0x341U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                               [0x21U] : ((0x342U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                          [0x20U] : 0U))));
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
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0 
        = (vlSelf->ysyx_24080014_cpu__DOT__imm + vlSelf->ysyx_24080014_cpu__DOT__pc);
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
    if ((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))) {
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
    }
    Vysyx_24080014_cpu___024unit____Vdpiimwrap_get_npc_TOP____024unit(
                                                                      ((0U 
                                                                        == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                                        ? 
                                                                       ((3U 
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
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                                         ? 
                                                                        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                                                        [0x23U]
                                                                         : 
                                                                        ((2U 
                                                                          == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                                          ? 
                                                                         vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                                                         [0x21U]
                                                                          : 
                                                                         ((IData)(4U) 
                                                                          + vlSelf->ysyx_24080014_cpu__DOT__pc)))));
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
                                                   [0x23U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                     ? 
                                                    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                                    [0x21U]
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->ysyx_24080014_cpu__DOT__pc))));
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
                                                                              : 0U), vlSelf->__Vfunc_rtl_pmem_read__2__rdata, vlSelf->__Vfunc_rtl_pmem_read__2__Vfuncout);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__tem = vlSelf->__Vfunc_rtl_pmem_read__2__rdata;
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
        = vlSelf->__Vfunc_rtl_pmem_read__2__Vfuncout;
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
}

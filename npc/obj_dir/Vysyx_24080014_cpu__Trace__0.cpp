// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24080014_cpu__Syms.h"


void Vysyx_24080014_cpu___024root__trace_chg_sub_0(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24080014_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24080014_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24080014_cpu___024root*>(voidSelf);
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24080014_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24080014_cpu___024root__trace_chg_sub_0(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
        bufp->chgIData(oldp+3,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                 ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                [0x23U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                            ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                           [0x21U] : 
                                           ((IData)(4U) 
                                            + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
        bufp->chgIData(oldp+6,(((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                 ? ((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                     : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                         ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                         : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                             ? (0xfffffffeU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__alu_out)
                                             : ((IData)(4U) 
                                                + vlSelf->ysyx_24080014_cpu__DOT__pc))))
                                 : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                     ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                    [0x23U] : ((2U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                               [0x21U]
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyx_24080014_cpu__DOT__pc))))),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
        bufp->chgIData(oldp+16,(((1U == ((0x23U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? ((2U == 
                                              (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((0U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 7U)))
                                          : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : 0U)),32);
        bufp->chgIData(oldp+17,(((0U == ((0x23U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? ((2U == 
                                              (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                              ? 0U : 
                                             ((0U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 0U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 7U)))
                                          : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : 0U)),32);
        bufp->chgCData(oldp+18,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xfU)
                                           : ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0xfU)
                                               : ((3U 
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
                                                       : 0U))))))))),5);
        bufp->chgCData(oldp+19,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x14U)
                                           : ((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)
                                               : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                   ? 
                                                  (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0x14U)
                                                   : 0U))))),5);
        bufp->chgSData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
        bufp->chgSData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
        bufp->chgCData(oldp+26,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                      ? 1U : ((0U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 7U)))
                                  : 7U)),3);
        bufp->chgCData(oldp+27,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                      ? 0U : ((0U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 0U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 7U)))
                                  : 7U)),3);
        bufp->chgCData(oldp+28,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 7U)
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 7U)
                                               : ((0x13U 
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
                                                         : 0U))))))))))),5);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
        bufp->chgCData(oldp+31,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                      ? 0xfU : ((0U 
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
                                  : 0U)),8);
        bufp->chgIData(oldp+32,(((1U == ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 1U : 7U))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : 0U)),32);
        bufp->chgIData(oldp+33,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? (((~ ((4U == (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0xcU))) 
                                          | (5U == 
                                             (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xcU))))) 
                                      & (3U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst)))
                                      ? ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                          : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                              : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                      : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                          ? (0xffU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                          : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                              ? (0xffffU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                              : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)))
                                  : 0U)),32);
        bufp->chgCData(oldp+34,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 1U : 7U)),3);
        bufp->chgCData(oldp+35,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
        bufp->chgCData(oldp+37,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 2U : 0U)),3);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
        bufp->chgBit(oldp+40,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+41,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0xcU))) 
                                   | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU))))) 
                               & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
        bufp->chgBit(oldp+42,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+43,(((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                               | ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                           | ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__inst)))))))))));
        bufp->chgBit(oldp+44,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__tem),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
        bufp->chgIData(oldp+47,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+48,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
        bufp->chgIData(oldp+50,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
        bufp->chgIData(oldp+52,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
        bufp->chgBit(oldp+53,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
        bufp->chgIData(oldp+55,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                              : 0U))))),32);
        bufp->chgIData(oldp+56,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                              : 0U))))),32);
        bufp->chgIData(oldp+57,(((2U == ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 2U : 0U))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                  : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
        bufp->chgBit(oldp+58,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                               : ((6U 
                                                   == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                    ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                    : 0U))), 
                                         ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                               : ((4U 
                                                   == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                   : 0U))))));
        bufp->chgIData(oldp+59,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                          : 0U)))),32);
        bufp->chgIData(oldp+60,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                          : 0U)))),32);
        bufp->chgIData(oldp+61,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
        bufp->chgIData(oldp+62,(((0x1fU >= (0x3fU & 
                                            (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                             >> 0x14U)))
                                  ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0x14U)))
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
        bufp->chgIData(oldp+63,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
        bufp->chgCData(oldp+64,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xfU)
                                           : ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0xfU)
                                               : ((3U 
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
                                                       : 0U))))))))),6);
        bufp->chgCData(oldp+65,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x14U)
                                           : ((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)
                                               : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                   ? 
                                                  (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0x14U)
                                                   : 0U))))),6);
        bufp->chgCData(oldp+66,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 7U)
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 7U)
                                               : ((0x13U 
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
                                                         : 0U))))))))))),6);
        bufp->chgCData(oldp+67,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
        bufp->chgCData(oldp+68,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+69,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+70,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+71,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+72,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgIData(oldp+73,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+74,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
        bufp->chgIData(oldp+75,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+76,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+77,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 7U)))))),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__tem),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    }
    bufp->chgBit(oldp+80,(vlSelf->clk));
    bufp->chgBit(oldp+81,(vlSelf->rst));
}

void Vysyx_24080014_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24080014_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24080014_cpu___024root*>(voidSelf);
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

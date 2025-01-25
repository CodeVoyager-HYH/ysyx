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
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
        bufp->chgIData(oldp+5,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                 ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                 : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                     : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                         ? (0xfffffffeU 
                                            & vlSelf->ysyx_24080014_cpu__DOT__alu_out)
                                         : ((IData)(4U) 
                                            + vlSelf->ysyx_24080014_cpu__DOT__pc))))),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
        bufp->chgIData(oldp+15,(((1U == ((0x23U == 
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
        bufp->chgIData(oldp+16,(((0U == ((0x23U == 
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
        bufp->chgCData(oldp+17,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xfU)
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                               ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0xfU)
                                               : ((0x63U 
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
                                                      : 0U)))))))),5);
        bufp->chgCData(oldp+18,((0x1fU & ((0x33U == 
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
        bufp->chgCData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
        bufp->chgCData(oldp+23,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+24,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+25,((0x1fU & ((0x33U == 
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
                                                        : 0U)))))))))),5);
        bufp->chgIData(oldp+26,(((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                      ? ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                              ? (0xffU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                                  : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                          : 0U) : (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                    ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl))
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->ysyx_24080014_cpu__DOT__pc)
                                                      : 0U)))))),32);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
        bufp->chgCData(oldp+28,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgIData(oldp+29,(((1U == ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? ((2U == 
                                              (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 7U)))
                                          : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : 0U)),32);
        bufp->chgIData(oldp+30,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                      ? (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                      : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                          ? (0xffffU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                          : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
                                  : 0U)),32);
        bufp->chgCData(oldp+31,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                      ? 1U : ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 7U)))
                                  : 7U)),3);
        bufp->chgCData(oldp+32,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
        bufp->chgCData(oldp+34,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 2U : 0U)),3);
        bufp->chgBit(oldp+35,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+36,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+37,(((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
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
                                              | (0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))))))))));
        bufp->chgBit(oldp+38,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__tem),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
        bufp->chgIData(oldp+41,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+42,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
        bufp->chgIData(oldp+44,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
        bufp->chgIData(oldp+46,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
        bufp->chgIData(oldp+49,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                              : 0U))))),32);
        bufp->chgIData(oldp+50,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                              : 0U))))),32);
        bufp->chgIData(oldp+51,(((2U == ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 2U : 0U))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                  : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
        bufp->chgBit(oldp+52,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
        bufp->chgIData(oldp+53,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                          : 0U)))),32);
        bufp->chgIData(oldp+54,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                          : 0U)))),32);
        bufp->chgIData(oldp+55,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
        bufp->chgIData(oldp+56,(((0x1fU >= (0x3fU & 
                                            (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                             >> 0x14U)))
                                  ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0x14U)))
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
        bufp->chgIData(oldp+57,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[21]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[22]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[23]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[24]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[25]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[26]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[27]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[28]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[29]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[30]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[31]),32);
        bufp->chgCData(oldp+90,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
        bufp->chgCData(oldp+91,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+92,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+93,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+94,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgIData(oldp+95,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+96,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
        bufp->chgIData(oldp+97,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+98,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+99,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__tem),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    }
    bufp->chgBit(oldp+102,(vlSelf->clk));
    bufp->chgBit(oldp+103,(vlSelf->rst));
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

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
        bufp->chgBit(oldp+2,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write));
        bufp->chgCData(oldp+28,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__i),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr),5);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr),5);
        bufp->chgSData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
        bufp->chgSData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
        bufp->chgCData(oldp+42,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
        bufp->chgCData(oldp+43,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+44,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__rd),5);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
        bufp->chgCData(oldp+47,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+48,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 1U : 7U)),3);
        bufp->chgCData(oldp+49,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
        bufp->chgCData(oldp+51,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 2U : 0U)),3);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
        bufp->chgBit(oldp+53,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+54,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+55,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0xcU))) 
                                   | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU))))) 
                               & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
        bufp->chgBit(oldp+57,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_24080014_cpu__DOT__valid));
        bufp->chgCData(oldp+59,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+60,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
        bufp->chgCData(oldp+61,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
        bufp->chgCData(oldp+62,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+63,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+64,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+65,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+66,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgIData(oldp+67,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+68,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
        bufp->chgIData(oldp+69,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+70,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+71,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+72,(((1U == ((0x23U == 
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
        bufp->chgIData(oldp+73,(((0U == ((0x23U == 
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
        bufp->chgIData(oldp+74,(((1U == ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 1U : 7U))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : 0U)),32);
        bufp->chgIData(oldp+75,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                              : 0U))))),32);
        bufp->chgIData(oldp+76,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                              : 0U))))),32);
        bufp->chgIData(oldp+77,(((2U == ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? 2U : 0U))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                  : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
        bufp->chgBit(oldp+78,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
        bufp->chgIData(oldp+79,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                          : 0U)))),32);
        bufp->chgIData(oldp+80,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                      : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                          : 0U)))),32);
        bufp->chgIData(oldp+81,(((0x1fU >= (0x3fU & 
                                            (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                             >> 0x14U)))
                                  ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                       >> 0x14U)))
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
        bufp->chgBit(oldp+90,(vlSelf->ysyx_24080014_cpu__DOT__ready));
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
        bufp->chgIData(oldp+92,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+93,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
        bufp->chgIData(oldp+95,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                 | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
        bufp->chgBit(oldp+97,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
        bufp->chgIData(oldp+99,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                  : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                        >> 0x1fU)))),32);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->rst));
    bufp->chgIData(oldp+102,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->chgIData(oldp+103,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                              [0x14U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                         [0x12U] : 
                                         ((IData)(4U) 
                                          + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->chgIData(oldp+104,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? (((~ ((4U == (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0xcU))))) 
                                   & (3U == (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst)))
                                   ? ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem))
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
                                       ? (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                       : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                           ? (0xffffU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                           : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)))
                               : 0U)),32);
    bufp->chgBit(oldp+105,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->chgIData(oldp+106,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

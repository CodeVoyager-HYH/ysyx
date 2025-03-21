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
        bufp->chgIData(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_t),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_m),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__arready));
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp),2);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp),2);
        bufp->chgBit(oldp+10,(((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp)) 
                               | (0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp)))));
        bufp->chgBit(oldp+11,((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp_t))));
        bufp->chgBit(oldp+12,((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp_u))));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready_u));
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp_u),2);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready_u));
        bufp->chgCData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp_t),2);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
        bufp->chgBit(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awready));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wready));
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__bresp),2);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__clock),2);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__write));
        bufp->chgQData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg),64);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__rdata_reg),32);
        bufp->chgQData(oldp+27,((1ULL + vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg)),64);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arready));
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rdata),32);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rresp),2);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__clock),2);
        bufp->chgBit(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__write));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+55,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr),5);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr),5);
        bufp->chgSData(oldp+63,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
        bufp->chgSData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
        bufp->chgCData(oldp+69,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+70,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
        bufp->chgCData(oldp+71,(vlSelf->ysyx_24080014_cpu__DOT__rd),5);
        bufp->chgCData(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_24080014_cpu__DOT__wmask),8);
        bufp->chgCData(oldp+74,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 1U : 7U)),3);
        bufp->chgCData(oldp+75,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
        bufp->chgCData(oldp+77,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                  ? 2U : 0U)),3);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
        bufp->chgBit(oldp+79,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+80,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+81,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0xcU))) 
                                   | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU))))) 
                               & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
        bufp->chgBit(oldp+83,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__valid));
        bufp->chgCData(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+86,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
        bufp->chgCData(oldp+87,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
        bufp->chgCData(oldp+88,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+89,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+90,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+91,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+92,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
        bufp->chgIData(oldp+93,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+94,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
        bufp->chgIData(oldp+95,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+96,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+97,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+98,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                              : 0U))))),32);
        bufp->chgIData(oldp+99,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                  : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                      : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                          : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                              ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                              : 0U))))),32);
        bufp->chgIData(oldp+100,(((2U == ((0x13U == 
                                           (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                           ? 2U : 0U))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__imm
                                   : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
        bufp->chgBit(oldp+101,(VL_LTS_III(32, ((5U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                    ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                     ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                     : 0U))), 
                                          ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                            ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                            : ((6U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                    ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                                    : 0U))))));
        bufp->chgIData(oldp+102,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U)))),32);
        bufp->chgIData(oldp+103,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U)))),32);
        bufp->chgIData(oldp+104,(((0x1fU >= (0x3fU 
                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0x14U)))
                                   ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                        >> 0x14U)))
                                   : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                         >> 0x1fU)))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24080014_cpu__DOT__mem_rd),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24080014_cpu__DOT__store_data),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24080014_cpu__DOT__read_addr),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
        bufp->chgIData(oldp+116,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                  - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+117,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
        bufp->chgIData(oldp+119,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                                  | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
        bufp->chgIData(oldp+123,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                   : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                         >> 0x1fU)))),32);
        bufp->chgBit(oldp+124,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart_valid));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__clint_time));
        bufp->chgBit(oldp+126,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_w_valid));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_r_valid));
    }
    bufp->chgBit(oldp+128,(vlSelf->clk));
    bufp->chgBit(oldp+129,(vlSelf->rst));
    bufp->chgIData(oldp+130,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->chgIData(oldp+131,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                              [0x14U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                         [0x12U] : 
                                         ((IData)(4U) 
                                          + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->chgIData(oldp+132,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->chgIData(oldp+133,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->chgBit(oldp+134,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
    bufp->chgBit(oldp+135,(vlSelf->ysyx_24080014_cpu__DOT__ready));
    bufp->chgBit(oldp+136,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->chgIData(oldp+137,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->chgIData(oldp+138,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->chgBit(oldp+139,(((IData)(vlSelf->rst) & 
                            ((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                             & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready) 
                                & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready) 
                                   & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_w_valid)))))));
    bufp->chgBit(oldp+140,(((IData)(vlSelf->rst) & 
                            ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                             & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_r_valid)))));
    bufp->chgBit(oldp+141,(((IData)(vlSelf->rst) & 
                            ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                             & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__clint_time)))));
    bufp->chgBit(oldp+142,(((IData)(vlSelf->rst) & 
                            (((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart_valid) 
                              & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready_u)) 
                             & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready_u)))));
    bufp->chgBit(oldp+143,(((IData)(vlSelf->rst) & 
                            ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awvalid) 
                             & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awready) 
                                & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wready) 
                                   & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wvalid)))))));
    bufp->chgIData(oldp+144,(((0xa0000048U == vlSelf->ysyx_24080014_cpu__DOT__read_addr)
                               ? (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg)
                               : ((0xa000004cU == vlSelf->ysyx_24080014_cpu__DOT__read_addr)
                                   ? (IData)((vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg 
                                              >> 0x20U))
                                   : 0U))),32);
    bufp->chgBit(oldp+145,(((IData)(vlSelf->rst) & 
                            ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arvalid) 
                             & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rready)))));
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

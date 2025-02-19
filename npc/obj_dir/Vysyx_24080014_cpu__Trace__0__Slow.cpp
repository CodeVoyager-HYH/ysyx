// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24080014_cpu__Syms.h"


VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_init_sub__TOP__0(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst", false,-1);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+5,"rmask", false,-1, 2,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"next_pc", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+9,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+10,"imm_type", false,-1, 2,0);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+12,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+13,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+14,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+17,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+18,"store_data", false,-1, 31,0);
    tracep->declBus(c+19,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+21,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+22,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+23,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+24,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+25,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+26,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+28,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->declBus(c+31,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+32,"wmask", false,-1, 7,0);
    tracep->declBus(c+33,"read_addr", false,-1, 31,0);
    tracep->declBus(c+34,"read_data", false,-1, 31,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+35,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBit(c+40,"Equal_ctl", false,-1);
    tracep->declBit(c+41,"sign", false,-1);
    tracep->declBit(c+42,"ReadWr", false,-1);
    tracep->declBit(c+43,"RegWr", false,-1);
    tracep->declBit(c+44,"StoreWr", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+45,"tem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBit(c+40,"Equal_ctl", false,-1);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+14,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+13,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+9,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+31,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+46,"Add", false,-1, 31,0);
    tracep->declBus(c+47,"Sub", false,-1, 31,0);
    tracep->declBus(c+48,"Neg", false,-1, 31,0);
    tracep->declBus(c+49,"And", false,-1, 31,0);
    tracep->declBus(c+50,"Or", false,-1, 31,0);
    tracep->declBus(c+51,"Xor", false,-1, 31,0);
    tracep->declBus(c+52,"pc_add", false,-1, 31,0);
    tracep->declBus(c+15,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+16,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+53,"Compare", false,-1);
    tracep->declBit(c+54,"Equal", false,-1);
    tracep->declBus(c+55,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+56,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+15,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+57,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+119,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+58,"compare_sign", false,-1);
    tracep->declBus(c+59,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+60,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+61,"tx", false,-1, 31,0);
    tracep->declBus(c+62,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+63,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+24,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+25,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+12,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+14,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+43,"RegWr", false,-1);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+19,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+21,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+22,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+64+i*1,"general_register", true,(i+0), 31,0);
    }
    tracep->declBus(c+96,"mepc", false,-1, 31,0);
    tracep->declBus(c+97,"mcause", false,-1, 31,0);
    tracep->declBus(c+98,"mtvec", false,-1, 31,0);
    tracep->declBus(c+99,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+32,"wmask", false,-1, 7,0);
    tracep->declBus(c+19,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"rmask", false,-1, 2,0);
    tracep->declBus(c+10,"imm_type", false,-1, 2,0);
    tracep->declBus(c+23,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+24,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+25,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+26,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+13,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+35,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+28,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+9,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+31,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+21,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+22,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+40,"Equal_ctl", false,-1);
    tracep->declBit(c+42,"ReadWr", false,-1);
    tracep->declBit(c+44,"StoreWr", false,-1);
    tracep->declBit(c+41,"sign", false,-1);
    tracep->declBit(c+43,"RegWr", false,-1);
    tracep->declBus(c+100,"opcode", false,-1, 6,0);
    tracep->declBus(c+101,"func3", false,-1, 2,0);
    tracep->declBus(c+102,"func12", false,-1, 11,0);
    tracep->declBus(c+103,"func7", false,-1, 6,0);
    tracep->declBus(c+104,"func_I", false,-1, 5,0);
    tracep->declBit(c+105,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+10,"imm_type", false,-1, 2,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+106,"immI", false,-1, 31,0);
    tracep->declBus(c+107,"immU", false,-1, 31,0);
    tracep->declBus(c+108,"immJ", false,-1, 31,0);
    tracep->declBus(c+109,"immS", false,-1, 31,0);
    tracep->declBus(c+110,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump ");
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+4,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+23,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+7,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+42,"ReadWr", false,-1);
    tracep->declBit(c+44,"StoreWr", false,-1);
    tracep->declBit(c+41,"sign", false,-1);
    tracep->declBus(c+32,"wmask", false,-1, 7,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+5,"rmask", false,-1, 2,0);
    tracep->declBus(c+33,"read_addr", false,-1, 31,0);
    tracep->declBus(c+17,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+18,"store_data", false,-1, 31,0);
    tracep->declBus(c+34,"read_data", false,-1, 31,0);
    tracep->declBus(c+111,"tem", false,-1, 31,0);
    tracep->declBus(c+112,"read_tem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+27,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+28,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+35,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+17,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+33,"read_addr", false,-1, 31,0);
    tracep->declBus(c+18,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+114,"rst", false,-1);
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBus(c+7,"next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+26,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+34,"read_data", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_init_top(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_init_top\n"); );
    // Body
    Vysyx_24080014_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24080014_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24080014_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_register(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24080014_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24080014_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24080014_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_full_sub_0(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24080014_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24080014_cpu___024root*>(voidSelf);
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24080014_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root__trace_full_sub_0(Vysyx_24080014_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__csr_next_pc),32);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+7,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                              ? vlSelf->ysyx_24080014_cpu__DOT__csr_next_pc
                              : ((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                  ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                  : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                      ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                                      : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr))
                                          ? (0xfffffffeU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__alu_out)
                                          : ((IData)(4U) 
                                             + vlSelf->ysyx_24080014_cpu__DOT__pc)))))),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+17,(((1U == ((0x23U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? ((2U == (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0xcU)))
                                           ? 1U : (
                                                   (0U 
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
                                       : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+18,(((0U == ((0x23U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? ((2U == (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0xcU)))
                                           ? 0U : (
                                                   (0U 
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
                                       : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : 0U)),32);
    bufp->fullCData(oldp+19,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0xfU)
                                        : ((3U == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xfU)
                                            : ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xfU)
                                                : (
                                                   (0x23U 
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
    bufp->fullCData(oldp+20,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x14U)
                                        : ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)
                                            : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0x14U)
                                                : 0U))))),5);
    bufp->fullSData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+27,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                   ? 1U : ((0U == (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0xcU)))
                                            ? 1U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xcU)))
                                             ? 1U : 7U)))
                               : 7U)),3);
    bufp->fullCData(oldp+28,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                   ? 0U : ((0U == (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0xcU)))
                                            ? 0U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xcU)))
                                             ? 0U : 7U)))
                               : 7U)),3);
    bufp->fullCData(oldp+29,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 7U) : 
                                       ((3U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                         ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 7U) : 
                                        ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                          ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                             >> 7U)
                                          : ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                              ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U)
                                              : ((0x6fU 
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
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+32,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                   ? 0xfU : ((0U == 
                                              (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xcU)))
                                               ? 3U
                                               : 0U)))
                               : 0U)),8);
    bufp->fullIData(oldp+33,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+34,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+35,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+36,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+38,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+40,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+41,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+42,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+44,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__tem),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+47,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+48,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+50,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullIData(oldp+52,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+55,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+56,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+57,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+58,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                            ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                            : ((6U 
                                                == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                                ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                                : (
                                                   (4U 
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
    bufp->fullIData(oldp+59,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+60,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+61,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullIData(oldp+62,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+63,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[21]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[22]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[23]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[24]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[25]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[26]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[27]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[28]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[29]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[30]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[31]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__mepc),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__mcause),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__mtvec),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__mstatus),32);
    bufp->fullCData(oldp+100,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+101,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullSData(oldp+102,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+103,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+104,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+105,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+106,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)))),32);
    bufp->fullIData(oldp+107,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+108,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__tem),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullBit(oldp+113,(vlSelf->clk));
    bufp->fullBit(oldp+114,(vlSelf->rst));
    bufp->fullSData(oldp+115,(0U),12);
    bufp->fullCData(oldp+116,(2U),3);
    bufp->fullCData(oldp+117,(1U),3);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
}

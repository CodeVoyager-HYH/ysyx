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
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
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
    tracep->declBus(c+83,"csrs_rs2_read_add", false,-1, 11,0);
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
    tracep->declBus(c+84,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+84,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+35,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+85,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+40,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+86,"rd_wirte", false,-1);
    tracep->declBit(c+41,"Equal_ctl", false,-1);
    tracep->declBit(c+42,"sign", false,-1);
    tracep->declBit(c+43,"ReadWr", false,-1);
    tracep->declBit(c+44,"RegWr", false,-1);
    tracep->declBit(c+45,"StoreWr", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+46,"tem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBit(c+41,"Equal_ctl", false,-1);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+14,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+13,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+9,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+84,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+84,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+31,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+85,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+86,"rd_wirte", false,-1);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+47,"Add", false,-1, 31,0);
    tracep->declBus(c+48,"Sub", false,-1, 31,0);
    tracep->declBus(c+49,"Neg", false,-1, 31,0);
    tracep->declBus(c+50,"And", false,-1, 31,0);
    tracep->declBus(c+51,"Or", false,-1, 31,0);
    tracep->declBus(c+52,"Xor", false,-1, 31,0);
    tracep->declBus(c+53,"pc_add", false,-1, 31,0);
    tracep->declBus(c+15,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+16,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+54,"Compare", false,-1);
    tracep->declBit(c+55,"Equal", false,-1);
    tracep->declBus(c+56,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+57,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+15,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+58,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+87,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+59,"compare_sign", false,-1);
    tracep->declBus(c+60,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+61,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+62,"tx", false,-1, 31,0);
    tracep->declBus(c+63,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+64,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+24,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+25,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+12,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+14,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+44,"RegWr", false,-1);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+19,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+21,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+83,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+22,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+30,"rd_data", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBus(c+65,"index_rs1", false,-1, 5,0);
    tracep->declBus(c+66,"index_rs2", false,-1, 5,0);
    tracep->declBus(c+67,"index_rd", false,-1, 5,0);
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
    tracep->declBus(c+84,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+84,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+9,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+36,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+31,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+37,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+85,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+21,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+83,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+22,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+41,"Equal_ctl", false,-1);
    tracep->declBit(c+43,"ReadWr", false,-1);
    tracep->declBit(c+45,"StoreWr", false,-1);
    tracep->declBit(c+42,"sign", false,-1);
    tracep->declBit(c+44,"RegWr", false,-1);
    tracep->declBus(c+68,"opcode", false,-1, 6,0);
    tracep->declBus(c+69,"func3", false,-1, 2,0);
    tracep->declBus(c+70,"func12", false,-1, 11,0);
    tracep->declBus(c+71,"func7", false,-1, 6,0);
    tracep->declBus(c+72,"func_I", false,-1, 5,0);
    tracep->declBit(c+73,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+10,"imm_type", false,-1, 2,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+74,"immI", false,-1, 31,0);
    tracep->declBus(c+75,"immU", false,-1, 31,0);
    tracep->declBus(c+76,"immJ", false,-1, 31,0);
    tracep->declBus(c+77,"immS", false,-1, 31,0);
    tracep->declBus(c+78,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump ");
    tracep->declBit(c+86,"rd_wirte", false,-1);
    tracep->declBus(c+39,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+4,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+23,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+7,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+43,"ReadWr", false,-1);
    tracep->declBit(c+45,"StoreWr", false,-1);
    tracep->declBit(c+42,"sign", false,-1);
    tracep->declBus(c+32,"wmask", false,-1, 7,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+5,"rmask", false,-1, 2,0);
    tracep->declBus(c+33,"read_addr", false,-1, 31,0);
    tracep->declBus(c+17,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+18,"store_data", false,-1, 31,0);
    tracep->declBus(c+34,"read_data", false,-1, 31,0);
    tracep->declBus(c+79,"tem", false,-1, 31,0);
    tracep->declBus(c+80,"read_tem", false,-1, 31,0);
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
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBus(c+7,"next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+11,"alu_out", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rs1_data", false,-1, 31,0);
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
    bufp->fullIData(oldp+4,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                              ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                             [0x23U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                         ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                        [0x21U] : ((IData)(4U) 
                                                   + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+7,(((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
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
                                 [0x23U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                             ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                            [0x21U]
                                             : ((IData)(4U) 
                                                + vlSelf->ysyx_24080014_cpu__DOT__pc))))),32);
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
                                        : ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xfU)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xfU)
                                                : (
                                                   (0x63U 
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
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullBit(oldp+41,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+42,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+43,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+44,(((0x33U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                            | ((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                        | ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                                              | (0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst)))))))))));
    bufp->fullBit(oldp+45,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__tem),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+48,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+49,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+51,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullIData(oldp+53,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+56,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+57,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+58,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+59,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+60,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+61,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+62,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullIData(oldp+63,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+64,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullCData(oldp+65,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0xfU)
                                        : ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0xfU)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 0xfU)
                                                : (
                                                   (0x63U 
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
    bufp->fullCData(oldp+66,((0x1fU & ((0x33U == (0x7fU 
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
                                                : 0U))))),6);
    bufp->fullCData(oldp+67,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+68,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+69,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+70,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+71,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+72,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+73,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+75,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+77,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+78,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__tem),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->rst));
    bufp->fullSData(oldp+83,(0U),12);
    bufp->fullCData(oldp+84,(2U),3);
    bufp->fullCData(oldp+85,(1U),3);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
}

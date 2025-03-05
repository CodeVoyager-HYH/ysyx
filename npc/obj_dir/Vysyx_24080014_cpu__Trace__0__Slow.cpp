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
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+84,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+7,"rmask", false,-1, 2,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->declBus(c+85,"next_pc", false,-1, 31,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+11,"imm_type", false,-1, 2,0);
    tracep->declBus(c+65,"alu_out", false,-1, 31,0);
    tracep->declBus(c+66,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+12,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+67,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+69,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+55,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+56,"store_data", false,-1, 31,0);
    tracep->declBus(c+13,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+14,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+15,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+16,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+89,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+17,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+18,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+19,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+20,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+21,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+22,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+23,"rd", false,-1, 4,0);
    tracep->declBus(c+70,"rd_data", false,-1, 31,0);
    tracep->declBus(c+24,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+25,"wmask", false,-1, 7,0);
    tracep->declBus(c+57,"read_addr", false,-1, 31,0);
    tracep->declBus(c+86,"read_data", false,-1, 31,0);
    tracep->declBus(c+90,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+90,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+26,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+27,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+28,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+91,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+29,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+30,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+71,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+31,"load", false,-1);
    tracep->declBit(c+3,"mem_ready", false,-1);
    tracep->declBit(c+92,"rd_wirte", false,-1);
    tracep->declBit(c+32,"Equal_ctl", false,-1);
    tracep->declBit(c+33,"sign", false,-1);
    tracep->declBit(c+31,"ReadWr", false,-1);
    tracep->declBit(c+34,"RegWr", false,-1);
    tracep->declBit(c+35,"StoreWr", false,-1);
    tracep->declBit(c+4,"ready", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBit(c+4,"ready", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->declBit(c+87,"RVALID", false,-1);
    tracep->declBit(c+4,"ARVALID", false,-1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+81,"ACLK", false,-1);
    tracep->declBit(c+82,"ARESETn", false,-1);
    tracep->declBus(c+83,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+4,"ARVALID", false,-1);
    tracep->declBit(c+87,"RVALID", false,-1);
    tracep->declBit(c+36,"ARREADY", false,-1);
    tracep->declBus(c+8,"RDATA", false,-1, 31,0);
    tracep->declBit(c+37,"read_pending", false,-1);
    tracep->declBus(c+8,"tem_dout", false,-1, 31,0);
    tracep->declBus(c+38,"tem_inst", false,-1, 31,0);
    tracep->declBit(c+36,"tem_din", false,-1);
    tracep->declBit(c+39,"tem_ready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+28,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBit(c+32,"Equal_ctl", false,-1);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+66,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+70,"rd_data", false,-1, 31,0);
    tracep->declBus(c+69,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+67,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+12,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+10,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+90,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+90,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+24,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+27,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+91,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+29,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+92,"rd_wirte", false,-1);
    tracep->declBus(c+65,"alu_out", false,-1, 31,0);
    tracep->declBus(c+72,"Add", false,-1, 31,0);
    tracep->declBus(c+73,"Sub", false,-1, 31,0);
    tracep->declBus(c+74,"Neg", false,-1, 31,0);
    tracep->declBus(c+75,"And", false,-1, 31,0);
    tracep->declBus(c+76,"Or", false,-1, 31,0);
    tracep->declBus(c+77,"Xor", false,-1, 31,0);
    tracep->declBus(c+88,"pc_add", false,-1, 31,0);
    tracep->declBus(c+68,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+69,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+78,"Compare", false,-1);
    tracep->declBit(c+79,"Equal", false,-1);
    tracep->declBus(c+58,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+59,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+68,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+60,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+93,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+61,"compare_sign", false,-1);
    tracep->declBus(c+62,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+63,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+40,"tx", false,-1, 31,0);
    tracep->declBus(c+64,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+80,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+69,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+71,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+18,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+19,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+66,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+67,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+34,"RegWr", false,-1);
    tracep->declBit(c+31,"load", false,-1);
    tracep->declBit(c+3,"mem_ready", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->declBus(c+30,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+13,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+14,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+23,"rd", false,-1, 4,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+15,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+89,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+16,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+70,"rd_data", false,-1, 31,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+71,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+4,"ready", false,-1);
    tracep->declBus(c+84,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+69,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBus(c+41,"index_rs1", false,-1, 5,0);
    tracep->declBus(c+42,"index_rs2", false,-1, 5,0);
    tracep->declBus(c+43,"index_rd", false,-1, 5,0);
    tracep->declBit(c+4,"tem_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->declBus(c+25,"wmask", false,-1, 7,0);
    tracep->declBus(c+13,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+14,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+23,"rd", false,-1, 4,0);
    tracep->declBus(c+7,"rmask", false,-1, 2,0);
    tracep->declBus(c+11,"imm_type", false,-1, 2,0);
    tracep->declBus(c+17,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+18,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+19,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+20,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+12,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+26,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+22,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+21,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+90,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+90,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+10,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+27,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+24,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+28,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+91,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+29,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+30,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+15,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+89,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+16,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+32,"Equal_ctl", false,-1);
    tracep->declBit(c+31,"ReadWr", false,-1);
    tracep->declBit(c+35,"StoreWr", false,-1);
    tracep->declBit(c+33,"sign", false,-1);
    tracep->declBit(c+31,"load", false,-1);
    tracep->declBit(c+34,"RegWr", false,-1);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+45,"func3", false,-1, 2,0);
    tracep->declBus(c+46,"func12", false,-1, 11,0);
    tracep->declBus(c+47,"func7", false,-1, 6,0);
    tracep->declBus(c+48,"func_I", false,-1, 5,0);
    tracep->declBit(c+49,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+11,"imm_type", false,-1, 2,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+50,"immI", false,-1, 31,0);
    tracep->declBus(c+51,"immU", false,-1, 31,0);
    tracep->declBus(c+52,"immJ", false,-1, 31,0);
    tracep->declBus(c+53,"immS", false,-1, 31,0);
    tracep->declBus(c+54,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump ");
    tracep->declBit(c+92,"rd_wirte", false,-1);
    tracep->declBus(c+30,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+84,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+65,"alu_out", false,-1, 31,0);
    tracep->declBus(c+17,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+85,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+31,"ReadWr", false,-1);
    tracep->declBit(c+35,"StoreWr", false,-1);
    tracep->declBit(c+33,"sign", false,-1);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->declBus(c+25,"wmask", false,-1, 7,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+7,"rmask", false,-1, 2,0);
    tracep->declBus(c+57,"read_addr", false,-1, 31,0);
    tracep->declBus(c+55,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+56,"store_data", false,-1, 31,0);
    tracep->declBit(c+3,"mem_ready", false,-1);
    tracep->declBus(c+86,"read_data", false,-1, 31,0);
    tracep->declBus(c+5,"read_tem", false,-1, 31,0);
    tracep->pushNamePrefix("mem_ass_storage ");
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->declBit(c+31,"ren", false,-1);
    tracep->declBus(c+25,"wmask", false,-1, 7,0);
    tracep->declBus(c+55,"waddr", false,-1, 31,0);
    tracep->declBus(c+57,"raddr", false,-1, 31,0);
    tracep->declBus(c+56,"din", false,-1, 31,0);
    tracep->declBit(c+3,"mem_ready", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 31,0);
    tracep->declBit(c+3,"tem_mem_ready", false,-1);
    tracep->declBus(c+6,"clock", false,-1, 1,0);
    tracep->declBus(c+94,"tem_waddr", false,-1, 31,0);
    tracep->declBus(c+95,"tem_din", false,-1, 31,0);
    tracep->declBus(c+96,"tem_wmask", false,-1, 31,0);
    tracep->declBus(c+5,"tem_dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+21,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+22,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+26,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+65,"alu_out", false,-1, 31,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+69,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+55,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+57,"read_addr", false,-1, 31,0);
    tracep->declBus(c+56,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+36,"valid", false,-1);
    tracep->declBus(c+85,"next_pc", false,-1, 31,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+65,"alu_out", false,-1, 31,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+71,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+20,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+86,"read_data", false,-1, 31,0);
    tracep->declBus(c+68,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+70,"rd_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_mem_ready));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullCData(oldp+13,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0xfU)
                                        : ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0xfU)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 0xfU)
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                     ? 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                       ? 
                                                      (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                       >> 0xfU)
                                                       : 0U))))))))),5);
    bufp->fullCData(oldp+14,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x14U)
                                        : ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0x14U)
                                            : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 0x14U)
                                                : 0U))))),5);
    bufp->fullSData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+21,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU)))
                                   ? 1U : ((0U == (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 0xcU)))
                                            ? 1U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0xcU)))
                                             ? 1U : 7U)))
                               : 7U)),3);
    bufp->fullCData(oldp+22,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU)))
                                   ? 0U : ((0U == (7U 
                                                   & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 0xcU)))
                                            ? 0U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0xcU)))
                                             ? 0U : 7U)))
                               : 7U)),3);
    bufp->fullCData(oldp+23,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 7U) : 
                                       ((3U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                         ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                            >> 7U) : 
                                        ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                          ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                             >> 7U)
                                          : ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                              ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                 >> 7U)
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                  ? 
                                                 (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                  >> 7U)
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                   ? 
                                                  (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 7U)
                                                   : 
                                                  ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 7U)
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                     ? 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 7U)
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 7U)
                                                      : 0U))))))))))),5);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+25,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? ((2U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU)))
                                   ? 0xfU : ((0U == 
                                              (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU)))
                                              ? 1U : 
                                             ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 0xcU)))
                                               ? 3U
                                               : 0U)))
                               : 0U)),8);
    bufp->fullCData(oldp+26,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+27,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+29,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+31,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))));
    bufp->fullBit(oldp+32,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))));
    bufp->fullBit(oldp+33,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout)))));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+35,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_din));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__read_pending));
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_inst),32);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_ready));
    bufp->fullIData(oldp+40,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullCData(oldp+41,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0xfU)
                                        : ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0xfU)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 0xfU)
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                     ? 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                       ? 
                                                      (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                       >> 0xfU)
                                                       : 0U))))))))),6);
    bufp->fullCData(oldp+42,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x14U)
                                        : ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                            ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0x14U)
                                            : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 0x14U)
                                                : 0U))))),6);
    bufp->fullCData(oldp+43,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                        ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 7U) : 
                                       ((3U == (0x7fU 
                                                & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                         ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                            >> 7U) : 
                                        ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                          ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                             >> 7U)
                                          : ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                              ? (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                 >> 7U)
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                  ? 
                                                 (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                  >> 7U)
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                   ? 
                                                  (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 7U)
                                                   : 
                                                  ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                    ? 
                                                   (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 7U)
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                     ? 
                                                    (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 7U)
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                                      ? 
                                                     (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                      >> 7U)
                                                      : 0U))))))))))),6);
    bufp->fullCData(oldp+44,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout)),7);
    bufp->fullCData(oldp+45,((7U & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+46,((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+47,((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+48,((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+49,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))));
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+51,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout)),32);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+53,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+54,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+55,(((1U == ((0x23U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                       ? ((2U == (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 0xcU)))
                                           ? 1U : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                         >> 0xcU)))
                                                     ? 1U
                                                     : 7U)))
                                       : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+56,(((0U == ((0x23U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                       ? ((2U == (7U 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                     >> 0xcU)))
                                           ? 0U : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 7U)))
                                       : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : 0U)),32);
    bufp->fullIData(oldp+57,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+58,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+59,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+60,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+61,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+62,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+63,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+64,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+73,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+74,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+76,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+80,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->rst));
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+84,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                              [0x23U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                         [0x21U] : 
                                         ((IData)(4U) 
                                          + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+85,(((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
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
    bufp->fullIData(oldp+86,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout))
                               ? (((~ ((4U == (7U & 
                                               (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout 
                                                    >> 0xcU))))) 
                                   & (3U == (0x7fU 
                                             & vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_dout)))
                                   ? ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout))
                                       : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout))
                                           : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout))
                                   : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                       ? (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout)
                                       : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                           ? (0xffffU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout)
                                           : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_dout)))
                               : 0U)),32);
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__tem_din) 
                            & (IData)(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready))));
    bufp->fullIData(oldp+88,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullSData(oldp+89,(0U),12);
    bufp->fullCData(oldp+90,(2U),3);
    bufp->fullCData(oldp+91,(1U),3);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_waddr),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_din),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__tem_wmask),32);
}

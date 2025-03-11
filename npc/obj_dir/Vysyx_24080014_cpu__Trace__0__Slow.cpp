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
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+79,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+79,"rst", false,-1);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBus(c+81,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+4,"rmask", false,-1, 2,0);
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+60,"next_pc", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+8,"imm_type", false,-1, 2,0);
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+62,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+9,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+63,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+65,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+50,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+51,"store_data", false,-1, 31,0);
    tracep->declBus(c+10,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+12,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+13,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+91,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+14,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+15,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+16,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+17,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+18,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+19,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+20,"rd", false,-1, 4,0);
    tracep->declBus(c+66,"rd_data", false,-1, 31,0);
    tracep->declBus(c+21,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+22,"wmask", false,-1, 7,0);
    tracep->declBus(c+52,"read_addr", false,-1, 31,0);
    tracep->declBus(c+82,"read_data", false,-1, 31,0);
    tracep->declBus(c+92,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+92,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+23,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+24,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+24,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+25,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+93,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+26,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+67,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+28,"load", false,-1);
    tracep->declBit(c+83,"mem_ready", false,-1);
    tracep->declBit(c+94,"rd_wirte", false,-1);
    tracep->declBit(c+29,"Equal_ctl", false,-1);
    tracep->declBit(c+30,"sign", false,-1);
    tracep->declBit(c+28,"ReadWr", false,-1);
    tracep->declBit(c+31,"RegWr", false,-1);
    tracep->declBit(c+32,"StoreWr", false,-1);
    tracep->declBit(c+68,"ready", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBit(c+29,"jump", false,-1);
    tracep->declBit(c+85,"tem_rst", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+85,"rst", false,-1);
    tracep->declBit(c+68,"ready", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+95,"rdata", false,-1, 31,0);
    tracep->declBit(c+96,"arready", false,-1);
    tracep->declBit(c+97,"rready", false,-1);
    tracep->declBit(c+98,"rvalid", false,-1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+78,"aclk", false,-1);
    tracep->declBit(c+85,"aresetn", false,-1);
    tracep->declBit(c+68,"arvalid", false,-1);
    tracep->declBit(c+84,"arready", false,-1);
    tracep->declBus(c+80,"araddr", false,-1, 31,0);
    tracep->declBit(c+98,"rvalid", false,-1);
    tracep->declBit(c+68,"rready", false,-1);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBit(c+86,"start", false,-1);
    tracep->declBit(c+33,"done", false,-1);
    tracep->declBit(c+34,"inst_f", false,-1);
    tracep->pushNamePrefix("waiting ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+85,"rst_n", false,-1);
    tracep->declBit(c+86,"start", false,-1);
    tracep->declBus(c+99,"times", false,-1, 4,0);
    tracep->declBit(c+33,"done", false,-1);
    tracep->declBus(c+100,"count", false,-1, 4,0);
    tracep->declBit(c+33,"running", false,-1);
    tracep->declBit(c+87,"read_pending", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+25,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBit(c+29,"Equal_ctl", false,-1);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+66,"rd_data", false,-1, 31,0);
    tracep->declBus(c+65,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+63,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+9,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+7,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+92,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+92,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+21,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+24,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+24,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+93,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+26,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+94,"rd_wirte", false,-1);
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+69,"Add", false,-1, 31,0);
    tracep->declBus(c+70,"Sub", false,-1, 31,0);
    tracep->declBus(c+71,"Neg", false,-1, 31,0);
    tracep->declBus(c+72,"And", false,-1, 31,0);
    tracep->declBus(c+73,"Or", false,-1, 31,0);
    tracep->declBus(c+74,"Xor", false,-1, 31,0);
    tracep->declBus(c+88,"pc_add", false,-1, 31,0);
    tracep->declBus(c+64,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+65,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+75,"Compare", false,-1);
    tracep->declBit(c+76,"Equal", false,-1);
    tracep->declBus(c+53,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+54,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+64,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+55,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+101,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+56,"compare_sign", false,-1);
    tracep->declBus(c+57,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+58,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+35,"tx", false,-1, 31,0);
    tracep->declBus(c+59,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+77,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+65,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+67,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+16,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+62,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+63,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+31,"RegWr", false,-1);
    tracep->declBit(c+28,"load", false,-1);
    tracep->declBit(c+83,"mem_ready", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBus(c+27,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+10,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rd", false,-1, 4,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+91,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+13,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+66,"rd_data", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+67,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+68,"ready", false,-1);
    tracep->declBus(c+81,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+65,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBus(c+36,"index_rs1", false,-1, 5,0);
    tracep->declBus(c+37,"index_rs2", false,-1, 5,0);
    tracep->declBus(c+38,"index_rd", false,-1, 5,0);
    tracep->declBit(c+3,"tem_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+22,"wmask", false,-1, 7,0);
    tracep->declBus(c+10,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+20,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"rmask", false,-1, 2,0);
    tracep->declBus(c+8,"imm_type", false,-1, 2,0);
    tracep->declBus(c+14,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+15,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+16,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+17,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+9,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+23,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+19,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+18,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+92,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+92,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+7,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+24,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+24,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+21,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+25,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+93,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+26,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+27,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+12,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+91,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+13,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+29,"Equal_ctl", false,-1);
    tracep->declBit(c+28,"ReadWr", false,-1);
    tracep->declBit(c+32,"StoreWr", false,-1);
    tracep->declBit(c+29,"jump", false,-1);
    tracep->declBit(c+30,"sign", false,-1);
    tracep->declBit(c+28,"load", false,-1);
    tracep->declBit(c+31,"RegWr", false,-1);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"func3", false,-1, 2,0);
    tracep->declBus(c+41,"func12", false,-1, 11,0);
    tracep->declBus(c+42,"func7", false,-1, 6,0);
    tracep->declBus(c+43,"func_I", false,-1, 5,0);
    tracep->declBit(c+44,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+8,"imm_type", false,-1, 2,0);
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+45,"immI", false,-1, 31,0);
    tracep->declBus(c+46,"immU", false,-1, 31,0);
    tracep->declBus(c+47,"immJ", false,-1, 31,0);
    tracep->declBus(c+48,"immS", false,-1, 31,0);
    tracep->declBus(c+49,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_npc ");
    tracep->declBit(c+94,"rd_wirte", false,-1);
    tracep->declBus(c+27,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+81,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+14,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+60,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+28,"ReadWr", false,-1);
    tracep->declBit(c+32,"StoreWr", false,-1);
    tracep->declBit(c+30,"sign", false,-1);
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+79,"rst", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBus(c+22,"wmask", false,-1, 7,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"rmask", false,-1, 2,0);
    tracep->declBus(c+52,"read_addr", false,-1, 31,0);
    tracep->declBus(c+50,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+51,"store_data", false,-1, 31,0);
    tracep->declBit(c+83,"mem_ready", false,-1);
    tracep->declBus(c+82,"read_data", false,-1, 31,0);
    tracep->declBus(c+89,"read_tem", false,-1, 31,0);
    tracep->pushNamePrefix("mem_ass_storage ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->declBit(c+79,"rst", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBit(c+28,"ren", false,-1);
    tracep->declBus(c+22,"wmask", false,-1, 7,0);
    tracep->declBus(c+50,"waddr", false,-1, 31,0);
    tracep->declBus(c+52,"raddr", false,-1, 31,0);
    tracep->declBus(c+51,"din", false,-1, 31,0);
    tracep->declBit(c+83,"mem_ready", false,-1);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBus(c+90,"clock", false,-1, 1,0);
    tracep->declBit(c+102,"done", false,-1);
    tracep->declBit(c+103,"start", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+18,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+19,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+23,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+65,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+50,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+52,"read_addr", false,-1, 31,0);
    tracep->declBus(c+51,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+79,"rst", false,-1);
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+68,"ready", false,-1);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBus(c+60,"next_pc", false,-1, 31,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+80,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+17,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+82,"read_data", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+66,"rd_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready));
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullCData(oldp+10,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+11,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullSData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+18,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+19,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+20,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+22,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+23,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+24,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+26,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+28,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+29,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+30,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+32,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__waiting__DOT__running));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__inst_f));
    bufp->fullIData(oldp+35,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullCData(oldp+36,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+37,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+38,((0x1fU & ((0x33U == (0x7fU 
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
    bufp->fullCData(oldp+39,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+40,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+41,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+42,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+43,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+44,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+45,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+46,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+47,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+48,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+49,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullIData(oldp+50,(((1U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+51,(((0U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+52,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+53,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+54,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+55,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+56,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+57,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+58,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+59,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24080014_cpu__DOT__ready));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+70,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+71,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+73,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+77,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullBit(oldp+78,(vlSelf->clk));
    bufp->fullBit(oldp+79,(vlSelf->rst));
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+81,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                              [0x23U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                          ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                         [0x21U] : 
                                         ((IData)(4U) 
                                          + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+82,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__valid));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->fullBit(oldp+86,((1U & ((~ (IData)(vlSelf->rst)) 
                                  | (IData)(vlSelf->ysyx_24080014_cpu__DOT__ready)))));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__waiting__DOT__read_pending));
    bufp->fullIData(oldp+88,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
    bufp->fullSData(oldp+91,(0U),12);
    bufp->fullCData(oldp+92,(2U),3);
    bufp->fullCData(oldp+93,(1U),3);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rdata),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__arready));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rready));
    bufp->fullBit(oldp+98,(0U));
    bufp->fullCData(oldp+99,(1U),5);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__waiting__DOT__count),5);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
    bufp->fullBit(oldp+102,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__done));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__start));
}

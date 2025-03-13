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
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+107,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"rmask", false,-1, 2,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+88,"next_pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+37,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+38,"imm_type", false,-1, 2,0);
    tracep->declBus(c+89,"alu_out", false,-1, 31,0);
    tracep->declBus(c+90,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+39,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+91,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+78,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+79,"store_data", false,-1, 31,0);
    tracep->declBus(c+40,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+41,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+42,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+43,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+44,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+45,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+46,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+47,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+49,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+108,"rd_data", false,-1, 31,0);
    tracep->declBus(c+51,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+52,"wmask", false,-1, 7,0);
    tracep->declBus(c+80,"read_addr", false,-1, 31,0);
    tracep->declBus(c+109,"read_data", false,-1, 31,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+53,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+54,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+54,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+55,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+56,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+57,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+94,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+58,"load", false,-1);
    tracep->declBit(c+25,"mem_ready", false,-1);
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBit(c+59,"Equal_ctl", false,-1);
    tracep->declBit(c+60,"sign", false,-1);
    tracep->declBit(c+58,"ReadWr", false,-1);
    tracep->declBit(c+61,"RegWr", false,-1);
    tracep->declBit(c+62,"StoreWr", false,-1);
    tracep->declBit(c+110,"ready", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBit(c+59,"jump", false,-1);
    tracep->declBit(c+111,"tem_rst", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+110,"ready", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+119,"rdata", false,-1, 31,0);
    tracep->declBit(c+120,"arready", false,-1);
    tracep->declBit(c+121,"rready", false,-1);
    tracep->declBit(c+122,"rvalid", false,-1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+104,"aclk", false,-1);
    tracep->declBit(c+111,"aresetn", false,-1);
    tracep->declBit(c+110,"arvalid", false,-1);
    tracep->declBit(c+63,"arready", false,-1);
    tracep->declBus(c+106,"araddr", false,-1, 31,0);
    tracep->declBit(c+122,"rvalid", false,-1);
    tracep->declBit(c+110,"rready", false,-1);
    tracep->declBus(c+35,"rdata", false,-1, 31,0);
    tracep->declBus(c+64,"state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+55,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBit(c+59,"Equal_ctl", false,-1);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+90,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+108,"rd_data", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+91,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+39,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+37,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+51,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+54,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+54,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+56,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBus(c+89,"alu_out", false,-1, 31,0);
    tracep->declBus(c+95,"Add", false,-1, 31,0);
    tracep->declBus(c+96,"Sub", false,-1, 31,0);
    tracep->declBus(c+97,"Neg", false,-1, 31,0);
    tracep->declBus(c+98,"And", false,-1, 31,0);
    tracep->declBus(c+99,"Or", false,-1, 31,0);
    tracep->declBus(c+100,"Xor", false,-1, 31,0);
    tracep->declBus(c+112,"pc_add", false,-1, 31,0);
    tracep->declBus(c+92,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+93,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+101,"Compare", false,-1);
    tracep->declBit(c+102,"Equal", false,-1);
    tracep->declBus(c+81,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+82,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+92,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+83,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+123,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+84,"compare_sign", false,-1);
    tracep->declBus(c+85,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+86,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+65,"tx", false,-1, 31,0);
    tracep->declBus(c+87,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+103,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+94,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+45,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+46,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+90,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+91,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+61,"RegWr", false,-1);
    tracep->declBit(c+58,"load", false,-1);
    tracep->declBit(c+62,"StoreWr", false,-1);
    tracep->declBit(c+25,"mem_ready", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBus(c+57,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+40,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+41,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+42,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+43,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+108,"rd_data", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+94,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+110,"ready", false,-1);
    tracep->declBus(c+107,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+4+i*1,"general_register", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBit(c+3,"tem_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+52,"wmask", false,-1, 7,0);
    tracep->declBus(c+40,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+41,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+34,"rmask", false,-1, 2,0);
    tracep->declBus(c+38,"imm_type", false,-1, 2,0);
    tracep->declBus(c+44,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+45,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+46,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+47,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+39,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+53,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+49,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+116,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+116,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+37,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+54,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+54,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+51,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+55,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+117,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+56,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+57,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+42,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+115,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+43,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+59,"Equal_ctl", false,-1);
    tracep->declBit(c+58,"ReadWr", false,-1);
    tracep->declBit(c+62,"StoreWr", false,-1);
    tracep->declBit(c+59,"jump", false,-1);
    tracep->declBit(c+60,"sign", false,-1);
    tracep->declBit(c+58,"load", false,-1);
    tracep->declBit(c+61,"RegWr", false,-1);
    tracep->declBus(c+66,"opcode", false,-1, 6,0);
    tracep->declBus(c+67,"func3", false,-1, 2,0);
    tracep->declBus(c+68,"func12", false,-1, 11,0);
    tracep->declBus(c+69,"func7", false,-1, 6,0);
    tracep->declBus(c+70,"func_I", false,-1, 5,0);
    tracep->declBit(c+71,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+38,"imm_type", false,-1, 2,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"immI", false,-1, 31,0);
    tracep->declBus(c+73,"immU", false,-1, 31,0);
    tracep->declBus(c+74,"immJ", false,-1, 31,0);
    tracep->declBus(c+75,"immS", false,-1, 31,0);
    tracep->declBus(c+76,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_npc ");
    tracep->declBit(c+118,"rd_wirte", false,-1);
    tracep->declBus(c+57,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+107,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+89,"alu_out", false,-1, 31,0);
    tracep->declBus(c+44,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+88,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+58,"ReadWr", false,-1);
    tracep->declBit(c+62,"StoreWr", false,-1);
    tracep->declBit(c+60,"sign", false,-1);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBus(c+52,"wmask", false,-1, 7,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+34,"rmask", false,-1, 2,0);
    tracep->declBus(c+80,"read_addr", false,-1, 31,0);
    tracep->declBus(c+78,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+79,"store_data", false,-1, 31,0);
    tracep->declBit(c+25,"mem_ready", false,-1);
    tracep->declBus(c+109,"read_data", false,-1, 31,0);
    tracep->declBus(c+26,"read_tem", false,-1, 31,0);
    tracep->declBit(c+27,"awready", false,-1);
    tracep->declBit(c+28,"wready", false,-1);
    tracep->declBit(c+29,"arready", false,-1);
    tracep->declBit(c+113,"bvalid", false,-1);
    tracep->declBit(c+124,"bready", false,-1);
    tracep->declBit(c+114,"rvalid", false,-1);
    tracep->declBus(c+30,"rresp", false,-1, 1,0);
    tracep->declBus(c+31,"bresp", false,-1, 1,0);
    tracep->pushNamePrefix("mem_ass_storage ");
    tracep->declBit(c+104,"aclk", false,-1);
    tracep->declBit(c+105,"aresetn", false,-1);
    tracep->declBit(c+62,"awvalid", false,-1);
    tracep->declBit(c+27,"awready", false,-1);
    tracep->declBus(c+78,"awaddr", false,-1, 31,0);
    tracep->declBus(c+79,"wdata", false,-1, 31,0);
    tracep->declBus(c+52,"wstrb", false,-1, 7,0);
    tracep->declBit(c+28,"wready", false,-1);
    tracep->declBit(c+77,"wvalid", false,-1);
    tracep->declBus(c+80,"araddr", false,-1, 31,0);
    tracep->declBit(c+58,"arvalid", false,-1);
    tracep->declBit(c+29,"arready", false,-1);
    tracep->declBus(c+26,"rdata", false,-1, 31,0);
    tracep->declBus(c+30,"rresp", false,-1, 1,0);
    tracep->declBit(c+77,"rready", false,-1);
    tracep->declBit(c+114,"rvalid", false,-1);
    tracep->declBit(c+124,"bready", false,-1);
    tracep->declBus(c+31,"bresp", false,-1, 1,0);
    tracep->declBit(c+113,"bvalid", false,-1);
    tracep->declBus(c+32,"clock", false,-1, 1,0);
    tracep->declBit(c+33,"write", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+48,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+49,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+53,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+89,"alu_out", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+78,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+80,"read_addr", false,-1, 31,0);
    tracep->declBus(c+79,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+110,"ready", false,-1);
    tracep->declBit(c+63,"valid", false,-1);
    tracep->declBus(c+88,"next_pc", false,-1, 31,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+89,"alu_out", false,-1, 31,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+94,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+47,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+109,"read_data", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+108,"rd_data", false,-1, 31,0);
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
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
    bufp->fullBit(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__arready));
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp),2);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp),2);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write));
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr),5);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr),5);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+48,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+49,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+50,(vlSelf->ysyx_24080014_cpu__DOT__rd),5);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+52,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+53,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+54,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+56,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+58,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+59,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+60,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+62,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24080014_cpu__DOT__valid));
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+65,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullCData(oldp+66,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+67,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+68,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+69,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+70,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+71,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+72,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+73,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+75,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullBit(oldp+77,((1U & (~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)))));
    bufp->fullIData(oldp+78,(((1U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+79,(((0U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+80,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+81,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+82,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+83,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+84,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+85,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+86,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+87,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+96,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+97,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+99,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+103,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                      >> 0x1fU)))),32);
    bufp->fullBit(oldp+104,(vlSelf->clk));
    bufp->fullBit(oldp+105,(vlSelf->rst));
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+107,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                               [0x14U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                          [0x12U] : 
                                          ((IData)(4U) 
                                           + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullIData(oldp+109,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                ? (((~ ((4U == (7U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
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
                                        ? (0xffU & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                        : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__rmask))
                                            ? (0xffffU 
                                               & vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)
                                            : vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem)))
                                : 0U)),32);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24080014_cpu__DOT__ready));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->fullIData(oldp+112,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullBit(oldp+113,(((IData)(vlSelf->rst) & 
                             ((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                              & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready) 
                                 & ((~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)) 
                                    & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready)))))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->rst) & 
                             ((~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)) 
                              & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))))));
    bufp->fullSData(oldp+115,(0U),12);
    bufp->fullCData(oldp+116,(2U),3);
    bufp->fullCData(oldp+117,(1U),3);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rdata),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__arready));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rready));
    bufp->fullBit(oldp+122,(0U));
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
    bufp->fullBit(oldp+124,(1U));
}

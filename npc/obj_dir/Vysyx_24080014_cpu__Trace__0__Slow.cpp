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
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+28,"rmask", false,-1, 2,0);
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+82,"next_pc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+31,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+32,"imm_type", false,-1, 2,0);
    tracep->declBus(c+83,"alu_out", false,-1, 31,0);
    tracep->declBus(c+84,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+33,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+85,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+72,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+73,"store_data", false,-1, 31,0);
    tracep->declBus(c+34,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+35,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+36,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+37,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+107,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+38,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+39,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+40,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+41,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+42,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+43,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+88,"rd_data", false,-1, 31,0);
    tracep->declBus(c+45,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+46,"wmask", false,-1, 7,0);
    tracep->declBus(c+74,"read_addr", false,-1, 31,0);
    tracep->declBus(c+104,"read_data", false,-1, 31,0);
    tracep->declBus(c+108,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+108,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+47,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+48,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+49,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+109,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+50,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+51,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+89,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+52,"load", false,-1);
    tracep->declBit(c+4,"mem_ready", false,-1);
    tracep->declBit(c+110,"rd_wirte", false,-1);
    tracep->declBit(c+53,"Equal_ctl", false,-1);
    tracep->declBit(c+54,"sign", false,-1);
    tracep->declBit(c+52,"ReadWr", false,-1);
    tracep->declBit(c+55,"RegWr", false,-1);
    tracep->declBit(c+56,"StoreWr", false,-1);
    tracep->declBit(c+90,"ready", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBit(c+53,"jump", false,-1);
    tracep->declBit(c+105,"tem_rst", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+90,"ready", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+111,"rdata", false,-1, 31,0);
    tracep->declBit(c+112,"arready", false,-1);
    tracep->declBit(c+113,"rready", false,-1);
    tracep->declBit(c+114,"rvalid", false,-1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+100,"aclk", false,-1);
    tracep->declBit(c+105,"aresetn", false,-1);
    tracep->declBit(c+90,"arvalid", false,-1);
    tracep->declBit(c+57,"arready", false,-1);
    tracep->declBus(c+102,"araddr", false,-1, 31,0);
    tracep->declBit(c+114,"rvalid", false,-1);
    tracep->declBit(c+90,"rready", false,-1);
    tracep->declBus(c+29,"rdata", false,-1, 31,0);
    tracep->declBus(c+58,"state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+49,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBit(c+53,"Equal_ctl", false,-1);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+84,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+88,"rd_data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+85,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+33,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+31,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+108,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+108,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+45,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+48,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+109,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+50,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+110,"rd_wirte", false,-1);
    tracep->declBus(c+83,"alu_out", false,-1, 31,0);
    tracep->declBus(c+91,"Add", false,-1, 31,0);
    tracep->declBus(c+92,"Sub", false,-1, 31,0);
    tracep->declBus(c+93,"Neg", false,-1, 31,0);
    tracep->declBus(c+94,"And", false,-1, 31,0);
    tracep->declBus(c+95,"Or", false,-1, 31,0);
    tracep->declBus(c+96,"Xor", false,-1, 31,0);
    tracep->declBus(c+106,"pc_add", false,-1, 31,0);
    tracep->declBus(c+86,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+87,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+97,"Compare", false,-1);
    tracep->declBit(c+98,"Equal", false,-1);
    tracep->declBus(c+75,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+76,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+86,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+77,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+115,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+78,"compare_sign", false,-1);
    tracep->declBus(c+79,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+80,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+59,"tx", false,-1, 31,0);
    tracep->declBus(c+81,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+99,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+89,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+39,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+40,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+84,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+85,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+55,"RegWr", false,-1);
    tracep->declBit(c+52,"load", false,-1);
    tracep->declBit(c+56,"StoreWr", false,-1);
    tracep->declBit(c+4,"mem_ready", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBus(c+51,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+34,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+35,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+107,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+37,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+88,"rd_data", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+90,"ready", false,-1);
    tracep->declBus(c+103,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+5+i*1,"general_register", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBit(c+3,"tem_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+46,"wmask", false,-1, 7,0);
    tracep->declBus(c+34,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+35,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+28,"rmask", false,-1, 2,0);
    tracep->declBus(c+32,"imm_type", false,-1, 2,0);
    tracep->declBus(c+38,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+39,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+40,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+41,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+33,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+47,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+43,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+42,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+108,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+108,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+31,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+48,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+45,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+49,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+109,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+50,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+51,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+36,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+107,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+37,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+53,"Equal_ctl", false,-1);
    tracep->declBit(c+52,"ReadWr", false,-1);
    tracep->declBit(c+56,"StoreWr", false,-1);
    tracep->declBit(c+53,"jump", false,-1);
    tracep->declBit(c+54,"sign", false,-1);
    tracep->declBit(c+52,"load", false,-1);
    tracep->declBit(c+55,"RegWr", false,-1);
    tracep->declBus(c+60,"opcode", false,-1, 6,0);
    tracep->declBus(c+61,"func3", false,-1, 2,0);
    tracep->declBus(c+62,"func12", false,-1, 11,0);
    tracep->declBus(c+63,"func7", false,-1, 6,0);
    tracep->declBus(c+64,"func_I", false,-1, 5,0);
    tracep->declBit(c+65,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+32,"imm_type", false,-1, 2,0);
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+66,"immI", false,-1, 31,0);
    tracep->declBus(c+67,"immU", false,-1, 31,0);
    tracep->declBus(c+68,"immJ", false,-1, 31,0);
    tracep->declBus(c+69,"immS", false,-1, 31,0);
    tracep->declBus(c+70,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_npc ");
    tracep->declBit(c+110,"rd_wirte", false,-1);
    tracep->declBus(c+51,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+103,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+83,"alu_out", false,-1, 31,0);
    tracep->declBus(c+38,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+82,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+52,"ReadWr", false,-1);
    tracep->declBit(c+56,"StoreWr", false,-1);
    tracep->declBit(c+54,"sign", false,-1);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBus(c+46,"wmask", false,-1, 7,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+28,"rmask", false,-1, 2,0);
    tracep->declBus(c+74,"read_addr", false,-1, 31,0);
    tracep->declBus(c+72,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+73,"store_data", false,-1, 31,0);
    tracep->declBit(c+4,"mem_ready", false,-1);
    tracep->declBus(c+104,"read_data", false,-1, 31,0);
    tracep->declBus(c+26,"read_tem", false,-1, 31,0);
    tracep->pushNamePrefix("mem_ass_storage ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+56,"wen", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBit(c+52,"ren", false,-1);
    tracep->declBus(c+46,"wmask", false,-1, 7,0);
    tracep->declBus(c+72,"waddr", false,-1, 31,0);
    tracep->declBus(c+74,"raddr", false,-1, 31,0);
    tracep->declBus(c+73,"din", false,-1, 31,0);
    tracep->declBit(c+4,"mem_ready", false,-1);
    tracep->declBus(c+26,"dout", false,-1, 31,0);
    tracep->declBus(c+71,"clock", false,-1, 1,0);
    tracep->declBit(c+27,"write", false,-1);
    tracep->declBit(c+116,"done", false,-1);
    tracep->declBit(c+117,"start", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+42,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+43,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+47,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+83,"alu_out", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+72,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+74,"read_addr", false,-1, 31,0);
    tracep->declBus(c+73,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+90,"ready", false,-1);
    tracep->declBit(c+57,"valid", false,-1);
    tracep->declBus(c+82,"next_pc", false,-1, 31,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+83,"alu_out", false,-1, 31,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+89,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+41,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+104,"read_data", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+88,"rd_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write));
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr),5);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr),5);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+42,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+43,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24080014_cpu__DOT__rd),5);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+46,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+47,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+48,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+50,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+52,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+53,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+54,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+56,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24080014_cpu__DOT__valid));
    bufp->fullCData(oldp+58,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+59,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullCData(oldp+60,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+61,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+62,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+63,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+64,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+65,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+66,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+67,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+68,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+69,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+70,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullCData(oldp+71,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
    bufp->fullIData(oldp+72,(((1U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+73,(((0U == ((0x23U == (0x7fU 
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
    bufp->fullIData(oldp+74,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+75,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+76,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+77,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+78,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+79,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+80,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+81,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullBit(oldp+90,(vlSelf->ysyx_24080014_cpu__DOT__ready));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+92,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+93,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+95,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                              | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+99,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullBit(oldp+100,(vlSelf->clk));
    bufp->fullBit(oldp+101,(vlSelf->rst));
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+103,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                               [0x14U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                          [0x12U] : 
                                          ((IData)(4U) 
                                           + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+104,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->fullIData(oldp+106,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullSData(oldp+107,(0U),12);
    bufp->fullCData(oldp+108,(2U),3);
    bufp->fullCData(oldp+109,(1U),3);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rdata),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__arready));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rready));
    bufp->fullBit(oldp+114,(0U));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__done));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__start));
}

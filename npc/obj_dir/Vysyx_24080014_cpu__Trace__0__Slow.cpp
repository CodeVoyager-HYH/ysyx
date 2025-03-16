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
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24080014_cpu ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBus(c+118,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+43,"rmask", false,-1, 2,0);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBus(c+95,"next_pc", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+47,"imm_type", false,-1, 2,0);
    tracep->declBus(c+96,"alu_out", false,-1, 31,0);
    tracep->declBus(c+97,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+48,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+98,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+101,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+102,"store_data", false,-1, 31,0);
    tracep->declBus(c+49,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+51,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+52,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+129,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+53,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+54,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+55,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+56,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+57,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+58,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+119,"rd_data", false,-1, 31,0);
    tracep->declBus(c+60,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+61,"wmask", false,-1, 7,0);
    tracep->declBus(c+87,"read_addr", false,-1, 31,0);
    tracep->declBus(c+120,"read_data", false,-1, 31,0);
    tracep->declBus(c+130,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+130,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+62,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+63,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+63,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+64,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+131,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+65,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+66,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+103,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+67,"load", false,-1);
    tracep->declBit(c+121,"mem_ready", false,-1);
    tracep->declBit(c+132,"rd_wirte", false,-1);
    tracep->declBit(c+68,"Equal_ctl", false,-1);
    tracep->declBit(c+69,"sign", false,-1);
    tracep->declBit(c+67,"ReadWr", false,-1);
    tracep->declBit(c+70,"RegWr", false,-1);
    tracep->declBit(c+71,"StoreWr", false,-1);
    tracep->declBit(c+122,"ready", false,-1);
    tracep->declBit(c+72,"valid", false,-1);
    tracep->declBit(c+68,"jump", false,-1);
    tracep->declBit(c+123,"tem_rst", false,-1);
    tracep->pushNamePrefix("IF ");
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+122,"ready", false,-1);
    tracep->declBit(c+72,"valid", false,-1);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBus(c+133,"rdata", false,-1, 31,0);
    tracep->declBit(c+134,"arready", false,-1);
    tracep->declBit(c+135,"rready", false,-1);
    tracep->declBit(c+136,"rvalid", false,-1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+115,"aclk", false,-1);
    tracep->declBit(c+123,"aresetn", false,-1);
    tracep->declBit(c+122,"arvalid", false,-1);
    tracep->declBit(c+72,"arready", false,-1);
    tracep->declBus(c+117,"araddr", false,-1, 31,0);
    tracep->declBit(c+136,"rvalid", false,-1);
    tracep->declBit(c+122,"rready", false,-1);
    tracep->declBus(c+44,"rdata", false,-1, 31,0);
    tracep->declBus(c+73,"state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+64,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBit(c+68,"Equal_ctl", false,-1);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+97,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+119,"rd_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+98,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+48,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+46,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+130,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+130,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+60,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+63,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+63,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+131,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+65,"and2_ctl", false,-1, 2,0);
    tracep->declBit(c+132,"rd_wirte", false,-1);
    tracep->declBus(c+96,"alu_out", false,-1, 31,0);
    tracep->declBus(c+104,"Add", false,-1, 31,0);
    tracep->declBus(c+105,"Sub", false,-1, 31,0);
    tracep->declBus(c+106,"Neg", false,-1, 31,0);
    tracep->declBus(c+107,"And", false,-1, 31,0);
    tracep->declBus(c+108,"Or", false,-1, 31,0);
    tracep->declBus(c+109,"Xor", false,-1, 31,0);
    tracep->declBus(c+124,"pc_add", false,-1, 31,0);
    tracep->declBus(c+99,"eq_rs1", false,-1, 31,0);
    tracep->declBus(c+100,"eq_rs2", false,-1, 31,0);
    tracep->declBit(c+110,"Compare", false,-1);
    tracep->declBit(c+111,"Equal", false,-1);
    tracep->declBus(c+88,"compare_rs1", false,-1, 31,0);
    tracep->declBus(c+89,"compare_rs2", false,-1, 31,0);
    tracep->declBus(c+99,"and_rs1", false,-1, 31,0);
    tracep->declBus(c+90,"and_rs2", false,-1, 31,0);
    tracep->declBus(c+137,"logic_left_shift", false,-1, 31,0);
    tracep->declBit(c+91,"compare_sign", false,-1);
    tracep->declBus(c+92,"compare_sign_rs1", false,-1, 31,0);
    tracep->declBus(c+93,"compare_sign_rs2", false,-1, 31,0);
    tracep->declBus(c+74,"tx", false,-1, 31,0);
    tracep->declBus(c+94,"shamt_srai", false,-1, 31,0);
    tracep->declBus(c+112,"shamt_sra", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluin ");
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+103,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+54,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+55,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+97,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+98,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpr ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+70,"RegWr", false,-1);
    tracep->declBit(c+67,"load", false,-1);
    tracep->declBit(c+71,"StoreWr", false,-1);
    tracep->declBit(c+121,"mem_ready", false,-1);
    tracep->declBit(c+72,"valid", false,-1);
    tracep->declBus(c+66,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+49,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBus(c+51,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+129,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+52,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBus(c+119,"rd_data", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+103,"csr_rs1_data", false,-1, 31,0);
    tracep->declBit(c+122,"ready", false,-1);
    tracep->declBus(c+118,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+22+i*1,"general_register", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBit(c+3,"tem_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBus(c+61,"wmask", false,-1, 7,0);
    tracep->declBus(c+49,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+50,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"rmask", false,-1, 2,0);
    tracep->declBus(c+47,"imm_type", false,-1, 2,0);
    tracep->declBus(c+53,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+54,"rs1_ctr", false,-1, 2,0);
    tracep->declBus(c+55,"rs2_ctr", false,-1, 2,0);
    tracep->declBus(c+56,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+48,"alu_ctl", false,-1, 3,0);
    tracep->declBus(c+62,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+58,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+57,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+130,"eq1_ctr", false,-1, 2,0);
    tracep->declBus(c+130,"eq2_ctr", false,-1, 2,0);
    tracep->declBus(c+46,"eq_ctl", false,-1, 2,0);
    tracep->declBus(c+63,"shamt_right", false,-1, 5,0);
    tracep->declBus(c+63,"shamt_left", false,-1, 5,0);
    tracep->declBus(c+60,"compare_ctl", false,-1, 2,0);
    tracep->declBus(c+64,"shamt_ctl", false,-1, 2,0);
    tracep->declBus(c+131,"and1_ctl", false,-1, 2,0);
    tracep->declBus(c+65,"and2_ctl", false,-1, 2,0);
    tracep->declBus(c+66,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+51,"csrs_rs1_read_add", false,-1, 11,0);
    tracep->declBus(c+129,"csrs_rs2_read_add", false,-1, 11,0);
    tracep->declBus(c+52,"csrs_rs1_write_add", false,-1, 11,0);
    tracep->declBit(c+68,"Equal_ctl", false,-1);
    tracep->declBit(c+67,"ReadWr", false,-1);
    tracep->declBit(c+71,"StoreWr", false,-1);
    tracep->declBit(c+68,"jump", false,-1);
    tracep->declBit(c+69,"sign", false,-1);
    tracep->declBit(c+67,"load", false,-1);
    tracep->declBit(c+70,"RegWr", false,-1);
    tracep->declBus(c+75,"opcode", false,-1, 6,0);
    tracep->declBus(c+76,"func3", false,-1, 2,0);
    tracep->declBus(c+77,"func12", false,-1, 11,0);
    tracep->declBus(c+78,"func7", false,-1, 6,0);
    tracep->declBus(c+79,"func_I", false,-1, 5,0);
    tracep->declBit(c+80,"tem_system", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm1 ");
    tracep->declBus(c+47,"imm_type", false,-1, 2,0);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+81,"immI", false,-1, 31,0);
    tracep->declBus(c+82,"immU", false,-1, 31,0);
    tracep->declBus(c+83,"immJ", false,-1, 31,0);
    tracep->declBus(c+84,"immS", false,-1, 31,0);
    tracep->declBus(c+85,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_npc ");
    tracep->declBit(c+132,"rd_wirte", false,-1);
    tracep->declBus(c+66,"csrs_ctl", false,-1, 1,0);
    tracep->declBus(c+118,"csr_next_pc", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBus(c+96,"alu_out", false,-1, 31,0);
    tracep->declBus(c+53,"npc_ctr", false,-1, 1,0);
    tracep->declBus(c+95,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+67,"ReadWr", false,-1);
    tracep->declBit(c+71,"StoreWr", false,-1);
    tracep->declBit(c+69,"sign", false,-1);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+72,"valid", false,-1);
    tracep->declBus(c+61,"wmask", false,-1, 7,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+43,"rmask", false,-1, 2,0);
    tracep->declBus(c+87,"read_addr", false,-1, 31,0);
    tracep->declBus(c+101,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+102,"store_data", false,-1, 31,0);
    tracep->declBit(c+121,"mem_ready", false,-1);
    tracep->declBus(c+120,"read_data", false,-1, 31,0);
    tracep->declBus(c+4,"read_tem", false,-1, 31,0);
    tracep->declBit(c+5,"awready", false,-1);
    tracep->declBit(c+6,"wready", false,-1);
    tracep->declBit(c+7,"arready", false,-1);
    tracep->declBit(c+125,"bvalid", false,-1);
    tracep->declBit(c+138,"bready", false,-1);
    tracep->declBit(c+126,"rvalid", false,-1);
    tracep->declBus(c+8,"rresp", false,-1, 1,0);
    tracep->declBus(c+9,"bresp", false,-1, 1,0);
    tracep->declBit(c+10,"mem_r", false,-1);
    tracep->declBit(c+11,"uart_r", false,-1);
    tracep->declBit(c+113,"uart_valid", false,-1);
    tracep->declBit(c+114,"mem_valid", false,-1);
    tracep->declBit(c+12,"awready_u", false,-1);
    tracep->declBus(c+13,"bresp_u", false,-1, 1,0);
    tracep->declBit(c+127,"bvalid_u", false,-1);
    tracep->declBit(c+14,"wready_u", false,-1);
    tracep->declBus(c+15,"rresp_u", false,-1, 1,0);
    tracep->pushNamePrefix("mem_ass_storage ");
    tracep->declBit(c+115,"aclk", false,-1);
    tracep->declBit(c+116,"aresetn", false,-1);
    tracep->declBit(c+71,"awvalid", false,-1);
    tracep->declBit(c+5,"awready", false,-1);
    tracep->declBus(c+101,"awaddr", false,-1, 31,0);
    tracep->declBus(c+102,"wdata", false,-1, 31,0);
    tracep->declBus(c+61,"wstrb", false,-1, 7,0);
    tracep->declBit(c+6,"wready", false,-1);
    tracep->declBit(c+114,"wvalid", false,-1);
    tracep->declBus(c+87,"araddr", false,-1, 31,0);
    tracep->declBit(c+67,"arvalid", false,-1);
    tracep->declBit(c+7,"arready", false,-1);
    tracep->declBus(c+4,"rdata", false,-1, 31,0);
    tracep->declBus(c+8,"rresp", false,-1, 1,0);
    tracep->declBit(c+86,"rready", false,-1);
    tracep->declBit(c+126,"rvalid", false,-1);
    tracep->declBit(c+138,"bready", false,-1);
    tracep->declBus(c+9,"bresp", false,-1, 1,0);
    tracep->declBit(c+125,"bvalid", false,-1);
    tracep->declBus(c+16,"clock", false,-1, 1,0);
    tracep->declBit(c+17,"write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+115,"aclk", false,-1);
    tracep->declBit(c+116,"aresetn", false,-1);
    tracep->declBit(c+113,"awvalid", false,-1);
    tracep->declBit(c+12,"awready", false,-1);
    tracep->declBus(c+101,"awaddr", false,-1, 31,0);
    tracep->declBus(c+102,"wdata", false,-1, 31,0);
    tracep->declBus(c+61,"wstrb", false,-1, 7,0);
    tracep->declBit(c+14,"wready", false,-1);
    tracep->declBit(c+113,"wvalid", false,-1);
    tracep->declBus(c+139,"araddr", false,-1, 31,0);
    tracep->declBit(c+140,"arvalid", false,-1);
    tracep->declBit(c+18,"arready", false,-1);
    tracep->declBus(c+19,"rdata", false,-1, 31,0);
    tracep->declBus(c+15,"rresp", false,-1, 1,0);
    tracep->declBit(c+141,"rready", false,-1);
    tracep->declBit(c+128,"rvalid", false,-1);
    tracep->declBit(c+138,"bready", false,-1);
    tracep->declBus(c+13,"bresp", false,-1, 1,0);
    tracep->declBit(c+127,"bvalid", false,-1);
    tracep->declBus(c+20,"clock", false,-1, 1,0);
    tracep->declBit(c+21,"write", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("menin ");
    tracep->declBus(c+57,"memout_ctl", false,-1, 2,0);
    tracep->declBus(c+58,"store_ctl", false,-1, 2,0);
    tracep->declBus(c+62,"read_ctl", false,-1, 2,0);
    tracep->declBus(c+96,"alu_out", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+101,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+87,"read_addr", false,-1, 31,0);
    tracep->declBus(c+102,"store_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+122,"ready", false,-1);
    tracep->declBit(c+72,"valid", false,-1);
    tracep->declBus(c+95,"next_pc", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdin ");
    tracep->declBus(c+96,"alu_out", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"csr_rs1_data", false,-1, 31,0);
    tracep->declBus(c+56,"rd_ctl", false,-1, 2,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+120,"read_data", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+119,"rd_data", false,-1, 31,0);
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
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__arready));
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp),2);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp),2);
    bufp->fullBit(oldp+10,(((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp)) 
                            | (0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp)))));
    bufp->fullBit(oldp+11,((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp_u))));
    bufp->fullBit(oldp+12,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready_u));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp_u),2);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready_u));
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp_u),2);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arready));
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rdata),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__clock),2);
    bufp->fullBit(oldp+21,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__write));
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[20]),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_24080014_cpu__DOT__rmask),3);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24080014_cpu__DOT__inst),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24080014_cpu__DOT__imm),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24080014_cpu__DOT__eq_ctl),3);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24080014_cpu__DOT__imm_type),3);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_24080014_cpu__DOT__alu_ctl),4);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_24080014_cpu__DOT__rs1_addr),5);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_24080014_cpu__DOT__rs2_addr),5);
    bufp->fullSData(oldp+51,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add),12);
    bufp->fullSData(oldp+52,(vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add),12);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_24080014_cpu__DOT__npc_ctr),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr),3);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr),3);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_24080014_cpu__DOT__rd_ctl),3);
    bufp->fullCData(oldp+57,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+58,(((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullCData(oldp+59,(vlSelf->ysyx_24080014_cpu__DOT__rd),5);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl),3);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_24080014_cpu__DOT__wmask),8);
    bufp->fullCData(oldp+62,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 1U : 7U)),3);
    bufp->fullCData(oldp+63,((0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl),3);
    bufp->fullCData(oldp+65,(((0x13U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl),2);
    bufp->fullBit(oldp+67,((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+68,((0x63U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+69,(((~ ((4U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                >> 0xcU))))) 
                            & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)))));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_24080014_cpu__DOT__RegWr));
    bufp->fullBit(oldp+71,((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24080014_cpu__DOT__valid));
    bufp->fullCData(oldp+73,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+74,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__imm)),32);
    bufp->fullCData(oldp+75,((0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)),7);
    bufp->fullCData(oldp+76,((7U & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+77,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+78,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+79,((vlSelf->ysyx_24080014_cpu__DOT__inst 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+80,((0x73U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))));
    bufp->fullIData(oldp+81,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+82,((0xfffff000U & vlSelf->ysyx_24080014_cpu__DOT__inst)),32);
    bufp->fullIData(oldp+83,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24080014_cpu__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+84,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+85,((((- (IData)((vlSelf->ysyx_24080014_cpu__DOT__inst 
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
    bufp->fullBit(oldp+86,((1U & (~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)))));
    bufp->fullIData(oldp+87,(((1U == ((3U == (0x7fU 
                                              & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 1U : 7U)) ? vlSelf->ysyx_24080014_cpu__DOT__alu_out
                               : 0U)),32);
    bufp->fullIData(oldp+88,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs1
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                           : 0U))))),32);
    bufp->fullIData(oldp+89,(((3U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                   : ((0U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu_rs2
                                       : ((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                           : 0U))))),32);
    bufp->fullIData(oldp+90,(((2U == ((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24080014_cpu__DOT__inst))
                                       ? 2U : 0U)) ? vlSelf->ysyx_24080014_cpu__DOT__imm
                               : vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)),32);
    bufp->fullBit(oldp+91,(VL_LTS_III(32, ((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
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
    bufp->fullIData(oldp+92,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1
                                       : 0U)))),32);
    bufp->fullIData(oldp+93,(((5U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                               ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                               : ((6U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                   ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                   : ((4U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__compare_ctl))
                                       ? vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2
                                       : 0U)))),32);
    bufp->fullIData(oldp+94,(((0x1fU >= (0x3fU & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                  >> 0x14U)))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24080014_cpu__DOT__inst 
                                                    >> 0x14U)))
                               : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24080014_cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24080014_cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs1),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24080014_cpu__DOT__alu_rs2),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24080014_cpu__DOT__mem_rd),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24080014_cpu__DOT__store_data),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add),32);
    bufp->fullIData(oldp+105,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                               - vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+106,((~ vlSelf->ysyx_24080014_cpu__DOT__alu_rs1)),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And),32);
    bufp->fullIData(oldp+108,((vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 
                               | vlSelf->ysyx_24080014_cpu__DOT__alu_rs2)),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor),32);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal));
    bufp->fullIData(oldp+112,(((0x1fU >= vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1, vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2)
                                : (- (vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 
                                      >> 0x1fU)))),32);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart_valid));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_valid));
    bufp->fullBit(oldp+115,(vlSelf->clk));
    bufp->fullBit(oldp+116,(vlSelf->rst));
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24080014_cpu__DOT__pc),32);
    bufp->fullIData(oldp+118,(((1U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                               [0x14U] : ((2U == (IData)(vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl))
                                           ? vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register
                                          [0x12U] : 
                                          ((IData)(4U) 
                                           + vlSelf->ysyx_24080014_cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24080014_cpu__DOT__rd_data),32);
    bufp->fullIData(oldp+120,(((3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))
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
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24080014_cpu__DOT__mem_ready));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24080014_cpu__DOT__ready));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_24080014_cpu__DOT__tem_rst));
    bufp->fullIData(oldp+124,(((IData)(4U) + vlSelf->ysyx_24080014_cpu__DOT__pc)),32);
    bufp->fullBit(oldp+125,(((IData)(vlSelf->rst) & 
                             ((0x23U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst)) 
                              & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready) 
                                 & ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready) 
                                    & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_valid)))))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->rst) & 
                             ((~ (IData)(vlSelf->ysyx_24080014_cpu__DOT__valid)) 
                              & (3U == (0x7fU & vlSelf->ysyx_24080014_cpu__DOT__inst))))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->rst) & 
                             (((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart_valid) 
                               & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready_u)) 
                              & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready_u)))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->rst) & 
                             ((IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arvalid) 
                              & (IData)(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rready)))));
    bufp->fullSData(oldp+129,(0U),12);
    bufp->fullCData(oldp+130,(2U),3);
    bufp->fullCData(oldp+131,(1U),3);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_24080014_cpu__DOT__rd_wirte));
    bufp->fullIData(oldp+133,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rdata),32);
    bufp->fullBit(oldp+134,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__arready));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rready));
    bufp->fullBit(oldp+136,(0U));
    bufp->fullIData(oldp+137,(vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift),32);
    bufp->fullBit(oldp+138,(1U));
    bufp->fullIData(oldp+139,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__araddr),32);
    bufp->fullBit(oldp+140,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arvalid));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rready));
}

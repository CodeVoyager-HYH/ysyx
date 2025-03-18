// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24080014_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24080014_cpu___024root.h"

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_static__TOP(Vysyx_24080014_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_static(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_static\n"); );
    // Body
    Vysyx_24080014_cpu___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_static__TOP(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = 0U;
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_initial__TOP(Vysyx_24080014_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_initial(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_initial\n"); );
    // Body
    Vysyx_24080014_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24080014_cpu__DOT__tem_rst = 1U;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_final(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_triggers__stl(Vysyx_24080014_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__stl(Vysyx_24080014_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_stl(Vysyx_24080014_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_settle(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24080014_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24080014_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hyh/ysyx-workbench/npc/vsrc/ysyx_24080014_cpu.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24080014_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__stl(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___stl_sequent__TOP__0(Vysyx_24080014_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___eval_stl(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24080014_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__ico(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__act(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge ysyx_24080014_cpu.tem_rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24080014_cpu___024root___dump_triggers__nba(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge ysyx_24080014_cpu.tem_rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24080014_cpu___024root___ctor_var_reset(Vysyx_24080014_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24080014_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24080014_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__rmask = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__eq_ctl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu_ctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24080014_cpu__DOT__alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem_rd = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24080014_cpu__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_read_add = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24080014_cpu__DOT__csrs_rs1_write_add = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24080014_cpu__DOT__npc_ctr = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__rs1_ctr = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__rs2_ctr = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__rd_ctl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24080014_cpu__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__compare_ctl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24080014_cpu__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__shamt_ctl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24080014_cpu__DOT__csrs_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__csr_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__rd_wirte = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__RegWr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__tem_rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_tem = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_t = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__read_m = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__clint_time = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__awready_u = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__bresp_u = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__wready_u = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__rresp_t = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wstrb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__clock = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__clock = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Add = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__And = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Xor = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Compare = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__Equal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h03500f17__0 = 0;
    vlSelf->ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 21; ++__Vi0) {
        vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__general_register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_24080014_cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyx_24080014_cpu__DOT__tem_rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

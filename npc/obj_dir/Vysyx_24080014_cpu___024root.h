// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24080014_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_24080014_CPU___024ROOT_H_
#define VERILATED_VYSYX_24080014_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24080014_cpu__Syms;
class Vysyx_24080014_cpu___024unit;


class Vysyx_24080014_cpu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_24080014_cpu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ ysyx_24080014_cpu__DOT__tem_rst;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__rmask;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__eq_ctl;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__imm_type;
        CData/*3:0*/ ysyx_24080014_cpu__DOT__alu_ctl;
        CData/*4:0*/ ysyx_24080014_cpu__DOT__rs1_addr;
        CData/*4:0*/ ysyx_24080014_cpu__DOT__rs2_addr;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__npc_ctr;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__rs1_ctr;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__rs2_ctr;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__rd_ctl;
        CData/*4:0*/ ysyx_24080014_cpu__DOT__rd;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__compare_ctl;
        CData/*7:0*/ ysyx_24080014_cpu__DOT__wmask;
        CData/*2:0*/ ysyx_24080014_cpu__DOT__shamt_ctl;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__csrs_ctl;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem_ready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__rd_wirte;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__RegWr;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__ready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__valid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__IF__DOT__arready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__IF__DOT__rready;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__awready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__wready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__arready;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__rresp;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__bresp;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart_valid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__clint_time;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__mem_w_valid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__mem_r_valid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__awready_u;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__bresp_u;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__wready_u;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__rresp_t;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awvalid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awready;
        CData/*7:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wstrb;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wready;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wvalid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__bready;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__bresp;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__clock;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__write;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arvalid;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__arready;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rresp;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rready;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__clock;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__write;
        CData/*1:0*/ ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__clock;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__mem__DOT__mem_ass_storage__DOT__write;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__alu__DOT__Compare;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__alu__DOT__Equal;
        CData/*0:0*/ ysyx_24080014_cpu__DOT__gpr__DOT__tem_ready;
        CData/*1:0*/ __Vdly__ysyx_24080014_cpu__DOT__IF__DOT__ifu__DOT__state;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__ysyx_24080014_cpu__DOT__tem_rst;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*11:0*/ ysyx_24080014_cpu__DOT__csrs_rs1_read_add;
        SData/*11:0*/ ysyx_24080014_cpu__DOT__csrs_rs1_write_add;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__pc;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__inst;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__next_pc;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__imm;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu_out;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu_rs1;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu_rs2;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem_rd;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__store_data;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__rd_data;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__read_addr;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__csr_rs1_data;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__IF__DOT__rdata;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__read_tem;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__read_t;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__read_m;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__awaddr;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__wdata;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__araddr;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__mem__DOT__uart__DOT__rdata;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__Add;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__And;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__Xor;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__eq_rs1;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__eq_rs2;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT__logic_left_shift;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h03500f17__0;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__alu__DOT____VdfgTmp_h8a6dd40b__0;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__gpr__DOT__i;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__gpr__DOT__j;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__0;
        IData/*31:0*/ ysyx_24080014_cpu__DOT__gpr__DOT____Vlvbound_h6bbed7fa__1;
        IData/*31:0*/ __Vdly__ysyx_24080014_cpu__DOT__pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_reg;
        QData/*63:0*/ ysyx_24080014_cpu__DOT__mem__DOT__time_trap__DOT__mtime_next;
        VlUnpacked<IData/*31:0*/, 21> ysyx_24080014_cpu__DOT__gpr__DOT__general_register;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24080014_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24080014_cpu___024root(Vysyx_24080014_cpu__Syms* symsp, const char* v__name);
    ~Vysyx_24080014_cpu___024root();
    VL_UNCOPYABLE(Vysyx_24080014_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

module ysyx_24080014_cpu(
    input clk,
    input rst
);

//声明
reg  [31:0] pc ;
reg  [31:0] csr_next_pc;
wire [ 2:0] rmask;
wire  [31:0] inst ;
wire [31:0] next_pc ;
wire [31:0] imm ;
wire [ 2:0] eq_ctl;
wire [ 2:0] imm_type;
wire [31:0] alu_out;
wire [31:0] alu_rs1;
wire [ 3:0] alu_ctl;
wire [31:0] alu_rs2;
wire [31:0] alu_out;
wire [31:0] rs1_data;
wire [31:0] rs2_data;
wire [31:0] mem_rd;
wire [31:0] store_data;
wire [ 4:0] rs1_addr;
wire [ 4:0] rs2_addr;
wire [ 11:0] csrs_rs1_read_add;
wire [ 11:0] csrs_rs2_read_add;
wire [ 1:0] npc_ctr;
wire [ 2:0] rs1_ctr;
wire [ 2:0] rs2_ctr;
wire [ 2:0] rd_ctl;
wire [ 2:0] memout_ctl;
wire [ 2:0] store_ctl;
wire [ 4:0] rd;
wire [31:0] rd_data;
wire [ 2:0] compare_ctl;
wire [ 7:0] wmask;
wire [31:0] read_addr;
wire [31:0] read_data;
wire [ 2:0] eq1_ctr;
wire [ 2:0] eq2_ctr;
wire [ 2:0] read_ctl;
wire [ 5:0] shamt_left;
wire [ 5:0] shamt_right;
wire [ 2:0] shamt_ctl;
wire [ 2:0] and1_ctl;
wire [ 2:0] and2_ctl;
wire [ 1:0] csrs_ctl;
wire rd_wirte;
wire Equal_ctl;
wire ReadWr;
wire RegWr;
wire StoreWr;

initial begin
    pc = 32'h80000000;
    //next_pc = pc + 4; 
end
ysyx_24080014_mem_in menin(
    .read_ctl(read_ctl),
    .rs1_data(rs1_data),
    .memout_ctl(memout_ctl),
    .store_ctl(store_ctl),
    .alu_out(alu_out),
    .rs2_data(rs2_data),
    .mem_rd(mem_rd),
    .read_addr(read_addr),
    .store_data(store_data)
);

ysyx_24080014_if IF(
    .pc(pc),
    .inst(inst)
);

ysyx_24080014_memory mem(
    .rs1_data(rs1_data),
    .rmask(rmask),
    .ReadWr(ReadWr),
    .StoreWr(StoreWr),
    .wmask(wmask),
    .read_addr(read_addr),
    .mem_rd(mem_rd),
    .store_data(store_data),
    .read_data(read_data)
);

ysyx_24080014_idu idu (
    .csrs_rs1_read_add(csrs_rs1_read_add),
    .csrs_rs2_read_add(csrs_rs2_read_add),
    .csrs_ctl(csrs_ctl),
    .and1_ctl(and1_ctl),
    .and2_ctl(and2_ctl),
    .shamt_ctl(shamt_ctl),
    .rmask(rmask),
    .compare_ctl(compare_ctl),
    .shamt_right(shamt_right),
    .shamt_left(shamt_left),
    .read_ctl(read_ctl),
    .eq1_ctr(eq1_ctr),
    .eq2_ctr(eq2_ctr),
    .inst(inst),
    .wmask(wmask),
    .alu_ctl(alu_ctl),
    .rd_ctl(rd_ctl),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rd(rd),
    .eq_ctl(eq_ctl),
    .imm_type(imm_type),
    .npc_ctr(npc_ctr),
    .rs1_ctr(rs1_ctr),
    .rs2_ctr(rs2_ctr),
    .store_ctl(store_ctl),
    .memout_ctl(memout_ctl),
    .Equal_ctl(Equal_ctl),
    .ReadWr(ReadWr),
    .StoreWr(StoreWr),
    .RegWr(RegWr)
);

ysyx_24080014_imm imm1 (
    .imm_type(imm_type),
    .inst(inst),
    .imm(imm)
    // .uimm(uimm)
);

ysyx_24080014_alu_in aluin (
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .pc(pc),
    .imm(imm),
    .rs1_ctr(rs1_ctr),
    .rs2_ctr(rs2_ctr),
    .alu_rs1(alu_rs1),
    .alu_rs2(alu_rs2)
);

ysyx_24080014_alu alu (
    .and1_ctl(and1_ctl),
    .and2_ctl(and2_ctl),
    .shamt_ctl(shamt_ctl),
    .compare_ctl(compare_ctl),
    .rd_wirte(rd_wirte),
    .rd_data(rd_data),
    .shamt_right(shamt_right),
    .shamt_left(shamt_left),
    .eq_ctl(eq_ctl),
    .eq1_ctr(eq1_ctr),
    .eq2_ctr(eq2_ctr),    
    .pc(pc),
    .imm(imm),
    .Equal_ctl(Equal_ctl),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .alu_rs1(alu_rs1),
    .alu_rs2(alu_rs2),
    .alu_ctl(alu_ctl),
    .alu_out(alu_out)
);

ysyx_24080014_rdin rdin ( 
    .read_data(read_data),
    .alu_out(alu_out),
    .pc(pc),
    .rd_ctl(rd_ctl),
    .imm(imm),
    .rd_data(rd_data)
);

ysyx_24080014_gpr gpr (
    .csrs_ctl(csrs_ctl),
    .csrs_rs1_read_add(csrs_rs1_read_add),
    .csrs_rs2_read_add(csrs_rs2_read_add),
    .pc(pc),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rd(rd),
    .csr_next_pc(csr_next_pc),
    .clk(clk),
    .RegWr(RegWr),
    .rd_data(rd_data),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
);

ysyx_24080014_jump jump (
    .csrs_ctl(csrs_ctl),
    .csr_next_pc(csr_next_pc),
    .rd_wirte(rd_wirte),
    .pc(pc),
    .alu_out(alu_out),
    .npc_ctr(npc_ctr),
    .next_pc(next_pc)
);

ysyx_24080014_pc pc1 (
    .rst(rst),
    .clk(clk),
    .next_pc(next_pc),
    .pc(pc)
);

endmodule

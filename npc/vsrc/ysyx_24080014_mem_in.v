//store_ctl
`define rs2      3'b000
`define no_store 3'b111

//memout_ctl
`define alu_out   3'b001
`define no_memout 3'b111

module ysyx_24080014_mem_in(
    input  [ 2:0] memout_ctl,//写入地址控制
    input  [ 2:0] store_ctl,//写入内容控制
    input  [ 2:0] read_ctl,
    input  [31:0] alu_out,
    input  [31:0] rs1_data,
    input  [31:0] rs2_data,
    output [31:0] mem_rd,//写入的目标地址
    output [31:0] read_addr,
    output [31:0] store_data//写入的内容 
);

assign mem_rd = (memout_ctl == `alu_out)?alu_out:32'b0;
assign store_data = (store_ctl == `rs2)?rs2_data:32'b0;
assign read_addr = (read_ctl == `alu_out)?alu_out:32'b0;
endmodule
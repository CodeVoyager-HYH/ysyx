`define PC          3'b000
`define PC_ADD      3'b001
`define ALU_OUT     3'b010
`define IMM         3'b011
`define READ_DATA   3'b100
`define RS1_DATA    3'b101
`define CSR_DATA    3'b110

module ysyx_24080014_rdin(
    input  [31:0] alu_out,
    input  [31:0] pc,
    input  [31:0] csr_rs1_data,
    input  [ 2:0] rd_ctl, 
    input  [31:0] imm,
    input  [31:0] read_data,
    input  [31:0] rs1_data,
    output [31:0] rd_data
);

assign rd_data = (rd_ctl == `ALU_OUT) ?alu_out:
                 (rd_ctl == `READ_DATA) ?read_data:
                 (rd_ctl == `IMM)? imm :
                 (rd_ctl == `ALU_OUT)? alu_out :
                 (rd_ctl == `CSR_DATA)? csr_rs1_data :
                 (rd_ctl == `RS1_DATA)? rs1_data:
                 (rd_ctl == `PC_ADD)? (pc+4) : 32'b0;
                 
endmodule                 

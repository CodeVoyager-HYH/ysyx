//rs_ctr
`define PC       3'b000
`define PC_ADD   3'b001
`define RS_OUT   3'b010 
`define IMM      3'b011
`define CSR_DATA 3'b110
module ysyx_24080014_alu_in(
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] pc,
    input [31:0] imm,
    input [31:0] csr_rs1_data,
    input reg [2:0] rs1_ctr,
    input reg [2:0] rs2_ctr,
    output [31:0] alu_rs1,
    output [31:0] alu_rs2
);
// always @(*) begin
//     $display("alu_rs1 = %d\n",alu_rs1);
//     $display("alu_rs2 = %d\n",alu_rs2);
//     $display("imm = %d\n",imm);
// end

assign alu_rs1 = (rs1_ctr == `PC)? pc:
                 (rs1_ctr == `PC_ADD)? pc+4:
                 (rs1_ctr == `RS_OUT)? rs1_data:
                 (rs1_ctr == `CSR_DATA)? csr_rs1_data:
                 (rs1_ctr == `IMM)? imm: 32'b0;


assign alu_rs2 = (rs2_ctr == `PC)? pc:
                 (rs2_ctr == `PC_ADD)? pc+4:
                 (rs2_ctr == `RS_OUT)? rs2_data:
                 (rs2_ctr == `CSR_DATA)? csr_rs1_data:
                 (rs2_ctr == `IMM)? imm: 32'b0;

endmodule

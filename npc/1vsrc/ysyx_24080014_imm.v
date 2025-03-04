//Immtype
`define R_type 3'b000
`define I_type 3'b001
`define S_type 3'b010
`define U_type 3'b011
`define B_type 3'b100
`define J_type 3'b101
`define ERROR  3'b110

module ysyx_24080014_imm(
    input  [2:0]  imm_type,
    input  [31:0] inst,
    output [31:0] imm
);

wire [31:0]immI;
wire [31:0]immU;
wire [31:0]immJ;
wire [31:0]immS;
wire [31:0]immB;

assign immI = {{21{inst[31]}},inst[30:20]};
assign immU = {inst[31:12],12'b0};
assign immJ = {{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
assign immS = {{21{inst[31]}},inst[30:25],inst[11:7]};
assign immB = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};

assign imm = (imm_type == `I_type)?immI:
             (imm_type == `U_type)?immU:
             (imm_type == `J_type)?immJ:
             (imm_type == `S_type)?immS:
             (imm_type == `B_type)?immB: 32'b0;

//always @(*) $display("imm = %x,imm_type = %d,inst:%x",imm,imm_type,inst);
endmodule
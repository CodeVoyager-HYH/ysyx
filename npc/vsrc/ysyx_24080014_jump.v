`define NEXT_PC_JAL         2'b00
`define NEXT_PC_JALR        2'b01 
`define NEXT_PC_COMMON      2'b10 
`define NEXT_PC_ALU_OUT         2'b11
import "DPI-C" function void get_npc(input int npc);
module ysyx_24080014_jump(
    input  rd_wirte,
    input  [31:0] pc,
    input  [31:0] alu_out,
    input  [ 1:0] npc_ctr,
    output [31:0] next_pc
);
    assign next_pc = //(rd_wirte == 1)?
                 (npc_ctr == `NEXT_PC_ALU_OUT )? alu_out :
                 (npc_ctr == `NEXT_PC_JAL )? alu_out :
                 (npc_ctr == `NEXT_PC_JALR)? (alu_out & (~32'b1)):(pc+4);//:(pc+4);
    
    always @(*) begin
       
        get_npc(next_pc);
    end             
endmodule

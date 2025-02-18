import "DPI-C" function void get_pc(input int pc);

module ysyx_24080014_pc(
    input  rst,
    input  clk,
    //input  npc_ctr,
    //input  [31:0] imm,
    //input  [31:0] rs1_data,
    input  [31:0] next_pc,
    output reg [31:0] pc
);

//pc
always @(posedge clk) begin
    if(rst) pc <= 32'h80000000;
    else    pc <= next_pc;
    
end

always @(*) begin
    get_pc(pc);
end

endmodule

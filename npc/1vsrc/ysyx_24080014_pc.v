import "DPI-C" function void get_pc(input int pc);

module ysyx_24080014_pc(
    input      rst              ,
    input      clk              ,
    input      inst_ready       ,
    input      [31:0] next_pc   ,
    output reg [31:0] pc
);

//pc
always @(posedge clk) begin
    //$display("inst_ready = %x ",next_pc);
    if(rst == 0)begin pc <= 32'h80000000; end
    else if(inst_ready)  pc <= next_pc;
    
end

always @(*) begin
    get_pc(pc);
    //$display("pc == 0x%x",pc);
end

endmodule

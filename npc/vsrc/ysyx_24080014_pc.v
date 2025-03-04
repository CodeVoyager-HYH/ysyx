import "DPI-C" function void get_pc(input int pc);

module ysyx_24080014_pc(
    input      rst              ,
    input      clk              ,
    input      valid            ,
    //input      ready            , 
    input      [31:0] next_pc   ,
    output reg [31:0] pc
);
import "DPI-C" function void difftest(int exec);
//pc
always @(posedge clk) begin
    if(!rst) pc <= 32'h80000000;
    else if(valid) begin
        pc <= next_pc;
        difftest(1);     
    end    
    else difftest(0);     
end

always @(*) begin
    get_pc(pc);
    //$display("pc == 0x%x",pc);
end

endmodule

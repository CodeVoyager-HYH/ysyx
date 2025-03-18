import "DPI-C" function void get_pc(input int pc);

module ysyx_24080014_pc(
    input      rst              ,
    input      clk              ,
    input      ready            ,
    input      valid            , 
    input      [31:0] next_pc   ,
    output reg [31:0] pc
);
import "DPI-C" function void difftest(int exec);
//pc
always @(posedge clk) begin
    if(!rst) pc <= 32'h80000000;
    else if(ready) begin
        if(pc == 32'h80000000 && valid == 1)begin
            pc <= next_pc;
            difftest(1);     
            //$display("111");
        end
        else if(pc != 32'h80000000 && valid == 1)begin  
            pc <= next_pc;
            difftest(1);
           
        end     
    end    
    else difftest(0);     
end

always @(*) begin
    get_pc(pc);
    //$display("pc == 0x%x",pc);
end

endmodule
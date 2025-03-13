import "DPI-C" function void rtl_pmem_write(
    input int  waddr , 
    input int  wdata ,
    input byte wmask
);

module ysyx_24080014_mem_ass(
    input  clk              ,
    input  wen              ,//写使能
    input  rst              ,
    input  valid            ,//读出有用的指令
    input  ren              ,//读使能
    input  [ 7:0] wmask     ,//写掩码
    input  [31:0] waddr     ,//写入的地址
    input  [31:0] raddr     ,//读出的地址
    input  [31:0] din       ,//写入的数据
    output reg mem_ready        ,//内存读写完成信号，这个信号用作寄存器读写的操作
    output reg [31:0] dout       //读出的数据
);

    reg [ 1:0] clock   ;//用来延迟   
    reg write;
    wire done           ;
    reg  start          ;
    // assign clock = (wen && !valid)? 2'b01:
    //                 ((ren && !valid)? 2'b10: 2'b0);
reg [1:0]i =0;
    //assign write = (mem_ready)?1'b1:1'b0;
    always @(posedge clk) begin
        if(wen && !valid) clock <= 2'b01;    
        else if(ren && !valid) clock <= 2'b10;
        else clock <= 2'b00;


        if(clock == 2'b01) begin //写
            if(!write) begin
                rtl_pmem_write(waddr, din, wmask);
                i=i+1;
                write <= 1;
            end    
            mem_ready <= 1'b1  ;
            dout      <= 32'b0 ;
            write     <= 1;
        end
        else if(clock == 2'b10) begin //读
            dout      <= rtl_pmem_read(raddr) ;
            mem_ready <= 1'b1                 ;
        end
        else begin
            mem_ready <= 1'b0  ;
            dout      <= 32'b0 ;        
            write     <= 0;
        end
    end


endmodule
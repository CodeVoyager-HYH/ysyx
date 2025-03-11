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

    wire [ 1:0] clock   ;//用来延迟   
    wire done           ;
    reg  start          ;
    // assign start = (wen && !valid)? 1'b1:
    //                     (ren && !valid)? 1'b1: 1'b0;
    assign clock = (wen && !valid)? 2'b01:
                    ((ren && !valid)? 2'b10: 2'b0);

    // delay_cycle waiting(
    //     .clk    (clk)       , 
    //     .rst_n  (rst)       ,
    //     .start  (start)     ,
    //     .times  (5'b0001)   ,
    //     .done   (done)
    // );

    always @(posedge clk) begin
        if(wen && !valid) begin 
            //表示可以写，并且指令正确，但是注意要延迟一个时钟周期
            //这里打算做一个握手，因为要延迟完才可以写下一个指令
            //而且多周期的话，读应该也是时钟上升沿开始读出，也要延迟，所以还需要一个ren读使能
            dout      <= 32'b0 ;
            mem_ready <= 1'b0  ;
        end
        else if(ren && !valid) begin
            //clock         = 2'b10 ;
            dout      <= 32'b0 ;
            mem_ready <= 1'b0  ;
        end
        else begin
            //clock         = 2'b00 ;
            dout      <= 32'b0 ;
            mem_ready <= 1'b0  ;
        end

        if(clock == 2'b01) begin //写
            rtl_pmem_write(waddr, din, wmask);
            mem_ready <= 1'b0  ;
            dout      <= 32'b0 ;
        end
        else if(clock == 2'b10) begin //读
            dout      <= rtl_pmem_read(raddr) ;
            mem_ready <= 1'b1                 ;
        end
        else begin
            mem_ready <= 1'b0  ;
            dout      <= 32'b0 ;
        end
    end


endmodule

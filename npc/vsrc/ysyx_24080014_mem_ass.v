import "DPI-C" function void rtl_pmem_write(
    input int  waddr , 
    input int  wdata ,
    input byte wmask
);

module ysyx_24080014_mem_ass(
    input  clk              ,
    input  wen              ,//写使能
    input  valid       ,//读出有用的指令
    input  ren              ,//读使能
    input  [ 7:0] wmask     ,//写掩码
    input  [31:0] waddr     ,//写入的地址
    input  [31:0] raddr     ,//读出的地址
    input  [31:0] din       ,//写入的数据
    output mem_ready        ,//内存读写完成信号，这个信号用作寄存器读写的操作
    output [31:0] dout       //读出的数据
);
    initial begin
        clock = 2'b0 ;
        tem_mem_ready = 1'b0 ;//0表示未读取完成，1表示读取出来
    end
    
    reg tem_mem_ready       ;
    reg [ 1:0] clock        ;//用来延迟   
    reg [31:0] tem_waddr    ;
    reg [31:0] tem_din      ;
    reg [31:0] tem_wmask    ;
    reg [31:0] tem_dout     ;

    always @(posedge clk) begin
        if(wen && valid) begin 
            //表示可以写，并且指令正确，但是注意要延迟一个时钟周期
            //这里打算做一个握手，因为要延迟完才可以写下一个指令
            //而且多周期的话，读应该也是时钟上升沿开始读出，也要延迟，所以还需要一个ren读使能
            clock         = 2'b01 ;
            tem_dout      = 32'b0 ;
            tem_mem_ready = 1'b0  ;
        end
        else if(ren && valid) begin
            clock         = 2'b10 ;
            tem_dout      = 32'b0 ;
            tem_mem_ready = 1'b0  ;
        end
        else begin
            clock         = 2'b00 ;
            tem_dout      = 32'b0 ;
            tem_mem_ready = 1'b0  ;
        end

        if(clock == 2'b01) begin //写
            rtl_pmem_write(waddr, din, wmask);
            tem_mem_ready = 1'b0  ;
            tem_dout      = 32'b0 ;
            clock         = 2'b00 ;
        end
        else if(clock == 2'b10) begin //读
            tem_dout      = rtl_pmem_read(raddr) ;
            clock         = 2'b00                ;
            tem_mem_ready = 1'b1                 ;
        end
        else begin
            tem_mem_ready = 1'b0  ;
            tem_dout      = 32'b0 ;
            clock         =  2'b0 ;
        end
    end

    assign dout      = tem_dout      ;
    assign mem_ready = tem_mem_ready ;

endmodule

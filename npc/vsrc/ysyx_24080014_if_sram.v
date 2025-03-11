import "DPI-C" function int rtl_pmem_read(input int addr);//,output int rdata);

module ysyx_24080014_if_sram (
    //全局变量
    input  wire        aclk,
    input  wire        aresetn,

    // AXI4-Lite 读地址通道
    input  wire        arvalid, //   读地址有效信号
    output reg        arready, //   表示准备好读地址
    input  wire [31:0] araddr,  //    要读的数据

    // AXI4-Lite 读数据通道
    output wire        rvalid,  //    表示传出的数据有效
    input  wire        rready,  //    准备好接收数据
    output reg [31:0]  rdata    //    读出的数据  
);

    delay_cycle waiting(
        .clk    (aclk)       , 
        .rst_n  (aresetn)   ,
        .start  (start)     ,
        .times  (5'b0001)      ,
        .done   (done)
    );

    wire start   ;   //表示开始延迟
    wire done    ;   //表示延迟结束
    reg  inst_f  ;

    assign start = (!aresetn)? 1'b1 : ((arvalid)? 1'b1 :1'b0) ;  //当指令执行完开始start = 1
    assign arready = (!aresetn)? 1'b1 :((done)? 1'b1 :1'b0);   // 当输出的数据有效的时候就可以准备好读地址了 valid        
    assign rvalid = 1'b1;//(!aresetn)? 1'b1 : ((arvalid && arready)?1'b1:1'b1);

    always @(posedge aclk or negedge aresetn) begin
        if(!aresetn)begin
            inst_f  <= 1'b1;
        end
        else if(!done)begin  //表示延迟完输出地址
                inst_f <= 1'b1;
                rdata <= rtl_pmem_read(araddr);//,rdata); 
        end
        else 
            if(done) inst_f <= 1'b0; //表示未延迟完 不能读地址
    end

endmodule



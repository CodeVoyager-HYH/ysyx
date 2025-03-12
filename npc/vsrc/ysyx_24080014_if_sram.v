import "DPI-C" function int rtl_pmem_read(input int addr);//,output int rdata);

`define IDLE 2'b00  //  空闲状态，等待请求
`define WAIT 2'b01  //  等待 rtl_pmem_read 完成
`define DONE 2'b10  //  读取完成，数据有效
module ysyx_24080014_if_sram (
    //全局变量
    input  wire        aclk,
    input  wire        aresetn,

    // AXI4-Lite 读地址通道
    input  wire        arvalid, //   读地址有效信号
    output reg         arready, //   表示准备好读地址
    input  wire [31:0] araddr,  //    要读的数据

    // AXI4-Lite 读数据通道
    output reg        rvalid,  //    表示传出的数据有效
    input  wire        rready,  //    准备好接收数据
    output reg [31:0]  rdata    //    读出的数据  
);

reg [1:0] state = `IDLE ;

always @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            arready <= 1;   // 初始可接收请求
            rvalid  <= 0;   // 还没有数据
            state   <= `IDLE;
        end else begin
            case (state)
                `IDLE: begin
                    arready <= 1;
                    if (arvalid) begin
                        arready <= 0;      // 进入等待，先拉低 arready
                        state   <= `WAIT;   // 进入等待状态
                    end
                end

                `WAIT: begin
                    rdata   <= rtl_pmem_read(araddr); // 读取数据
                    state   <= `DONE;  // 等待 rtl_pmem_read 处理完成
                end

                `DONE: begin
                    rvalid  <= 1;  // 数据有效
                    if (rready) begin
                        rvalid  <= 0; // 等待 rready，清除 rvalid
                        arready <= 1; // arready 重新变为 1，准备接收下一个请求
                        state   <= `IDLE;
                    end
                end
                default begin
                    arready <= 1; // arready 重新变为 1，准备接收下一个请求
                    state   <= `IDLE;
                end
            endcase
        end
    end

endmodule


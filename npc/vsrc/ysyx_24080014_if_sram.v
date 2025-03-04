import "DPI-C" function int rtl_pmem_read(
    input int raddr
);

module ysyx_24080014_if_sram(
    input  clk,
    input  rst,
    input  [31:0] addr,
    input  ready,
    output valid,
    output [31:0] dout
);

    reg read_pending;        // 延迟周期标志
    reg [31:0] if_storage [255:0]; // 存储指令，256个32-bit
    reg [31:0] tem_dout;     // 输出数据
    reg [31:0] tem_inst;     // 存储取出的指令
    reg tem_din;             // 数据有效标志
    reg tem_ready ;

    always @(posedge clk or posedge rst) begin
        if (!rst) begin
            tem_din = 1'b0;
            tem_dout = 32'b0;
            read_pending = 1'b0;
        end
        else if (ready == 0) begin //表示没有写完再等待
            tem_din = 1'b1;

        end
        else begin
            if (!read_pending) begin
                // 第一个周期，发出读取请求并保存数据
                tem_dout = rtl_pmem_read(addr);   // 调用 DPI-C 读取数据
                read_pending = 1'b1;             // 设置标志，表示已经发出请求
                tem_din = 1'b1;                  // 数据有效
            end
            else begin
                // 延迟周期，输出数据
                tem_inst = tem_dout;             // 将数据传递给内部指令
                read_pending = 1'b0;             // 读取完成，重置标志
                tem_din = 1'b0;                  // 数据无效
            end
        end
    end

    assign valid = tem_din;  // 数据有效信号
    assign dout = tem_dout;  // 输出读取的指令

endmodule


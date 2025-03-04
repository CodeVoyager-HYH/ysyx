import "DPI-C" function int rtl_pmem_read(
    input int raddr
);

module ysyx_24080014_if_sram(
    input  ACLK          ,//clk
    input  ARESETn       ,//复位信号，低电平有效，从低电平置高的时候延迟一个周期有效
    input  ARVALID       ,//读地址有效信号，表示地址请求有效
    input  RREADY        ,//读数据准备好信号，表示主设备已准备好接收数据
    input  [31:0] ARADDR ,//读地址，指定从设备中的目标地址
    output ARREADY       ,//读地址准备好信号，表示从设备已接收地址
    output RVALID        ,//读数据有效信号，表示 RDATA 数据可用
    output [31:0] RDATA   //读数据，返回所请求地址的数据-------------dout
);

    assign ARREADY = (ARESETn == 0)?  1'b0  : 
                        (ARVALID && read_pending)? 1'b1 : 1'b0;
//    tem_arready  ;
    assign RVALID  = (ARESETn == 0)?  1'b0  :
                        ((ARVALID && ARREADY) ? 1'b1 :1'b0);
    assign RDATA   = (ARESETn == 0)?  32'b0 :
                        (RREADY)? tem_inst : s_load_inst ;
   // always @(*)$display("ARVALID = %d ARREADY = %d",ARVALID, ARREADY);
    reg tem_rst ;
   // reg tem_arready ;
    reg read_pending = 1;   
    reg [31:0] tem_dout;
    reg [31:0] s_load_inst;
    reg [31:0] tem_inst;//RDATA
    reg tem_store_pend = read_pending; //用来复位信号升到高的时候延迟一个周期

    always @(posedge ACLK) begin
        if(tem_store_pend != read_pending)begin //过了一个周期
            tem_rst = 1;
        end
        else if(ARESETn && !tem_rst)begin //表示复位信号刚成为高电平
            tem_store_pend = read_pending;
            tem_rst = 0;
        end
        else begin 
            //tem_arready = 1'b0;
            tem_rst = ARESETn;
            tem_store_pend = read_pending;
        end
        if(ARVALID)begin //请求读地址，输出地址
            if(!read_pending) begin
                read_pending = 1'b1;
               // tem_arready = 1'b0;
            end
            else begin //读出数据
                if(ARADDR!= 32'h0)begin
                tem_inst = rtl_pmem_read(ARADDR);
                read_pending = 1'b0;
                //tem_arready = 1'b1;
                if(RREADY) s_load_inst = tem_inst;
                end
                else $display("ARADDR = %x",ARADDR);
            end
        end
    end


    // reg read_pending;        // 延迟周期标志
    // reg [31:0] if_storage [255:0]; // 存储指令，256个32-bit
    // reg [31:0] tem_dout;     // 输出数据
    // reg [31:0] tem_inst;     // 存储取出的指令
    // reg tem_din;             // 数据有效标志
    // reg tem_ready ;



    // always @(posedge ACLK or posedge ARESETn) begin
    //     if (!ARESETn) begin // 置低有效
    //         tem_din = 1'b0;
    //         tem_dout = 32'b0;
    //         read_pending = 1'b0;
    //     end
    //     else if (ready == 0) begin //表示没有写完再等待
    //         tem_din = 1'b1;

    //     end
    //     else begin
    //         if (!read_pending) begin
    //             // 第一个周期，发出读取请求并保存数据
    //             tem_dout = rtl_pmem_read(addr);   // 调用 DPI-C 读取数据
    //             read_pending = 1'b1;             // 设置标志，表示已经发出请求
    //             tem_din = 1'b1;                  // 数据有效
    //         end
    //         else begin
    //             // 延迟周期，输出数据
    //             tem_inst = tem_dout;             // 将数据传递给内部指令
    //             read_pending = 1'b0;             // 读取完成，重置标志
    //             tem_din = 1'b0;                  // 数据无效
    //         end
    //     end
    // end

    // assign valid = tem_din;  // 数据有效信号
    // assign dout = tem_dout;  // 输出读取的指令

endmodule

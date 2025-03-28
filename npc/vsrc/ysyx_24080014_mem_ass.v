import "DPI-C" function void rtl_pmem_write(
    input int  waddr , 
    input int  wdata ,
    input byte wmask
);

module ysyx_24080014_mem_ass(
    //AXI4-lite 全局变量
    input   wire        aclk        ,
    input   wire        aresetn     ,
    
    //AXI4-lite 写地址通道
    input   wire        awvalid     ,//写使能
    output  reg         awready     ,
    input   wire [31:0] awaddr      ,//写入的地址

    //AXI4-lite 写数据通道
    input   wire [31:0] wdata       ,//写入的数据
    input   wire [ 7:0] wstrb       ,//写掩码
    output  reg         wready      ,
    input   reg         wvalid      ,

    //AXI4-lite 读地址通道
    input   wire [31:0] araddr      ,//读出的地址
    input   wire        arvalid     ,//读使能
    output  reg         arready     ,

    //AXI4-lite 读数据通道
    output  reg [31:0]  rdata       ,  //读出的数据
    output  reg [ 1:0]  rresp       ,
    input   reg         rready      ,
    output  reg         rvalid      ,
    
    //AXI4-lite 写响应通道
    input   wire        bready      ,
    output  reg [ 1:0]  bresp       ,
    output  reg         bvalid
);

    reg [ 1:0]  clock       ;//用来延迟   
    reg         write       ;

    assign rvalid = (!aresetn)?1'b0:(arvalid && rready)?1'b1:1'b0;
    assign bvalid = (!aresetn)?1'b0:(awvalid && awready && wvalid && wready)?1'b1:1'b0;

    always @(posedge aclk or negedge aresetn) begin
        // if(!aresetn)begin
        //     rvalid  <=  1'b0    ;
        //     bvalid  <=  1'b0    ;   
        // end    

        if      (awvalid && wvalid) clock <= 2'b01;    
        else if (arvalid && rready) clock <= 2'b10;
        else clock <= 2'b00;


        if  (clock == 2'b01) begin //写
            if  (!write) begin
                rtl_pmem_write(awaddr, wdata, wstrb);
                write   <= 1    ;
                awready <= 1    ;
                wready  <= 1    ;
            end    

            if  (bready) bresp <= 2'b00  ;
            rresp   <= 2'b10    ;
            rdata   <= 32'b0    ;
            write   <= 1        ;
            arready <= 0        ;
        end
        else if (clock == 2'b10) begin //读
            rdata   <= rtl_pmem_read(araddr) ;
            arready <= 1        ;
            rresp   <= 2'b00    ;
            awready <= 0        ;
            if  (bready) bresp <= 2'b10  ;
        end
        else begin
            if  (bready) bresp <= 2'b10  ;
            arready     <= 1        ;
            rresp       <= 2'b10    ;
            rdata       <= 32'b0    ;        
            write       <= 0        ;
            awready     <= 1        ;
        end
    end


endmodule
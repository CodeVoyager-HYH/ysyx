`define SERIAL_PORT 32'ha00003f8
module ysyx_24080014_memory(
    input  ReadWr               ,//读入使能
    input  StoreWr              ,//内存写入使能
    input  sign                 ,
    input  clk                  ,
    input  rst                  ,
    input  valid                ,
    input  [ 7:0] wmask         , //掩码
    input  [31:0] rs1_data      ,
    input  [ 2:0] rmask         ,//读取的字节数
    input  [31:0] read_addr     ,//要读入的地址
    input  [31:0] mem_rd        ,   //写入的目标地址----waddr
    input  [31:0] store_data    ,//写入内存的内容----wdata
    output mem_ready            ,
    output [31:0] read_data      //读出数据
);

    wire [31:0] read_tem;
    wire        awready ;
    wire        wready  ;
    wire        arready ;
    wire        bvalid  ;
    wire        bready = 1'b1  ;
    wire        rvalid  ;
    wire [1:0]  rresp;
    wire [1:0]  bresp;
    wire        mem_r;
    wire        uart_r;


    assign mem_r = (bresp == 2'b00)?1'b1:
                            (rresp == 2'b00)?1'b1:1'b0;
    assign uart_r = (bresp_u == 2'b00)?1'b1:1'b0;                        
    assign mem_ready = (mem_r || uart_r)?1'b1:1'b0;
    // ysyx_24080014_mem_ass mem_ass_storage(
    //     .rst        (rst)           ,
    //     .ren        (ReadWr)        ,
    //     .clk        (clk)           ,
    //     .valid      (valid)         ,
    //     .wen        (StoreWr)       ,
    //     .wmask      (wmask)         ,
    //     .mem_ready  (mem_ready)     ,
    //     .waddr      (mem_rd)        ,
    //     .raddr      (read_addr)     ,
    //     .din        (store_data)    ,
    //     .dout       (read_tem)
    // );
//=================================================
    wire  uart_valid; 
    wire  mem_valid;
    wire  awready_u  ;
    //wire        bready_u;
    wire [1:0]  bresp_u;  
    wire        bvalid_u;
    wire        wready_u;
    wire [1:0]  rresp_u;
    
    assign  uart_valid = (mem_rd == `SERIAL_PORT)?
                            ((!valid)?1'b1:1'b0):1'b0;
    assign  mem_valid = (mem_rd != `SERIAL_PORT&&(!valid))?1'b1:1'b0;                      
    
    axi4lite_uart_slave uart(
        .aclk       (clk)           ,
        .aresetn    (rst)           ,

        .awaddr     (mem_rd)        ,
        .awvalid    (uart_valid)    ,
        .awready    (awready_u)     ,

        .wdata      (store_data)    ,
        .wstrb      (wmask)         ,
        .wready     (wready_u)      ,
        .wvalid     (uart_valid)    ,

        .bready     (bready)      ,
        .bresp      (bresp_u)       ,
        .bvalid     (bvalid_u)      ,

        .araddr     ()              ,
        .arvalid    ()              ,
        .arready    ()              ,
        
        .rdata      ()              ,
        .rresp      (rresp_u)       ,
        .rvalid     ()              ,
        .rready     ()              
    );
    ysyx_24080014_mem_ass mem_ass_storage(
        //AXI4-lite 全局变量
        .aclk       (clk)           ,
        .aresetn    (rst)           ,
        
        //AXI4-lite 写地址通道
        .awvalid    (StoreWr)       ,
        .awready    (awready)       ,
        .awaddr     (mem_rd)        ,   

        //AXI4-lite 写数据通道
        .wdata      (store_data)    ,
        .wstrb      (wmask)         ,
        .wready     (wready)        ,
        .wvalid     (mem_valid)        ,

        //AXI4-lite 读地址通道
        .araddr     (read_addr)     ,
        .arvalid    (ReadWr)        ,
        .arready    (arready)       ,

        //AXI4-lite 读数据通道
        .rdata      (read_tem)      ,
        .rresp      (rresp)         ,
        .rready     (!valid)        ,
        .rvalid     (rvalid)        ,

        //AXI4-lite 写响应通道
        .bready     (bready)        ,
        .bresp      (bresp)         ,
        .bvalid     (bvalid)
    );    
//========================================================
    // Xbar xbar(
    //     .clk            (clk)           ,
    //     .rst            (rst)           ,
    //     .valid          (valid)         ,

    //     .read_addr      (read_addr)     ,
    //     .ReadWr         (ReadWr)        ,
    //     .read_data      (read_data)     ,

    //     .mem_rd         (mem_rd)        ,
    //     .wmask          (wmask)         ,
    //     .store_data     (store_data)    ,
    //     .StoreWr        (StoreWr)
    // );



    assign read_data = (ReadWr == 1)?
                            ((sign == 0)?
                                ((rmask == 3'b001)?{{24{1'b0}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{1'b0}},read_tem[15:0]}:read_tem):
                                ((rmask == 3'b001)?{{24{read_tem[7]}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{read_tem[15]}},read_tem[15:0]}:read_tem)):32'b0;
                                


endmodule
`define SERIAL_PORT     32'ha00003f8
`define RTC_ADDR        32'ha0000048

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
    wire [31:0] read_t;
    wire [31:0] read_m;
    wire        awready ;
    wire        wready  ;
    wire        arready ;
    wire        bvalid  ;
    wire        bready = 1'b1  ;
    wire        rvalid  ;
    wire [1:0]  rresp;
    wire [1:0]  bresp;
    wire        mem_r;
    wire        time_r;
    wire        uart_r;
    wire        uart_valid; 
    wire        clint_time;
    wire        mem_w_valid;
    wire        mem_r_valid;
    wire        awready_u  ;
    wire        rvalid_t;
    wire [1:0]  bresp_u;  
    wire        bvalid_u;
    wire        wready_u;
    wire [1:0]  rresp_t;

    assign  time_r = (rresp_t == 2'b00)?1'b1:1'b0;
    assign mem_r = (bresp == 2'b00)?1'b1:
                            (rresp == 2'b00)?1'b1:1'b0;
    assign  uart_r = (bresp_u == 2'b00)?1'b1:1'b0;                        
    assign  mem_ready = (mem_r || uart_r ||time_r)?1'b1:1'b0;
    assign  uart_valid = (mem_rd == `SERIAL_PORT)?
                            ((!valid)?1'b1:1'b0):1'b0;
    assign  mem_w_valid = (mem_rd != `SERIAL_PORT&&(!valid))?1'b1:1'b0;    
    assign  clint_time = ((read_addr == `RTC_ADDR&&(!valid))||((read_addr == (`RTC_ADDR+4))&&(!valid)))?
                            1'b1:1'b0;   
    assign  mem_r_valid = ((read_addr != `RTC_ADDR&&(!valid))&&((read_addr != (`RTC_ADDR+4))&&(!valid)))?
                            1'b1:1'b0;   
    assign  read_tem = (read_addr == `RTC_ADDR || read_addr == (`RTC_ADDR + 4))? read_t : read_m;
    clint time_trap(
        //AXI4-lite 全局变量
        .aclk       (clk)           ,
        .aresetn    (rst)           ,
        
        //AXI4-lite 写地址通道
        .awvalid    ()              ,
        .awready    ()              ,
        .awaddr     ()              ,    

        //AXI4-lite 写数据通道
        .wdata      ()              ,
        .wstrb      ()              ,
        .wready     ()              ,
        .wvalid     ()              ,

        //AXI4-lite 读地址通道
        .araddr     (read_addr)     ,
        .arvalid    (ReadWr)        ,
        .arready    (arready)       ,

        //AXI4-lite 读数据通道
        .rdata      (read_t)      ,
        .rresp      (rresp_t)         ,
        .rready     (clint_time)    ,
        .rvalid     (rvalid_t)        ,

        //AXI4-lite 写响应通道
        .bready     ()        ,
        .bresp      ()         ,
        .bvalid     ()
    );                      
    
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
        .rresp      ()              ,
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
        .wvalid     (mem_w_valid)   ,

        //AXI4-lite 读地址通道
        .araddr     (read_addr)     ,
        .arvalid    (ReadWr)        ,
        .arready    (arready)       ,

        //AXI4-lite 读数据通道
        .rdata      (read_m)      ,
        .rresp      (rresp)         ,
        .rready     (mem_r_valid)   ,
        .rvalid     (rvalid)        ,

        //AXI4-lite 写响应通道
        .bready     (bready)        ,
        .bresp      (bresp)         ,
        .bvalid     (bvalid)
    );    

    assign read_data = (ReadWr == 1)?
                            ((sign == 0)?
                                ((rmask == 3'b001)?{{24{1'b0}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{1'b0}},read_tem[15:0]}:read_tem):
                                ((rmask == 3'b001)?{{24{read_tem[7]}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{read_tem[15]}},read_tem[15:0]}:read_tem)):32'b0;
                                


endmodule
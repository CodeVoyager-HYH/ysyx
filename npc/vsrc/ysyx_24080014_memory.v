module ysyx_24080014_memory(
    input  ReadWr               ,//读入使能
    input  StoreWr              ,//内存写入使能
    input  sign                 ,
    input  clk                  ,
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

    ysyx_24080014_mem_ass mem_ass_storage(
        .ren        (ReadWr)        ,
        .clk        (clk)           ,
        .valid      (valid)         ,
        .wen        (StoreWr)       ,
        .wmask      (wmask)         ,
        .mem_ready  (mem_ready)     ,
        .waddr      (mem_rd)        ,
        .raddr      (read_addr)     ,
        .din        (store_data)    ,
        .dout       (read_tem)
    );
    
    assign read_data = (ReadWr == 1)?
                            ((sign == 0)?
                                ((rmask == 3'b001)?{{24{1'b0}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{1'b0}},read_tem[15:0]}:read_tem):
                                ((rmask == 3'b001)?{{24{read_tem[7]}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{read_tem[15]}},read_tem[15:0]}:read_tem)):32'b0;
                                


endmodule

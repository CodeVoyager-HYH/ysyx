import "DPI-C" function void rtl_pmem_write(input int waddr, input int wdata,input byte wmask);//分别是

module ysyx_24080014_memory(
    input  ReadWr,//读入使能
    input  StoreWr,   //内存写入使能
    input  sign,
    input  [ 7:0] wmask, //掩码
    input  [31:0] rs1_data,
    input  [ 2:0] rmask,//读取的字节数
    input  [31:0] read_addr,//要读入的地址
    input  [31:0] mem_rd,   //写入的目标地址----waddr
    input  [31:0] store_data,//写入内存的内容----wdata
    output [31:0] read_data//读出数据
);
wire [31:0] tem;
wire [31:0] read_tem;
always @(*) begin
    //if(ReadWr) $display("(npc vsrc)read_addr:%x,read_data:%x\nrmask:%d,read_data = %x",read_addr,read_tem,rmask,read_data);
    if(StoreWr) begin
        //$display("(npc vsrc)mem_rd = %x, store_data = 0x%x, wmask = %d",mem_rd, store_data, wmask);
        rtl_pmem_write(mem_rd, store_data, wmask);
    end
end 
    assign read_tem = rtl_pmem_read(read_addr,tem);
    assign read_data = (ReadWr == 1)?
                            ((sign == 0)?
                                ((rmask == 3'b001)?{{24{1'b0}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{1'b0}},read_tem[15:0]}:read_tem):
                                ((rmask == 3'b001)?{{24{read_tem[7]}},read_tem[7:0]}:
                                (rmask == 3'b010)?{{16{read_tem[15]}},read_tem[15:0]}:read_tem)):32'b0;
                                

                       //rtl_pmem_read(read_addr,tem):32'b0;

endmodule

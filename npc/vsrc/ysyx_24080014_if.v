module ysyx_24080014_if(
    input  [31:0] pc    ,
    input  clk          ,
    input  rst          ,
    input  ready        ,//表示指令执行完成
    output valid        ,//表示取指完成
    output reg [31:0] inst
);
  reg [31:0] rdata;
  wire arready;
  wire rready;
  wire rvalid = 0;

  // always @(*) begin
  //   if(rvalid)  inst = rdata;
  // end

  ysyx_24080014_if_sram ifu(
    //全局
    .aclk(clk),
    .aresetn(rst),
    
    //读地址通道
    .arvalid(ready),  //读地址有效信号  当pc更新以后就表示要读地址
    .arready(valid),  //准备好读地址    这个信号告诉其他模块可以运作了，比如译码之类
    .araddr(pc),
    
    //读数据通道
    .rvalid(rvalid),   //传出的数据有效    这个用来输出inst 当为1的时候输出，反之保持原来
    .rready(ready),   //准备好接收数据    pc更新后就表示可以接收新的数据了
    .rdata(inst)     
  );

endmodule
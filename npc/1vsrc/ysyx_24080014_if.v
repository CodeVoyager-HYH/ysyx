module ysyx_24080014_if(
    input  [31:0] pc    ,
    input  clk          ,
    input  rst          ,
    input  gpr_ready    ,
    output inst_ready   ,
    output [31:0] inst
);

  //read addr channel
  wire ARVALID ;
  wire ARREADY ;
  wire [31:0] ARADDR = pc;
  wire ARPROT ;

  //read data channel
  wire RREADY ;
  wire RRESP ;
  wire RVALID ;
  wire [31:0] RDATA ; 

  ysyx_24080014_if_sram ifu(
    .ACLK    (clk)          ,
    .ARESETn (rst)          ,
    .ARVALID (gpr_ready)    ,
    .RREADY  (gpr_ready)    ,
    .ARADDR  (pc)           ,
    .ARREADY (ARREADY)      ,
    .RVALID  (RVALID)       ,
    .RDATA   (inst)    
  );

assign inst_ready = (RVALID)? 1'b1 :1'b0 ;
//always @(*)$display("inst_ready = %d ",inst_ready);
assign ARADDR = pc;//(ARREADY)? pc : 32'b0 ;
//assign inst = (RVALID)?  RDATA : inst ;
// |号前是读地址，后面是读数据
//输出到sram中 ： ARVALID ARADDR ARPROT(目前不需要) | RREADY 
//从sram中输出 ： ARREADY | RVALID RDATA RRESP(目前不需要)
endmodule
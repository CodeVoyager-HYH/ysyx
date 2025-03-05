module ysyx_24080014_if(
    input  [31:0] pc    ,
    input  clk          ,
    input  rst          ,
    input  ready        ,
    output valid        ,
    output [31:0] inst
);
  wire RVALID ;
  wire ARVALID ;
  assign ARVALID = ready;
  assign RVALID = (ARVALID&& valid)? 1'b1 : 1'b0 ;//当发送地址有效的时候置高，所以这

  ysyx_24080014_if_sram ifu(
    .ACLK    (clk)   ,
    .RVALID (RVALID),
    .ARVALID  (ARVALID) ,
    .ARADDR   (pc)    ,
    .ARESETn    (rst)   ,
    .ARREADY  (valid) ,
    .RDATA   (inst)
  );

endmodule
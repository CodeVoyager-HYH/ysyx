module ysyx_24080014_if(
    input  [31:0] pc    ,
    input  clk          ,
    input  rst          ,
    input  ready        ,
    output valid        ,
    output [31:0] inst
);

  ysyx_24080014_if_sram ifu(
    .clk    (clk)   ,
    .ready  (ready) ,
    .addr   (pc)    ,
    .rst    (rst)   ,
    .valid  (valid) ,
    .dout   (inst)
  );

endmodule
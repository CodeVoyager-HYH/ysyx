  import "DPI-C" function int rtl_pmem_read(
    input  int raddr,
    output int rdata
  );
module ysyx_24080014_if(
    input  [31:0] pc,
    output [31:0] inst
);

reg [31:0]tem;
assign  inst = rtl_pmem_read(pc, tem);

endmodule
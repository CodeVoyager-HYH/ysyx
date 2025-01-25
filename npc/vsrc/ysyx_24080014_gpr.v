import "DPI-C" function void set_gpr_ptr(input logic [31:0] a []);
import "DPI-C" function void isa_reg_display();
module ysyx_24080014_gpr(
    input [4:0]rs1_addr,//读入寄存器的1,输入的是下标
    input [4:0]rs2_addr,//读入寄存器的2地址,输入的是下标
    input [4:0]rd,//输出寄存器的3地址,输入的是下标
    input clk,
    input RegWr,//写入使能
    input [31:0]rd_data,//写入对应A3寄存器的值
    output reg[31:0]rs1_data,//输出对应A1寄存器的值
    output reg[31:0]rs2_data//输出对应A2寄存器的值
);

reg [31:0] general_register [31:0];//32个寄存器
assign general_register[0] = 0;//零号寄存器

//对寄存器进行初始化
integer i, j;
initial begin
    for (i = 0; i < 32; i++) begin
        for (j = 0; j < 32; j++) begin
            general_register[i] = 32'b0;
        end
    end
    set_gpr_ptr(general_register);
end

  assign rs1_data = general_register[rs1_addr];
  assign rs2_data = general_register[rs2_addr];

always @(posedge clk) begin
  if (RegWr)begin// isa_reg_display();
      general_register[rd] <= rd_data;
  end
  general_register[0] <= 32'b0;
  
end

always @(*) begin
    $display("(NPCC)rd_addr = %d,rd_data = %d,a5 = %x",rd,rd_data,general_register[15]);
    set_gpr_ptr(general_register);
end
endmodule

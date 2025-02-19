import "DPI-C" function void set_gpr_ptr(input logic [31:0] a []);
import "DPI-C" function void isa_reg_display();
module ysyx_24080014_gpr(
    input             clk         ,
    input             RegWr       ,//写入使能
    input      [1:0]  csrs_ctl    ,//当csrs为0表示没有操作，1的时候是ecall，2的时候是mret
    input      [4:0]  rs1_addr    ,//读入寄存器的1,输入的是下标
    input      [4:0]  rs2_addr    ,//读入寄存器的2地址,输入的是下标
    input      [4:0]  rd          ,//输出寄存器的3地址,输入的是下标
    input      [31:0] pc          ,
    input      [11:0]  csrs_rs1_read_add,  
    input      [11:0]  csrs_rs2_read_add,  
    input      [11:0]  csrs_rs1_write_add,  
    input      [31:0] rd_data     ,//写入对应A3寄存器的值
    output reg [31:0] rs1_data    ,//输出对应A1寄存器的值
    output reg [31:0]  csr_next_pc ,
    output reg [31:0]  rs2_data     //输出对应A2寄存器的值
);

reg [31:0] general_register [31:0];//32个寄存器
reg [31:0] mepc;
reg [31:0] mcause;
reg [31:0] mtvec;
reg [31:0] mstatus;

assign general_register[0] = 0;//零号寄存器

//对寄存器进行初始化
integer i, j;
initial begin
    for (i = 0; i < 32; i++) begin
        for (j = 0; j < 32; j++) begin
            general_register[i] = 32'b0;
        end
    end
    mstatus = 32'h1800;
    set_gpr_ptr(general_register);
end

//读出
  assign rs1_data = (csrs_rs1_read_add == 12'h300)? mstatus:
                        (csrs_rs1_read_add == 12'h305)? mtvec :
                        (csrs_rs1_read_add == 12'h341)? mepc :
                        (csrs_rs1_read_add == 12'h342)? mcause : 
                    general_register[rs1_addr];
                    
  assign rs2_data = (csrs_rs2_read_add == 12'h300)? mstatus:
                        (csrs_rs2_read_add == 12'h305)? mtvec :
                        (csrs_rs2_read_add == 12'h341)? mepc :
                        (csrs_rs2_read_add == 12'h342)? mcause : 
                        general_register[rs2_addr] ;

//写入
always @(posedge clk) begin
    if (RegWr)begin// isa_reg_display();
      general_register[rd] <= rd_data;
        if(csrs_ctl == 2'b01)begin//ecall
            mepc        = pc         ;
            mcause      = general_register[17] ;
            csr_next_pc = mtvec      ;
        end
        else if(csrs_ctl == 2'b10) begin//mret
            csr_next_pc = mepc ;
        end    
        else if(csrs_rs1_write_add == 12'h300)
            mstatus = rd_data;
        else if(csrs_rs1_write_add == 12'h305)
            mtvec = rd_data;
        else if(csrs_rs1_write_add == 12'h341)
            mepc = rd_data;
        else if(csrs_rs1_write_add == 12'h342)
            mcause = rd_data;            

    end

  general_register[0] <= 32'b0;
end

always @(*) begin
    set_gpr_ptr(general_register);
end
endmodule

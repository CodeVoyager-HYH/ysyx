import "DPI-C" function void set_gpr_ptr(input logic [31:0] a []);
import "DPI-C" function void isa_reg_display();
module ysyx_24080014_gpr(
    input      clk                          ,
    input      RegWr                        ,//写入使能
    input      load                         ,
    input      StoreWr                      ,
    input      mem_ready                    ,
    input      valid                        ,//表示指令是否是正确的，防止为读出指令就修改寄存器状态               
    input      [1:0]  csrs_ctl              ,//当csrs为0表示没有操作，1的时候是ecall，2的时候是mret
    input      [4:0]  rs1_addr              ,//读入寄存器的1,输入的是下标
    input      [4:0]  rs2_addr              ,//读入寄存器的2地址,输入的是下标
    input      [4:0]  rd                    ,//输出寄存器的3地址,输入的是下标
    input      [31:0] pc                    ,
    input      [11:0] csrs_rs1_read_add     ,  
    input      [11:0] csrs_rs2_read_add     ,  
    input      [11:0] csrs_rs1_write_add    ,  
    input      [31:0] rd_data               ,//写入对应A3寄存器的值
    output reg [31:0] rs1_data              ,//输出对应A1寄存器的值
    output     [31:0] csr_rs1_data          ,
    output     ready                        ,  
    output     [31:0] csr_next_pc           ,
    output reg [31:0] rs2_data     //输出对应A2寄存器的值
);

reg [31:0] general_register [20:0];//16个寄存器 +32 mcause[17] 33 mepc[18] 34 mstatus[19] 35 mtvec[20]

//assign general_register[0] = 0;//零号寄存器

//对寄存器进行初始化
integer i, j;
initial begin
    for (i = 0; i < 20; i++) begin
        for (j = 0; j < 20; j++) begin
            general_register[i] = 32'b0;
        end
    end

    tem_ready = 1;
    set_gpr_ptr(general_register);
end

//读出
  assign csr_rs1_data = (csrs_rs1_read_add == 12'h300)? general_register[19] ://mstatus
                        (csrs_rs1_read_add == 12'h305)? general_register[20] ://mtvec
                        (csrs_rs1_read_add == 12'h341)? general_register[18] ://mepc
                        (csrs_rs1_read_add == 12'h342)? general_register[17] :  32'b0;//mcause 
         
  reg tem_ready ;

  assign rs1_data = general_register[rs1_addr];                 
  assign rs2_data = general_register[rs2_addr] ;
//   assign ready = (valid)?((load && !mem_ready) ? 1'b0 :((StoreWr&& !mem_ready)?1'b0: 1'b1)):1'b0;
  assign ready = (load && !mem_ready) ? 1'b0 ://1'b1;
                    (StoreWr&& !mem_ready)?1'b0: 1'b1;
//写入
assign csr_next_pc = (csrs_ctl == 2'b01)? general_register[20]://ecall
                        (csrs_ctl == 2'b10)? (general_register[18]) : pc+4;//mret

always @(posedge clk) begin
    if (load)begin//表示需要等延迟
        if (mem_ready)begin//表示延迟完成
            if (RegWr && valid)begin //isa_reg_display();
                general_register[rd] <= rd_data;
                
                if(csrs_ctl == 2'b01)begin//ecall
                    general_register[18] <= pc       ;
                    general_register[17] <= general_register[15] ;
                end
                else if(csrs_rs1_write_add == 12'h300)
                    general_register[19] <= rd_data;
                else if(csrs_rs1_write_add == 12'h305)
                    general_register[20] <= rd_data;
                else if(csrs_rs1_write_add == 12'h341)
                    general_register[18] <= rd_data;
                else if(csrs_rs1_write_add == 12'h342)
                    general_register[17] <= rd_data;            
            end
        end
    end
    else begin//表示不需要延迟
        if (RegWr &&valid)begin //isa_reg_display();
            general_register[rd] <= rd_data;
            if(csrs_ctl == 2'b01)begin//ecall
                general_register[18] <= pc       ;
                general_register[17] <= general_register[15] ;
            end
            else if(csrs_rs1_write_add == 12'h300)
                general_register[19] <= rd_data;
            else if(csrs_rs1_write_add == 12'h305)
                general_register[20] <= rd_data;
            else if(csrs_rs1_write_add == 12'h341)
                general_register[18] <= rd_data;
            else if(csrs_rs1_write_add == 12'h342)
                general_register[17] <= rd_data;            
        end
    end
  //$display("general_register[%d] <= %x,pc = %x",index_rd-1,rd_data,pc);  
  general_register[0] <= 32'b0;
end

always @(*) begin
    set_gpr_ptr(general_register);
end
endmodule
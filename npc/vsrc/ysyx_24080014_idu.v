//opcode
`define Integer 7'b0110011
`define Imm     7'b0010011
`define Load    7'b0000011
`define Store   7'b0100011
`define Control 7'b1100011
`define System  7'b1110011
`define Auipc   7'b0010111
`define Lui     7'b0110111
`define Jal     7'b1101111
`define Jalr    7'b1100111

//Integer
    //func3
`define Int 3'b000    
        //func7
        `define sub     7'b0100000
        `define add     7'b0000000
`define logic_shift     3'b001
         //func7
         `define sll    7'b0000000       
`define bitwise_OR      3'b110   
         //func7 
         `define Or     7'b0000000
`define bitwise_AND     3'b111    
         //func7
         `define And    7'b0000000
`define bitwise_COMPARE 3'b011
         `define sltu   7'b0000000         
`define bitwise_or_rs   3'b100
         `define Xor    7'b0000000        
`define complement      3'b010
         `define slt    7'b0000000
`define ari_right       3'b101
         `define srl    7'b0000000
         `define sra    7'b0100000

//Control
   //func3
`define bge     3'b101   
`define blt     3'b100
`define bgeu    3'b111
`define beq     3'b000 
`define bne     3'b001
`define bltu    3'b110
//Load
   //fun3
`define lw      3'b010   
`define lbu     3'b100
`define lh      3'b001

//Store
   //func3
`define sw      3'b010
`define sh      3'b001
`define sb      3'b000

//Imm
  //func3
`define addi    3'b000
`define sltiu   3'b011
`define andi    3'b111
   //func3
`define logic_left_shift    3'b001
   //func_I 
   `define slli    6'b000000
   //func3
`define logic_left_right    3'b101
   //func_I
   `define srli    6'b000000
   `define srai    6'b010000
`define xori    3'b100

//System
   //func3
   `define csrrw 3'b001
   `define csrrs 3'b010
`define ebreak  12'b000000000001
`define ecall   12'b000000000000
`define mret    12'b001100000010
//Immtype
`define R_type  3'b000
`define I_type  3'b001
`define S_type  3'b010
`define U_type  3'b011
`define B_type  3'b100
`define J_type  3'b101
`define ERROR   3'b110

//npc_ctr
`define NEXT_PC_JAL         2'b00
`define NEXT_PC_JALR        2'b01 
`define NEXT_PC_COMMON      2'b10 
`define NEXT_PC_ALU_OUT         2'b11
//alu_ctl
`define ADD          4'b0000
`define SUB          4'b0001
`define NEG          4'b0010
`define AND          4'b0011
`define OR           4'b0100
`define XOR          4'b0101
`define COMPARE      4'b0110
`define EQUAL        4'b0111
`define LEFT_SHIFT   4'b1000
`define RIGHT_SHIFT  4'b1001 
`define LOGIC_LEFT_SHIFT  4'b1010
`define NONE         4'b1111

//rs_ctr
`define RS_OUT      3'b010 
`define PC          3'b000
`define PC_ADD      3'b001
`define ALU_OUT     3'b010
`define IMM         3'b011
`define READ_DATA   3'b100
`define RS1_DATA    3'b101

//aluout_ctr(PC_ADD,ALU_OUT,IMM)

//store_ctl
`define rs2      3'b000
`define rs1      3'b001
`define imm      3'b010
`define no_store 3'b111

//memout_ctl
`define alu_out   3'b001
`define no_memout 3'b111

//equal_ctl
`define eq_beq    3'b000
`define eq_bne    3'b001
`define eq_none   3'b111

//shamt_ctl
`define shamt_common  3'b000
`define shamt_rs2     3'b001
`define shamt_lui     3'b010
`define shamt_srai    3'b011
`define shamt_srl     3'b100
`define shamt_sll     3'b101
`define shamt_sra     3'b110
//compare_ctl
`define compare_ctl_sltiu 3'b000
`define compare_ctl_bltu  3'b001
`define compare_ctl_sltu  3'b010
`define compare_ctl_bgeu  3'b011
`define compare_ctl_slt   3'b100
`define compare_ctl_blt   3'b101
`define compare_ctl_bge  3'b110
`define compare_ctl_none  3'b111 

import "DPI-C" function void npctrap(); 
module ysyx_24080014_idu(
   input   [31:0] inst,      
   output  [ 7:0] wmask,//掩码
   output  [ 4:0] rs1_addr,
   output  [ 4:0] rs2_addr,
   output  [ 4:0] rd,  
   output  [ 2:0] rmask,
   output  [ 2:0] imm_type,
   output  [ 1:0] npc_ctr,
   output  [ 2:0] rs1_ctr,
   output  [ 2:0] rs2_ctr,
   output  [ 2:0] rd_ctl,
   output  [ 3:0] alu_ctl,
   output  [ 2:0] read_ctl,
   output  [ 2:0] store_ctl,//写入内容控制
   output  [ 2:0] memout_ctl,//写入地址控制
   output  [ 2:0] eq1_ctr,
   output  [ 2:0] eq2_ctr,
   output  [ 2:0] eq_ctl,
   output  [ 5:0] shamt_right,
   output  [ 5:0] shamt_left,
   output  [ 2:0] compare_ctl,
   output  [ 2:0] shamt_ctl,
   output  [ 2:0] and1_ctl,
   output  [ 2:0] and2_ctl,
   output  [ 1:0] csrs_ctl,
   output  [ 11:0] csrs_rs1_read_add,
   output  [ 11:0] csrs_rs2_read_add,
   output  [ 11:0] csrs_rs1_write_add,
   //output  [ 11:0] csrs_rs2_wirte_add,
   output  Equal_ctl,
   output  ReadWr,//内存读出
   output  StoreWr,//内存写入
   output  RegWr//写入使能 
);

//声明
wire [ 6:0] opcode;
wire [ 2:0] func3;
wire [11:0] func12;
wire [ 6:0] func7;
wire [ 5:0] func_I;

wire tem_system;
assign tem_system = (opcode == `System)?1:0;

   assign ReadWr = (opcode == `Load)?1 :0;
   assign func_I = inst[31:26];
   assign opcode = inst[6:0];
   assign func3  = inst[14:12];
   assign func7  = inst[31:25];
   assign func12 = inst[31:20];
   assign and1_ctl  = `rs1;
   assign csrs_ctl = (opcode == `System)? 
                        ((func12 == `ecall)? 2'b1: 
                        (func12 == `mret)? 2'b10: 0): 0;
   
   assign csrs_rs1_read_add = (opcode == `System)?
                                 ((func3 == `csrrw)? inst[31:20] :
                                 (func3 == `csrrs)? inst[31:20] : 12'b0) : 12'b0;

   assign csrs_rs2_read_add = 12'b0;                             

   assign csrs_rs1_write_add = (opcode == `System)?
                                 ((func3 == `csrrs)? inst[31:20]:
                                 (func3 == `csrrw)? inst[31:20]: 12'b0):12'b0;

   assign and2_ctl  = (opcode == `Imm)? `imm : `rs2; 
   assign shamt_ctl = (opcode == `Lui)? `shamt_lui:
                      (opcode == `Imm)?
                        ((func3 == `logic_left_right)?
                           ((func_I == `srai)?`shamt_srai:`shamt_common):`shamt_common):
                     (opcode == `Integer)?
                        (func3 == `ari_right)?
                           (func7 == `sra)?`shamt_sra:((func7 ==`srl)?`shamt_srl:`shamt_common):
                        (func3 == `logic_shift)?
                           ((func7 == `sll)? `shamt_sll:`shamt_common):`shamt_common:`shamt_common;
                
  assign rmask = (opcode == `Load)?
                        ((func3 == `lw)? 3'b100 : 
                        (func3 == `lh)? 3'b010 :
                        (func3 == `lbu)? 3'b001: `no_memout):`no_memout;

  assign shamt_left = inst[25:20];

  assign  compare_ctl = (opcode == `Control)?
                           (func3 == `blt)?`compare_ctl_blt :
                           (func3 == `bltu)?`compare_ctl_bltu :
                           (func3 == `bge)?`compare_ctl_bge:
                           ((func3 == `bgeu)? `compare_ctl_bgeu :`compare_ctl_none):
                        (opcode == `Integer)?
                           (func3 == `complement)?
                              ((func7 == `slt)?`compare_ctl_slt : `compare_ctl_none):
                           (func3 == `bitwise_COMPARE)?
                              ((func7 == `sltu)?`compare_ctl_sltu : `compare_ctl_none):`compare_ctl_none:
                        (opcode == `Imm)?
                           ((func3 == `sltiu)?`compare_ctl_sltiu :`compare_ctl_none): `compare_ctl_none;
                           // (func3 == `bltu)?`compare_ctl_bltu : `compare_ctl_none;

  assign  shamt_right = inst[25:20];

  assign read_ctl = (opcode == `Load)?
                        ((func3 == `lw)? `alu_out : 
                        (func3 == `lh)? `alu_out:
                        (func3 == `lbu)? `alu_out: `no_memout):`no_memout;

   assign eq_ctl = (opcode == `Control)?
                        ((func3 == `beq)? `eq_beq : 
                        (func3 == `bne)? `eq_bne : `eq_none):`eq_none;
//eq1_ctl
   assign eq1_ctr = `RS_OUT;
//eq1_ctl
   assign eq2_ctr = `RS_OUT;

//Equal_ctl
   assign Equal_ctl = (opcode == `Control)?1'b1:1'b0;

//wmask
   assign wmask = (opcode == `Store)?
                           ((func3 == `sw)?  8'b00001111 : 
                           (func3 == `sb)? 8'b00000001: 
                           (func3 == `sh)? 8'b00000011:8'b0 ): 8'b0;

//memout_ctl
   assign memout_ctl = (opcode == `Store)?
                           ((func3 == `sw)? `alu_out :
                           (func3 == `sb)? `alu_out :
                           (func3 == `sh)? `alu_out :`no_memout):`no_memout;
//store_ctl
   assign store_ctl = (opcode == `Store)?
                           ((func3 == `sw)? `rs2 :
                           (func3 == `sb)? `rs2 :
                           (func3 == `sh)? `rs2 :`no_store ):`no_store;
//StoreWr
   assign StoreWr = (opcode == `Store)?1:0;
                        // ((func3 == `sw)? 1 : 
                        // (func3 == `sh)? 1 : 0):0;
//rs1_addr
   assign rs1_addr = (opcode == `Integer)?inst[19:15] :
                     (opcode == `Load)?   inst[19:15] :
                     (opcode == `Control)?inst[19:15] :
                     (opcode == `Store)?  inst[19:15] :
                     (opcode == `Imm)   ? inst[19:15] :
                     (opcode == `Jalr)  ? inst[19:15] :5'b0; //--------------------------------------stystem
//rs1_addr
   assign rs2_addr = (opcode == `Integer)?inst[24:20] :
                     (opcode == `Control)?inst[24:20] :
                     (opcode == `Store)?  inst[24:20] : 5'b0;

//rd
   assign rd =       (opcode == `Integer)?inst[11:7] :
                     (opcode == `Load)?inst[11:7] :
                     (opcode == `Imm)   ?  inst[11:7] :
                     (opcode == `Jalr)  ? inst[11:7] ://--------------------------------------stystem
                        (opcode == `Jal)   ? inst[11:7] :
                        (opcode == `Auipc) ? inst[11:7] :   
                        (opcode == `Lui) ? inst[11:7] : 
                        (opcode == `Jalr)  ? inst[11:7] :5'b0;

//imm_type
  assign imm_type =  (opcode == `Integer)? `R_type :
                     (opcode == `Load)?`I_type :
                     (opcode == `Control)?`B_type: 
                     (opcode == `Store)? `S_type : 
                     (opcode == `Imm)   ? `I_type : 
                     (opcode == `Jalr)  ? `I_type ://--------------------------------------stystem
                        (opcode == `Jal)   ? `J_type :
                        (opcode == `Auipc) ? `U_type :   
                        (opcode == `Lui) ? `U_type : `ERROR;
//npc_ctl主要就是jal和jalr
  assign npc_ctr = (opcode == `Control)?`NEXT_PC_ALU_OUT :
                   (opcode == `Jalr) ? `NEXT_PC_JALR :
                        (opcode == `Jal) ? `NEXT_PC_JAL : `NEXT_PC_COMMON;

//alu_trl
   assign alu_ctl =  (opcode == `Lui)?`LEFT_SHIFT:
                     (opcode == `System)?
                        ((func3 == `csrrs)? `OR: 4'b1):
                     (opcode == `Integer)?
                        ((func3 == `complement)?
                           ((func7 == `slt)?`COMPARE:`NONE):
                        (func3 == `ari_right)?
                              ((func7 == `sra)?`RIGHT_SHIFT:
                               (func7 == `srl)?`RIGHT_SHIFT:`NONE):      
                        (func3 == `bitwise_or_rs)?
                           ((func7 == `Xor)?`XOR:`NONE):   
                        ((func3 == `Int)?
                          ((func7 == `sub)? `SUB :
                          (func7 == `add)?`ADD : `NONE):
                        (func3 == `bitwise_COMPARE)?
                          ((func7 == `sltu)? `COMPARE:`NONE):  
                        (func3 == `logic_shift)? 
                           ((func7 == `sll)? `LEFT_SHIFT :`NONE):
                        (func3 == `bitwise_OR)? 
                           ((func7 == `Or)? `OR: `NONE):
                        (func3 == `bitwise_AND)?
                           ((func7 == `And)?`AND: `NONE):`NONE)):
                     (opcode == `Load)?
                        ((func3 == `lw)? `ADD: 
                        (func3 == `lh)? `ADD:
                        (func3 == `lbu)? `ADD: `NONE):
                     (opcode == `Control)?
                           ((func3 == `beq)? `EQUAL:
                           (func3 == `blt)? `COMPARE: 
                           (func3 == `bgeu)? `COMPARE:
                           (func3 == `bge)? `COMPARE:
                           (func3 == `bltu)? `COMPARE:
                           (func3 == `bne)? `EQUAL : `NONE): 
                     (opcode == `Store)?
                        ((func3 == `sw)? `ADD : 
                        (func3 == `sb)? `ADD:
                        (func3 == `sh)? `ADD : `NONE):
                     (opcode == `Jalr) ? `ADD :
                       (opcode == `Jal)  ? `ADD :
                       (opcode == `Auipc) ? `ADD :
                     (opcode == `Imm) ? 
                       ((func3 == `addi) ? `ADD :
                       ((func3 == `logic_left_shift)?
                           ((func_I == `slli) ? `LEFT_SHIFT : `NONE ):
                       (func3 == `logic_left_right)?   
                           ((func_I == `srli) ? `RIGHT_SHIFT :
                           (func_I == `srai)?`RIGHT_SHIFT:`NONE):
                       (func3 == `xori) ? `XOR:
                       (func3 == `sltiu)? `COMPARE :
                       (func3 == `andi)? `AND:`NONE)):`NONE ;
//waddr
  assign RegWr = (opcode == `Integer)?1 :
                (opcode == `Load)? 1 : 
               (opcode == `Jalr) ? 1 ://---------------------------------stystem
               (opcode == `Jal) ? 1 :
               (opcode == `Auipc) ? 1 :
               (opcode == `Lui) ? 1 :
               (opcode == `System)? 1 : 
               (opcode == `Imm) ? 1 : 0;//-------------------------------------------Imm

//alu_rs1  
  assign rs1_ctr =   (opcode == `Integer)? `RS_OUT:
                     (opcode == `Load)? `RS_OUT: 
                     (opcode == `Control)?`IMM :
                     (opcode == `Store)?`RS_OUT :
                     (opcode == `Jalr) ? `RS_OUT://---------------------------------stystem
                     (opcode == `Jal) ? `PC :
                     (opcode == `Auipc) ? `PC :
                     (opcode == `Imm) ? `RS_OUT : `RS_OUT ;//-------------------------------------------Imm

//alu_rs2
  assign rs2_ctr =   (opcode == `Integer)?`RS_OUT : 
                     (opcode == `Load)? `IMM:
                     (opcode == `Control)? `PC : 
                     (opcode == `Store)? `IMM :
                     (opcode == `Jalr) ? `IMM://---------------------------------stystem
                        (opcode == `Jal) ? `IMM :
                        (opcode == `Auipc) ? `IMM :
                     (opcode == `Imm) ? `IMM : `RS_OUT;//-------------------------------------------Imm
                        

//rd_ctl
    assign rd_ctl =  (opcode == `System)?
                        ((func3 == `csrrs)?`ALU_OUT:
                        (func3 == `csrrw)? `RS1_DATA: `ALU_OUT):
                     (opcode == `Load)?`READ_DATA:
                        (opcode == `Integer)?`ALU_OUT :
                     (opcode == `Jalr) ? `PC_ADD://---------------------------------stystem
                        (opcode == `Jal) ? `PC_ADD :
                        (opcode == `Auipc) ? `ALU_OUT :
                        (opcode == `Lui) ? `ALU_OUT :
                     (opcode == `Imm) ? `ALU_OUT : `ALU_OUT ;//-------------------------------------------Imm


always @(*)begin
  if(opcode == `System)begin
    if(func12 == `ebreak) npctrap();//EBREAK
  end
end

endmodule

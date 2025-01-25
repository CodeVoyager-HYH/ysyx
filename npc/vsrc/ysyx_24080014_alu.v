`define ADD               4'b0000
`define SUB               4'b0001
`define NEG               4'b0010
`define AND               4'b0011
`define OR                4'b0100
`define XOR               4'b0101
`define COMPARE           4'b0110
`define EQUAL             4'b0111
`define LEFT_SHIFT        4'b1000
`define RIGHT_SHIFT       4'b1001 
`define LOGIC_LEFT_SHIFT  4'b1010
`define NONE              4'b1111

//equal_ctl
`define eq_beq    3'b000
`define eq_bne    3'b001
`define eq_none   3'b111
`define RS_OUT    3'b010 

//compare_ctl
`define compare_ctl_sltiu 3'b000
`define compare_ctl_bltu  3'b001
`define compare_ctl_sltu  3'b010
`define compare_ctl_bgeu  3'b011
`define compare_ctl_slt   3'b100
`define compare_ctl_blt   3'b101
`define compare_ctl_bge  3'b110
`define compare_ctl_none  3'b111 

//shamt_ctl
`define shamt_common  3'b000
`define shamt_rs2     3'b001
`define shamt_lui     3'b010
`define shamt_srai    3'b011
`define shamt_srl     3'b100
`define shamt_sll     3'b101
`define shamt_sra     3'b110

`define rs2      3'b000
`define rs1      3'b001
`define imm      3'b010
`define no_store 3'b111
module ysyx_24080014_alu(
    input  [ 2:0] shamt_ctl, 
    input  [31:0] pc,
    input  Equal_ctl,
    input  [31:0] imm,
    input  [31:0] alu_rs1,
    input  signed  [31:0] rs1_data,
    input  [31:0] rd_data,
    input  signed [31:0] rs2_data,
    input  [31:0] alu_rs2,
    input  [ 3:0] alu_ctl,
    input  [ 2:0] eq_ctl,
    input  [ 2:0] eq1_ctr,
    input  [ 2:0] eq2_ctr,
    input  [ 2:0] compare_ctl,
    input  [ 5:0] shamt_right,
    input  [ 5:0] shamt_left,
    input  [ 2:0] and1_ctl,
    input  [ 2:0] and2_ctl,
    output rd_wirte,
    output [31:0] alu_out
);
wire [31:0] Add ;
wire [31:0] Sub ;
wire [31:0] Neg ;
wire [31:0] And ;
wire [31:0] Or ;
wire [31:0] Xor ;
wire [31:0] pc_add;
wire [31:0] eq_rs1;
wire [31:0] eq_rs2;
wire Compare ;
wire Equal ;
wire unsigned [31:0] compare_rs1;
wire unsigned [31:0] compare_rs2;
wire [31:0] and_rs1;
wire [31:0] and_rs2;
wire [31:0] logic_left_shift;
wire  compare_sign;

wire signed [31:0] compare_sign_rs1;
wire signed [31:0] compare_sign_rs2;

assign compare_sign_rs1 =   (compare_ctl == `compare_ctl_blt)?rs1_data:
                            (compare_ctl == `compare_ctl_bge)?rs1_data:
                            (compare_ctl == `compare_ctl_slt)?rs1_data:32'b0;

assign compare_sign_rs2 =   (compare_ctl == `compare_ctl_blt)?rs2_data:
                            (compare_ctl == `compare_ctl_bge)?rs2_data:
                            (compare_ctl == `compare_ctl_slt)?rs2_data:32'b0;

assign compare_sign = (compare_sign_rs1 < compare_sign_rs2)? 1: 0;
assign compare_rs1 = (compare_ctl == `compare_ctl_bgeu)?$unsigned(rs1_data):
                     (compare_ctl == `compare_ctl_sltu)?$unsigned(alu_rs1):
                     (compare_ctl == `compare_ctl_sltiu)?$unsigned(alu_rs1):
                     (compare_ctl == `compare_ctl_bltu)?$unsigned(rs1_data):32'b0;

assign compare_rs2 = (compare_ctl == `compare_ctl_bgeu)?$unsigned(rs2_data):
                     (compare_ctl == `compare_ctl_sltu)?$unsigned(alu_rs2):
                     (compare_ctl == `compare_ctl_sltiu)?$unsigned(alu_rs2):
                     (compare_ctl == `compare_ctl_bltu)?$unsigned(rs2_data):32'b0;

assign and_rs1     = (and1_ctl == `rs1)?rs1_data : rs1_data;
assign and_rs2     = (and2_ctl == `imm)?imm : rs2_data;

assign eq_rs1 = (eq1_ctr == `RS_OUT)?rs1_data:rs1_data;
assign eq_rs2 = (eq2_ctr == `RS_OUT)?rs2_data:rs2_data;
assign pc_add = pc + 4 ;
assign Add = alu_rs1 + alu_rs2 ;
assign Sub = alu_rs1 - alu_rs2 ;
assign Neg = ~alu_rs1 ;
assign And = and_rs1 & and_rs2 ;
assign Or = alu_rs1 | alu_rs2 ;
assign Xor = alu_rs1 ^ alu_rs2 ;
assign Compare = (compare_rs1 < compare_rs2)? 1'b1 : 1'b0 ;
assign Equal =  (Equal_ctl == 1'b1)?
                    ((eq_rs1 == eq_rs2)?1'b1:1'b0):1'b0;

wire [31:0]tx;
assign tx ={imm[31:12],{12{1'b0}}};
wire [31:0] shamt_srai;
assign shamt_srai =rs1_data >>> shamt_right;
wire [31:0] shamt_sra;
assign shamt_sra =rs1_data >>> rs2_data;

assign alu_out =    (alu_ctl == `XOR)? Xor :
                    (alu_ctl == `LEFT_SHIFT)?
                        ((shamt_ctl == `shamt_srai)?(rs1_data >> shamt_right):
                        (shamt_ctl == `shamt_lui)?({imm[31:12],{12{1'b0}}}):
                        (shamt_ctl == `shamt_sll)?(rs1_data <<rs2_data):
                        (shamt_ctl == `shamt_rs2)?(rs1_data <<rs2_data[4:0]):
                        ((shamt_ctl == `shamt_common)?(rs1_data <<shamt_left):(rs1_data<<shamt_left)))://(rs1_data<<shamt_left):
                    (alu_ctl == `RIGHT_SHIFT)?
                        ((shamt_ctl == `shamt_srai)?(shamt_srai):
                         (shamt_ctl == `shamt_sra)?(shamt_sra):
                         (shamt_ctl == `shamt_srl)?(rs1_data >> rs2_data):(rs1_data >> shamt_right)) : 
                      //  (rs1_data >> shamt_right) :       
                    (alu_ctl == `EQUAL)?
                        ((eq_ctl == `eq_beq)?
                            ((Equal == 1'b1)? Add : (pc+4)):
                        (eq_ctl == `eq_bne)?
                            ((Equal == 1'b0)? Add : (pc+4)):pc+4
                        ):
                    (alu_ctl == `AND)? And ://32'b0:
                    (alu_ctl == `ADD)? Add :
                    (alu_ctl == `SUB)? Sub : 
                    (alu_ctl == `NEG)? Neg :   
                    (alu_ctl == `AND)? And :
                    (alu_ctl == `OR)? Or :
                    (alu_ctl == `XOR)? Xor :
                    (alu_ctl ==`COMPARE)?
                        (compare_ctl == `compare_ctl_bge)?
                            ((compare_sign != 1)? (pc+imm): pc+4):
                        (compare_ctl == `compare_ctl_blt)?
                            ((compare_sign == 1)? (pc+imm): pc+4):
                        (compare_ctl == `compare_ctl_slt)?
                            ((compare_sign == 1)?1:0):
                        (compare_ctl == `compare_ctl_bgeu)?
                            ((Compare != 1)?pc+imm:pc+4):
                        (compare_ctl == `compare_ctl_sltu)?
                            ((Compare == 1)? 1:   0):
                        ((compare_ctl == `compare_ctl_sltiu)?
                            ((Compare == 1)? 1:   0):
                        ((compare_ctl == `compare_ctl_bltu)?
                            ((Compare == 1)?(pc+imm):pc+4):pc+4)):32'b0;



endmodule

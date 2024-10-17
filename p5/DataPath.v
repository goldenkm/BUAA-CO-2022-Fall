`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:38 10/28/2022 
// Design Name: 
// Module Name:    DataPath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DataPath(
    input clk,
    input reset,
	 input [1:0] Jump,
	 input Branch,
	 input [2:0] Branch_sel,
	 input [1:0] MemtoReg,
	 input MemWrite,
	 input [3:0] ALUOp,
	 input [2:0] DMOp,
	 input ALUSrc,
	 input RegWrite,
	 input [1:0] ExtOp,
	 input [1:0] RegDst,
	 input Stall,
	 input [2:0] Tnew_D,
	 input [1:0] MF_V1_D_Sel,
	 input [1:0] MF_V2_D_Sel,
	 input [1:0] MF_V1_E_Sel,
	 input [1:0] MF_V2_E_Sel,
	 input MF_V2_M_Sel,
    output [5:0] Op,
    output [5:0] Funct,
	 output [4:0] D_A1,
    output [4:0] D_A2,
    output [4:0] E_A1,
    output [4:0] E_A2,
    output [4:0] M_A2,
    output [4:0] E_WR,
    output [4:0] M_WR,
    output [4:0] W_WR,
    output [2:0] Tnew_E,
    output [2:0] Tnew_M,
    output [2:0] Tnew_W,
	 output RegWrite_E,
	 output RegWrite_M,
	 output RegWrite_W,
	 output check_E,
	 output check_M
    );
	/************************Stage_F*************************/
	wire [31:0] in_pc;
	wire [31:0] F_pc;
	wire en = ~Stall;
	PC pc (
		.in_pc(in_pc),
		.clk(clk),
		.reset(reset),
		.en(en),
		.out_pc(F_pc)
	);
	wire [31:0] F_instr;
	IM im (
		.F_pc(F_pc),
		.F_instr(F_instr)
	);
	wire [31:0] D_instr;
	wire [31:0] D_pc;
	wire D_reg_clr = 0;//(Branch_sel == 3'b011) & !bgezall & !Stall;				//NulllifyCurrentInstruction
	IF_ID_Reg IF_ID(
		.clk(clk),
		.reset(reset),
		.en(en),					
		.D_reg_clr(D_reg_clr),
		.F_instr(F_instr),
		.F_pc(F_pc),
		.D_instr(D_instr),
		.D_pc(D_pc)
	);
	/************************Stage_D*************************/
	wire [5:0] op;
	wire [4:0] rs;
	wire [4:0] rt;
   wire [4:0] rd;
   wire [4:0] shamt;
   wire [15:0] imm16;
   wire [5:0] funct;
	wire [25:0] addr26;
	Splitter splitter(
		.Instr(D_instr),
		.op(op),
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.shamt(shamt),
		.imm16(imm16),
		.funct(funct),
		.addr26(addr26)
	);
	assign Op = op;
	assign Funct = funct;
	assign D_A1 = rs;
	assign D_A2 = rt;
	wire [4:0] reg31 = 5'b11111;
	wire [4:0] D_WR, D_WR_tmp;
	MUX3_5bits mux_RegDst(
		.in_a(rt),
		.in_b(rd),
		.in_c(reg31),
		.slt(RegDst),
		.out(D_WR)
	);
	//assign D_WR = (Branch_sel == 3'b100 && !bpnal) ? 5'b0 : D_WR_tmp;
	wire [31:0] D_RD1;
	wire [31:0] D_RD2;
	wire [31:0] W_WD;
	wire [31:0] W_pc;
	wire RegWrite_D = RegWrite;
	RF rf (
		.clk(clk),
		.reset(reset),
		.pc(W_pc),
		.rs(rs),
		.rt(rt),
		.write_reg(W_WR),
		.write_data(W_WD),
		.RegWrite(RegWrite_W),
		.read_data1(D_RD1),
		.read_data2(D_RD2)
	);
	wire [31:0] D_V1;
	wire [31:0] D_V2;
	wire [31:0] M_WD;
	wire [31:0] E_pc_add_8;
	MUX4_32bits FMux_V1_D(
		.in_a(D_RD1),
		.in_b(E_pc_add_8),
		.in_c(M_WD),
		.in_d(W_WD),
		.slt(MF_V1_D_Sel),
		.out(D_V1)
	);
	MUX4_32bits FMux_V2_D(
		.in_a(D_RD2),
		.in_b(E_pc_add_8),
		.in_c(M_WD),
		.in_d(W_WD),
		.slt(MF_V2_D_Sel),
		.out(D_V2)
	);
	wire zero;
	CMP cmp(
		.RD1(D_V1),
		.RD2(D_V2),
		.zero(zero),
		.bpnal(bpnal)
	);
	wire [31:0] D_imm32;
	Ext ext (
		.imm16(imm16),
		.ExtOp(ExtOp),
		.imm32(D_imm32)
	);
	assign branch1 = ((Branch_sel == 3'b001 && zero == 1) || (Branch_sel == 3'b010 && zero == 0) ||
								(Branch_sel == 3'b100 && bpnal)) ? 1 : 0;
	wire [31:0] pc_next;
	nPC next_pc (
		.F_pc(F_pc),
		.D_pc(D_pc),
		.address26(addr26),
		.imm16(imm16),
		.reg31_data(D_V1),
		.branch(branch1),
		.jump(Jump),
		.pc_next(pc_next)
	);
	assign in_pc = pc_next;
	wire [31:0] D_pc_add_8 = D_pc + 32'd8;
	wire [4:0] D_shamt = shamt;
	wire clr = Stall;
	wire [31:0] E_V1;
	wire [31:0] E_V2;
	wire [31:0] E_pc;
	wire [4:0] E_shamt;
	wire [31:0] E_imm32;
	wire ALUSrc_D = ALUSrc;
	wire [3:0] ALUOp_D = ALUOp;
	wire MemWrite_D = MemWrite;
	wire [1:0] MemtoReg_D = MemtoReg;
	wire [1:0] M_WD_Sel_D = Jump || (Branch_sel == 3'b100);
	wire [2:0] DMOp_D = DMOp;
	wire [1:0] RegDst_D = RegDst;
	wire [4:0] E_WR_tmp;
	wire ALUSrc_E;
	wire [3:0] ALUOp_E;
	wire [2:0] DMOp_E;
	wire [1:0] RegDst_E;
	wire MemWrite_E;
	wire [1:0] MemtoReg_E;
	wire [1:0] M_WD_Sel_E;
	wire D_bpnal = bpnal;
	wire E_bpnal;
	ID_EX_Reg ID_EX(
		.clk(clk),
		.reset(reset),
		.clr(clr),
		.D_A1(D_A1),
		.D_A2(D_A2),
		.D_WR(D_WR),
		.D_V1(D_V1),
		.D_V2(D_V2),
		.D_pc(D_pc),
		.D_pc_add_8(D_pc_add_8),
		.D_shamt(D_shamt),
		.D_imm32(D_imm32),
		.RegWrite_D(RegWrite_D),
		.ALUSrc_D(ALUSrc_D),
		.ALUOp_D(ALUOp_D),
		.DMOp_D(DMOp_D),
		.RegDst_D(RegDst_D),
		.MemWrite_D(MemWrite_D),
		.MemtoReg_D(MemtoReg_D),
		.M_WD_Sel_D(M_WD_Sel_D),
		.Tnew_D(Tnew_D),
		.D_bpnal(D_bpnal),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.E_WR(E_WR_tmp),
		.E_V1(E_V1),
		.E_V2(E_V2),
		.E_pc(E_pc),
		.E_pc_add_8(E_pc_add_8),
		.E_shamt(E_shamt),
		.E_imm32(E_imm32),
		.RegWrite_E(RegWrite_E),
		.ALUSrc_E(ALUSrc_E),
		.ALUOp_E(ALUOp_E),
		.DMOp_E(DMOp_E),
		.RegDst_E(RegDst_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E),
		.E_bpnal(E_bpnal)
	);
	/************************Stage_E*************************/
	wire [31:0] alu_in_a;
	MUX3_32bits FMux_V1_E(
		.in_a(E_V1),
		.in_b(M_WD),
		.in_c(W_WD),
		.slt(MF_V1_E_Sel),
		.out(alu_in_a)
	);
	wire [31:0] alu_in_b_tmp;
	MUX3_32bits FMux_V2_E(
		.in_a(E_V2),
		.in_b(M_WD),
		.in_c(W_WD),
		.slt(MF_V2_E_Sel),
		.out(alu_in_b_tmp)
	);
	wire [31:0] alu_in_b;
	MUX2_32bits mux_ALUSrc (
		.in_a(alu_in_b_tmp),
		.in_b(E_imm32),
		.slt(ALUSrc_E),
		.out(alu_in_b)
	);
	wire [15:0] E_imm16 = E_imm32[15:0];
	wire [31:0] E_AO;
	ALU alu (
		.in_a(alu_in_a),
		.in_b(alu_in_b),
		.imm16(E_imm16),
		.shamt(E_shamt),
		.ALUOp(ALUOp_E),
		.result(E_AO)
	);
	assign check_E = (DMOp_E == 3'b111);
	assign E_WR = (RegDst_E == 2'b11 && E_bpnal) ? 5'd31 :
						(RegDst_E == 2'b11 && !E_bpnal) ? 5'd0 :
						E_WR_tmp;
	wire [31:0] M_V2;
	wire [31:0] M_AO;
	wire [31:0] M_pc_add_8;
	wire [31:0] M_pc;
	wire MemWrite_M;
	wire [1:0] MemtoReg_M;
	wire [2:0] DMOp_M;
	wire [1:0] M_WD_Sel_M;
	EX_MEM_Reg EX_MEM(
		.clk(clk),
		.reset(reset),
		.E_A2(E_A2),
		.E_WR(E_WR),
		.E_V2(alu_in_b_tmp),
		.E_AO(E_AO),
		.E_pc_add_8(E_pc_add_8),
		.E_pc(E_pc),
		.RegWrite_E(RegWrite_E),
		.MemWrite_E(MemWrite_E),
		.MemtoReg_E(MemtoReg_E),
		.DMOp_E(DMOp_E),
		.M_WD_Sel_E(M_WD_Sel_E),
		.Tnew_E(Tnew_E),
		.M_A2(M_A2),
		.M_WR(M_WR),
		.M_V2(M_V2),
		.M_AO(M_AO),
		.M_pc_add_8(M_pc_add_8),
		.M_pc(M_pc),
		.RegWrite_M(RegWrite_M),
		.MemWrite_M(MemWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.DMOp_M(DMOp_M),
		.M_WD_Sel_M(M_WD_Sel_M),
		.Tnew_M(Tnew_M)
	);
	/************************Stage_M*************************/
	assign M_WD = (M_WD_Sel_M == 2'b01) ? M_pc_add_8 : M_AO;
	wire [31:0] WD_tmp;
	MUX2_32bits FMux_V2_M (
		.in_a(M_V2),
		.in_b(W_WD),
		.slt(MF_V2_M_Sel),
		.out(WD_tmp)
	);
	wire [31:0] M_DR;
	wire M_DM_flag;
	DM dm (
		.DMOp(DMOp_M),
		.addr(M_AO),
		.write_data(WD_tmp),
		.pc(M_pc),
		.clk(clk),
		.MemWrite(MemWrite_M),
		.reset(reset),
		.DR(M_DR),
		.DM_flag(M_DM_flag)
	);
	//assign M= (DMOp_M == 3'b111) ? (M_DM_flag ? M_WR : 5'd31) : M_WR;
	//assign M_WR_new = (DMOp_M == 3'b111) ? M_DR[4:0] : M_WR;		//取dm结果低五位作为寄存器编号
	assign check_M = (DMOp_M == 3'b111);
	wire [31:0] W_DR;
	wire [31:0] W_pc_add_8;
	wire [31:0] W_AO;
	wire [1:0] MemtoReg_W;
	wire [2:0] DMOp_W;
	MEM_WB_Reg MEM_WB(
		.clk(clk),
		.reset(reset),
		.M_WR(M_WR),
		.M_DR(M_DR),
		.M_pc(M_pc),
		.M_pc_add_8(M_pc_add_8),
		.M_AO(M_AO),
		.M_DM_flag(M_DM_flag),
		.RegWrite_M(RegWrite_M),
		.MemtoReg_M(MemtoReg_M),
		.DMOp_M(DMOp_M),
		.Tnew_M(Tnew_M),
		.W_WR(W_WR),
		.W_DR(W_DR),
		.W_pc(W_pc),
		.W_pc_add_8(W_pc_add_8),
		.W_AO(W_AO),
		.W_DM_flag(W_DM_flag),
		.RegWrite_W(RegWrite_W),
		.MemtoReg_W(MemtoReg_W),
		.DMOp_W(DMOp_W),
		.Tnew_W(Tnew_W)
	);
	/************************Stage_W*************************/
	wire [31:0] W_WD_tmp;
	MUX3_32bits mux_MemtoReg (
		.in_a(W_AO),
		.in_b(W_DR),
		.in_c(W_pc_add_8),
		.slt(MemtoReg_W),
		.out(W_WD_tmp)
	);
	assign W_WD = (DMOp_W == 3'b111 && !W_DM_flag) ? W_pc_add_8 : W_WD_tmp;
	
endmodule

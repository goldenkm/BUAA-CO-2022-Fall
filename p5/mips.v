`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:59 10/25/2022 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	wire [5:0] op;
   wire [5:0] funct;
   wire [1:0] jump;
   wire branch;
	wire [2:0] branch_sel;
   wire [1:0] MemtoReg;
   wire MemWrite;
   wire [3:0] ALUOp;
	wire [2:0] DMOp;
   wire ALUSrc;
   wire RegWrite;
   wire [1:0] ExtOp;
   wire [1:0] RegDst;
	wire [2:0] Tuse_rs;
	wire [2:0] Tuse_rt;
	wire [2:0] Tnew_D;
	wire [2:0] Tnew_E;
	wire [2:0] Tnew_M;
	wire [2:0] Tnew_W;
	wire [4:0] D_A1;
	wire [4:0] D_A2;
	wire [4:0] E_A1;
	wire [4:0] E_A2;
	wire [4:0] M_A2;
	wire [4:0] E_WR;
	wire [4:0] M_WR;
	wire [4:0] W_WR;
	wire [1:0] MF_V1_D_Sel;
	wire [1:0] MF_V2_D_Sel;
	wire [1:0] MF_V1_E_Sel;
	wire [1:0] MF_V2_E_Sel;
	wire MF_V2_M_Sel;
	wire check_E, check_M;
	Control CU (
		.op(op),
		.funct(funct),
		.jump(jump),
		.branch(branch),
		.branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.DMOp(DMOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.Tuse_rs(Tuse_rs),
		.Tuse_rt(Tuse_rt),
		.Tnew_D(Tnew_D)
	);
	HazardControl HCU (
		.D_A1(D_A1),
		.D_A2(D_A2),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.M_A2(M_A2),
		.E_WR(E_WR),
		.M_WR(M_WR),
		.W_WR(W_WR),
		.Tuse_rs(Tuse_rs),
		.Tuse_rt(Tuse_rt),
		.Tnew_E(Tnew_E),
		.Tnew_M(Tnew_M),
		.Tnew_W(Tnew_W),
		.RegWrite_E(RegWrite_E),
		.RegWrite_M(RegWrite_M),
		.RegWrite_W(RegWrite_W),
		.check_E(check_E),
		.check_M(check_M),
		.Stall(Stall),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel)
	);
	DataPath datapath (
		.clk(clk),
		.reset(reset),
		.Jump(jump),
		.Branch(branch),
		.Branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.DMOp(DMOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.Stall(Stall),
		.Tnew_D(Tnew_D),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel),
		.Op(op),
		.Funct(funct),
		.D_A1(D_A1),
		.D_A2(D_A2),
		.E_A1(E_A1),
		.E_A2(E_A2),
		.M_A2(M_A2),
		.E_WR(E_WR),
		.M_WR(M_WR),
		.W_WR(W_WR),
		.Tnew_E(Tnew_E),
		.Tnew_M(Tnew_M),
		.Tnew_W(Tnew_W),
		.RegWrite_E(RegWrite_E),
		.RegWrite_M(RegWrite_M),
		.RegWrite_W(RegWrite_W),
		.check_E(check_E),
		.check_M(check_M)
	);
		
endmodule






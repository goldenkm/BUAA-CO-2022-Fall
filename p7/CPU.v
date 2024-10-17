`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:15 11/23/2022 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	 input clk,
	 input reset,
    output [31:0] i_inst_addr,
    input [31:0] i_inst_rdata,
	 input [31:0] CPUIn,
	 input [5:0] HWInt,
	 output [31:0] VAdd,
	 output [31:0] CPUOut,
	 output [3:0] ByteEn,
	 output IntReq,			//?
	 output [31:0] m_inst_addr,
	 output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
	 output [31:0] macro_pc
    );
	wire [31:0] instr;
   wire [1:0] jump;
   wire branch;
	wire [1:0] branch_sel;
   wire [2:0] MemtoReg;
   wire MemWrite;
   wire [3:0] ALUOp;
   wire ALUSrc;
   wire RegWrite;
   wire [1:0] ExtOp;
   wire [1:0] RegDst;
	wire [2:0] ByteOp;
	wire [3:0] MDUOp;
	wire start;
	wire MDU_busy;
	wire [2:0] Tuse_rs, Tuse_rt;
	wire [2:0] Tnew_D, Tnew_E, Tnew_M, Tnew_W;
	wire [4:0] D_A1, D_A2, E_A1, E_A2, M_A2;
	wire [4:0] E_WR, M_WR, W_WR;
	wire [1:0] MF_V1_D_Sel, MF_V2_D_Sel, MF_V1_E_Sel, MF_V2_E_Sel, M_WD_Sel;
	wire MF_V2_M_Sel;
	wire RI, isEret, isBorJ, CP0_en, isSyscall;
	wire [4:0] ExcCode;
	wire D_eret, e_mtc0, M_mtc0;
	wire [4:0] E_rd, M_rd;
	Control CU (
		////////input////////
		.instr(instr),
		////////output////////
		.jump(jump),
		.branch(branch),
		.branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.ByteOp(ByteOp),
		.MDUOp(MDUOp),
		.M_WD_Sel(M_WD_Sel),
		.start(start),
		.Tuse_rs(Tuse_rs),
		.Tuse_rt(Tuse_rt),
		.Tnew_D(Tnew_D),
		.CP0_en(CP0_en),
		.RI(RI),
		.isEret(isEret),
		.isBorJ(isBorJ),
		.isSyscall(isSyscall)
	);
	HazardControl HCU (
	////////input///////
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
		.MDU_busy(MDU_busy),
		.D_eret(D_EXLClr),
		.E_mtc0(E_CP0_en),
		.E_rd(E_rd),
		.M_mtc0(M_CP0_en),
		.M_rd(M_rd),
		////////output////////
		.Stall(Stall),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel)
	);
	DataPath datapath (
		////////input///////
		.clk(clk),
		.reset(reset),
		.HWInt(HWInt),
		.i_inst_rdata(i_inst_rdata),
		.CPUIn(CPUIn),		//p7
		.Jump(jump),
		.Branch(branch),
		.Branch_sel(branch_sel),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.ByteOp(ByteOp),
		.MDUOp(MDUOp),
		.M_WD_Sel(M_WD_Sel),
		.Start(start),
		.Stall(Stall),
		.Tnew_D(Tnew_D),
		.MF_V1_D_Sel(MF_V1_D_Sel),
		.MF_V2_D_Sel(MF_V2_D_Sel),
		.MF_V1_E_Sel(MF_V1_E_Sel),
		.MF_V2_E_Sel(MF_V2_E_Sel),
		.MF_V2_M_Sel(MF_V2_M_Sel),
		.RI(RI),
		.isEret(isEret),
		.isBorJ(isBorJ),
		.CP0_en(CP0_en),
		.isSyscall(isSyscall),
		////////output////////
		.Instr(instr),
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
		.MDU_busy(MDU_busy),
		.i_inst_addr(i_inst_addr),
		.VAdd(VAdd),	//p7
		.ByteEn(ByteEn),		//p7
		.CPUOut(CPUOut),		//p7
		.m_inst_addr(m_inst_addr),			//M_pc
		.w_grf_we(w_grf_we),
		.w_grf_addr(w_grf_addr),
		.w_grf_wdata(w_grf_wdata),
		.w_inst_addr(w_inst_addr),
		.ExcCode(ExcCode),
		.macro_pc(macro_pc),
		.D_isEret(D_eret),
		.E_CP0_en(E_mtc0),
		.E_rd(E_rd),
		.M_CP0_en(M_mtc0),
		.M_rd(M_rd)
	);


endmodule

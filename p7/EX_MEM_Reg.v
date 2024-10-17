`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:18 11/03/2022 
// Design Name: 
// Module Name:    EX_MEM_Reg 
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
module EX_MEM_Reg(
    input clk,
    input reset,
	 input req,
	 input [31:0] EPC,
	 input [31:0] EBase,
	 input [4:0] E_A2,
	 input [4:0] E_rd,
    input [4:0] E_WR,
    input [31:0] E_V2,
    input [31:0] E_AO,
	 input [31:0] E_MDU_out,
    input [31:0] E_pc_add_8,
    input [31:0] E_pc,
	 input RegWrite_E,
	 input MemWrite_E,
	 input [2:0] MemtoReg_E,
	 input [2:0] ByteOp_E,
	 input [1:0] M_WD_Sel_E,
	 input [2:0] Tnew_E,
	 input E_AdEL,
	 input E_Ov,
	 input E_RI,
	 input E_isEret,
	 input E_BDIn,
	 input E_isSyscall,
	 input E_CP0_en,
	 output [4:0] M_A2,
	 input [4:0] M_rd,
    output [4:0] M_WR,
    output [31:0] M_V2,
    output [31:0] M_AO,
	 output [31:0] M_MDU_out,
    output [31:0] M_pc_add_8,
	 output [31:0] M_pc,
	 output RegWrite_M,
	 output MemWrite_M,
	 output [2:0] MemtoReg_M,
	 output [2:0] ByteOp_M,
	 output [1:0] M_WD_Sel_M,
	 output [2:0] Tnew_M,
	 output M_AdEL,
	 output M_Ov,
	 output M_RI,
	 output M_isEret,
	 output M_BDIn,
	 output M_isSyscall,
	 output M_CP0_en
    );
	 reg [4:0] a2;
	 reg [4:0] rd;
	 reg [4:0] wr;
	 reg [31:0] v2;
	 reg [31:0] ao;
	 reg [31:0] mdu_out;
	 reg [31:0] pc_add_8;
	 reg [31:0] pc;
	 reg [31:0] RegWrite;
	 reg MemWrite;
	 reg [2:0] MemtoReg;
	 reg [2:0] ByteOp;
	 reg [2:0] Tnew;
	 reg [1:0] M_WD_Sel;
	 reg AdEL, RI, Ov, isEret, BDIn, CP0_en, isSyscall;
	 always @(posedge clk) begin 
		if (reset) begin
			pc <= 32'h0000_3000;
			a2 <= 0;
			rd <= 0;
			wr <= 0;
			v2 <= 0;
			ao <= 0;
			mdu_out <= 0;
			pc_add_8 <= 32'h0000_3008;
			RegWrite <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			Tnew <= 0;
			M_WD_Sel <= 0;
			ByteOp <= 0;
			AdEL <= 0;
			RI <= 0;
			Ov <= 0;
			isEret <= 0;
			BDIn <= 0;
			isSyscall <= 0;
			CP0_en <= 0;
		end
		else if (req) begin
			pc <= EBase;
			a2 <= 0;
			rd <= 0;
			wr <= 0;
			v2 <= 0;
			ao <= 0;
			mdu_out <= 0;
			pc_add_8 <= EBase + 8;
			RegWrite <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			Tnew <= 0;
			M_WD_Sel <= 0;
			ByteOp <= 0;
			AdEL <= 0;
			RI <= 0;
			Ov <= 0;
			isEret <= 0;
			BDIn <= 0;
			isSyscall <= 0;
			CP0_en <= 0;
		end
		else if (M_isEret) begin
			pc <= EPC;
			a2 <= 0;
			rd <= 0;
			wr <= 0;
			v2 <= 0;
			ao <= 0;
			mdu_out <= 0;
			pc_add_8 <= EPC + 32'd8;
			RegWrite <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			Tnew <= 0;
			M_WD_Sel <= 0;
			ByteOp <= 0;
			AdEL <= 0;
			RI <= 0;
			Ov <= 0;
			isEret <= 0;
			BDIn <= 0;
			isSyscall <= 0;
			CP0_en <= 0;
		end
		else begin
			pc <= E_pc;
			a2 <= E_A2;
			rd <= E_rd;
			wr <= E_WR;
			v2 <= E_V2;
			ao <= E_AO;
			mdu_out <= E_MDU_out;
			pc_add_8 <= E_pc_add_8;
			RegWrite <= RegWrite_E;
			MemWrite <= MemWrite_E;
			MemtoReg <= MemtoReg_E;
			ByteOp <= ByteOp_E;
			Tnew <= Tnew_E;
			M_WD_Sel <= M_WD_Sel_E;
			AdEL <= E_AdEL;
			RI <= E_RI;
			Ov <= E_Ov;
			isEret <= E_isEret;
			BDIn <= E_BDIn;
			isSyscall <= E_isSyscall;
			CP0_en <= E_CP0_en;
		end
	 end
	 assign M_A2 = a2;
	 assign M_rd = rd;
	 assign M_WR = wr;
	 assign M_V2 = v2;
	 assign M_AO = ao;
	 assign M_MDU_out = mdu_out;
	 assign M_pc = pc;
	 assign M_pc_add_8 = pc_add_8;
	 assign RegWrite_M = RegWrite;
	 assign MemWrite_M = MemWrite;
	 assign MemtoReg_M = MemtoReg;
	 assign ByteOp_M = ByteOp;
	 assign Tnew_M = (Tnew >= 1) ? (Tnew - 1): 0;
	 assign M_WD_Sel_M = M_WD_Sel;
	 assign M_AdEL = AdEL;
	 assign M_RI = RI;
	 assign M_Ov = Ov;
	 assign M_isEret = isEret;
	 assign M_BDIn = BDIn;
	 assign M_isSyscall = isSyscall;
	 assign M_CP0_en = CP0_en;

endmodule

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
	 input [4:0] E_A2,
    input [4:0] E_WR,
    input [31:0] E_V2,
    input [31:0] E_AO,
	 input [31:0] E_MDU_out,
    input [31:0] E_pc_add_8,
    input [31:0] E_pc,
	 input RegWrite_E,
	 input MemWrite_E,
	 input [1:0] MemtoReg_E,
	 input [2:0] ByteOp_E,
	 input [1:0] M_WD_Sel_E,
	 input [2:0] Tnew_E,
	 output [4:0] M_A2,
    output [4:0] M_WR,
    output [31:0] M_V2,
    output [31:0] M_AO,
	 output [31:0] M_MDU_out,
    output [31:0] M_pc_add_8,
	 output [31:0] M_pc,
	 output RegWrite_M,
	 output MemWrite_M,
	 output [1:0] MemtoReg_M,
	 output [2:0] ByteOp_M,
	 output [1:0] M_WD_Sel_M,
	 output [2:0] Tnew_M
    );
	 reg [4:0] a2;
	 reg [4:0] wr;
	 reg [31:0] v2;
	 reg [31:0] ao;
	 reg [31:0] mdu_out;
	 reg [31:0] pc_add_8;
	 reg [31:0] pc;
	 reg [31:0] RegWrite;
	 reg MemWrite;
	 reg [1:0] MemtoReg;
	 reg [2:0] ByteOp;
	 reg [2:0] Tnew;
	 reg [1:0] M_WD_Sel;
	 always @(posedge clk) begin 
		if (reset == 1) begin
			pc <= 32'h00003000;
			a2 <= 0;
			wr <= 0;
			v2 <= 0;
			ao <= 0;
			mdu_out <= 0;
			pc_add_8 <= 32'h00003000;
			RegWrite <= 0;
			MemWrite <= 0;
			MemtoReg <= 0;
			Tnew <= 0;
			M_WD_Sel <= 0;
			ByteOp <= 0;
		end
		else begin
			pc <= E_pc;
			a2 <= E_A2;
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
		end
	 end
	 assign M_A2 = a2;
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

endmodule

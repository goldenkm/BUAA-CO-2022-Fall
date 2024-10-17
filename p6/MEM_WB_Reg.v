`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:56:33 11/03/2022 
// Design Name: 
// Module Name:    MEM_WB_Reg 
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
module MEM_WB_Reg(
	 input clk,
	 input reset,
    input [4:0] M_WR,
    input [31:0] M_DR,
	 input [31:0] M_pc,
    input [31:0] M_pc_add_8,
    input [31:0] M_AO,
	 input [31:0] M_MDU_out,
	 input RegWrite_M,
	 input [1:0] MemtoReg_M,
	 input [2:0] Tnew_M,
    output [4:0] W_WR,
    output [31:0] W_DR,
	 output [31:0] W_pc,
    output [31:0] W_pc_add_8,
    output [31:0] W_AO,
	 output [31:0] W_MDU_out,
	 output RegWrite_W,
	 output [1:0] MemtoReg_W,
	 output [2:0] Tnew_W
    );
	 reg [4:0] wr;
	 reg [31:0] dr;
	 reg [31:0] ao;
	 reg [31:0] mdu_out;
	 reg [31:0] pc;
	 reg [31:0] pc_add_8;
	 reg RegWrite;
	 reg [1:0] MemtoReg;
	 reg [2:0] Tnew;
	 always @(posedge clk) begin 
		if (reset == 1) begin
			wr <= 0;
			dr <= 0;
			ao <= 0;
			mdu_out <= 0;
			pc <= 32'h00003000;
			pc_add_8 <= 32'h00003008;
			RegWrite <= 0;
			MemtoReg <= 0;
			Tnew <= 0;
		end
		else begin
			wr <= M_WR;
			dr <= M_DR;
			ao <= M_AO;
			mdu_out <= M_MDU_out;
			pc <= M_pc;
			pc_add_8 <= M_pc_add_8;
			RegWrite <= RegWrite_M;
			MemtoReg <= MemtoReg_M;
			Tnew <= Tnew_M;
		end
	 end
	 assign W_WR = wr;
	 assign W_DR = dr;
	 assign W_AO = ao;
	 assign W_MDU_out = mdu_out;
	 assign W_pc = pc;
	 assign W_pc_add_8 = pc_add_8;
	 assign RegWrite_W = RegWrite;
	 assign MemtoReg_W = MemtoReg;
	 assign Tnew_W = 0;

endmodule

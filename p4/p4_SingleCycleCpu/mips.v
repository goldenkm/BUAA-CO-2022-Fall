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
   wire [1:0] MemtoReg;
   wire MemWrite;
   wire [3:0] ALUOp;
   wire ALUSrc;
   wire RegWrite;
   wire [1:0] ExtOp;
   wire [1:0] RegDst;
	wire [1:0] DMOp;
	Control control (
		.op(op),
		.funct(funct),
		.jump(jump),
		.branch(branch),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.DMOp(DMOp)
	);
	DataPath datapath (
		.clk(clk),
		.reset(reset),
		.Jump(jump),
		.Branch(branch),
		.MemtoReg(MemtoReg),
		.MemWrite(MemWrite),
		.ALUOp(ALUOp),
		.ALUSrc(ALUSrc),
		.RegWrite(RegWrite),
		.ExtOp(ExtOp),
		.RegDst(RegDst),
		.DMOp(DMOp),
		.op(op),
		.funct(funct)
	);
		
endmodule






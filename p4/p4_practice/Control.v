`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:45 10/25/2022 
// Design Name: 
// Module Name:    Control 
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
////op
`define RInstr 6'b000000
`define Ori 6'b001101
`define Lw 6'b100011
`define Sw 6'b101011
`define Beq 6'b000100
`define Bne 6'b000101
`define Jal 6'b000011
`define Lui 6'b001111
`define Lb 6'b100000
`define Lh 6'b100001
`define Sb 6'b101000
`define Sh 6'b101001
////funct
`define Jr 6'b001000
`define Add 6'b100000
`define Sub 6'b100010
`define Sll 6'b000000
//nonexistent instruction
`define Rlb 6'b111111
`define Ssze 6'b001111
`define Bnezalc 6'b000001
`define Lboez 6'b111110
module Control(
    input [5:0] op,
	 input [5:0] funct,
    output [1:0] jump,
    output [1:0] branch_sel,
    output [1:0] MemtoReg,
    output MemWrite,
    output [3:0] ALUOp,
    output ALUSrc,
    output [1:0] RegWrite,
    output [1:0] ExtOp,
    output [1:0] RegDst,
	 output [2:0] DMOp
    );
	wire load = (op == `Lw || op == `Lb || op == `Lh || op == `Lboez);
	wire store = (op == `Sw || op == `Sb || op == `Sh);
	wire branch = (op == `Beq || op == `Bne || op == `Bnezalc);
	wire cal_r = (op == `RInstr && op != `Jr);
	wire rlb = (op == `Rlb);
	assign RegDst = (cal_r) ? 2'b01 : 
							(op == `Jal || op == `Bnezalc) ? 2'b10 : 
							2'b00;
	assign ALUSrc = (op == `Ori || load || store || op == `Lui) ? 1 : 0;
	assign MemtoReg = (load || store) ? 2'b01 : 
							(op == `Jal || op == `Bnezalc) ? 2'b10 :
							2'b00;
	assign RegWrite = (op == `Bnezalc) ? 2'b10 :
							(cal_r || op == `Ori || load
								|| op == `Lui || op == `Jal || op == `Rlb) ? 2'b01 : 
							0;
	assign MemWrite = (store) ? 1 : 0;
	assign branch_sel = (op == `Bnezalc) ? 2'b11 : 			//branch and link
							(op == `Bne) ? 2'b10 :					//just branch
							(op == `Beq) ? 2'b01 : 
							0;
	assign ExtOp = (load || store || branch) ? 2'b01 : 
						(op == `Lui) ? 2'b10 : 
						2'b00;
	assign jump = (op == `Jal) ? 2'b01 : 
						(op == `RInstr && funct == `Jr) ? 2'b10 :
						2'b0;
	assign ALUOp = (op == `RInstr && funct == 6'b100000) ? 4'b0010 :  //add
						(op == `RInstr && funct == 6'b100010) ? 4'b0011 :  //sub
						(op == `Ori) ? 4'b0001 :		//or
						(load || store) ? 4'b0010 : 	//add
						(branch) ? 4'b0011 :   //sub
						(op == `Lui) ? 4'b0010 :	//add
						(op == `RInstr && funct == `Sll) ? 4'b0100 :	//sll 
						(op == `Rlb) ? 4'b1111 : //rlb
						4'b0010;
	assign DMOp = (op == `Lboez) ? 3'b101 :
						(op == `Sh) ? 3'b100 : 
						(op == `Sb) ? 3'b011 :
						(op == `Lh) ? 3'b010 :
						(op == `Lb) ? 3'b001 : 
						3'b000;
						
endmodule

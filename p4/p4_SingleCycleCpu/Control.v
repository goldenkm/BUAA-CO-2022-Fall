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
`define RInstr 6'b000000
`define Ori 6'b001101
`define Lw 6'b100011
`define Sw 6'b101011
`define Beq 6'b000100
`define Jal 6'b000011
`define Lui 6'b001111
`define Sll 6'b000000
`define Xor 6'b100110
`define Lb 6'b100000
`define Sb 6'b101000

module Control(
    input [5:0] op,
	 input [5:0] funct,
    output [1:0] jump,
    output branch,
    output [1:0] MemtoReg,
    output MemWrite,
    output [3:0] ALUOp,
    output ALUSrc,
    output RegWrite,
    output [1:0] ExtOp,
    output [1:0] RegDst,
	 output [1:0] DMOp
    );
	assign RegDst = (op == `RInstr && funct != 6'b001000) ? 2'b01 : 
							(op == `Jal) ? 2'b10 : 
							2'b00;
	assign ALUSrc = (op == `Ori || op == `Lw || op == `Sw || op == `Lui || op == `Lb) ? 1 : 0;
	assign MemtoReg = (op == `Lw || op == `Lb) ? 2'b01 : 
							(op == `Jal) ? 2'b10 :
							2'b00;
	assign RegWrite = ((op == `RInstr && funct != 6'b001000) || op == `Ori || op == `Lw 
								|| op == `Lui || op == `Jal || op == `Xor || op == `Lb) ? 1 : 0;
	assign MemWrite = (op == `Sw) ? 1 : 0;
	assign branch = (op == `Beq) ? 1: 0;
	assign ExtOp = (op == `Lw || op == `Sw || op == `Beq || op == `Lb) ? 2'b01 : 
						(op == `Lui) ? 2'b10 : 
						2'b00;
	assign jump = (op == `Jal) ? 2'b01 : 
						(op == `RInstr && funct == 6'b001000) ? 2'b10 :
						2'b0;
	assign ALUOp = (op == `RInstr && funct == 6'b100000) ? 4'b0010 :  //add
						(op == `RInstr && funct == 6'b100010) ? 4'b0110 :  //sub
						(op == `Ori) ? 4'b0001 :		//or
						(op == `Lw || op == `Sw || op == `Lb) ? 4'b0010 : 	//add
						(op == `Beq) ? 4'b0110 :   //sub
						(op == `Lui) ? 4'b0010 :	//add
						(op == `RInstr && funct == `Sll) ? 4'b1111 :	//sll 
						(op == `RInstr && funct == `Xor) ? 4'b1110 : //xor
						4'b0010;
	assign DMOp = (op == `Sb) ? 2'b10 : 
						(op == `Lb) ? 2'b01 : 
						2'b00;
						
endmodule

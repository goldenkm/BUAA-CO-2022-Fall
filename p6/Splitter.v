`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:02 11/04/2022 
// Design Name: 
// Module Name:    Splitter 
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
module Splitter(
    input [31:0] Instr,
	 output [5:0] op,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] imm16,
    output [4:0] shamt,
    output [5:0] funct,
    output [25:0] addr26
    );
	assign op = Instr[31:26];
	assign rs = Instr[25:21];
	assign rt = Instr[20:16];
	assign rd = Instr[15:11];
	assign shamt = Instr[10:6];
	assign funct = Instr[5:0];
	assign imm16 = Instr[15:0];
	assign addr26 = Instr[25:0];

endmodule

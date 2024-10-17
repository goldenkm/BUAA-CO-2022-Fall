`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:24:53 10/26/2022 
// Design Name: 
// Module Name:    ALU 
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
`define Add 4'b0010
`define Sub 4'b0011
`define Or 4'b0001
`define And 4'b0000
`define Sll 4'b0100
`define Swc 4'b1111
module ALU(
    input [31:0] in_a,
    input [31:0] in_b,
	 input [15:0] imm16,
	 input [4:0] shamt,
    input [3:0] ALUOp,
    output [31:0] result
    );
	wire [31:0] swc_result;
	wire [31:0] rotate_left = (in_a << in_b[4:0]) | (in_a >> (5'd31 - in_b[4:0] + 5'd1));
	wire [31:0] rotate_right = (in_a >> in_b[4:0]) | (in_a << (5'd31 - in_b[4:0] + 5'd1));
	assign swc_result = (in_b[4:0] == 5'd0) ? in_a : ((in_b[0] == 1) ? rotate_left : rotate_right);
	assign result = (ALUOp == `Add) ? in_a+in_b :
							(ALUOp == `Sub) ? in_a-in_b :
							(ALUOp == `Or) ? in_a | in_b :
							(ALUOp == `And) ? in_a & in_b :
							(ALUOp == `Sll) ? in_b << shamt :
							(ALUOp == `Swc) ? swc_result :
							32'b0;

endmodule

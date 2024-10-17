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
`define Sub 4'b0110
`define Or 4'b0001
`define And 4'b0000
`define Sll 4'b1111
`define Xor 4'b1110

module ALU(
    input [31:0] in_a,
    input [31:0] in_b,
    input [3:0] ALUOp,
	 input [4:0] shamt,
    output [31:0] result,
    output zero
    );
	assign result = (ALUOp == `Add) ? in_a+in_b :
							(ALUOp == `Sub) ? in_a-in_b :
							(ALUOp == `Or) ? in_a | in_b :
							(ALUOp == `Sll) ? in_b << shamt :
							(ALUOp == `Xor) ? in_a ^ in_b :
							32'b0;
	assign zero = (result == 0) ? 1 : 0;

endmodule

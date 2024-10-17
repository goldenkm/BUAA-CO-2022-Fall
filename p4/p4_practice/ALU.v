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
`define Rlb 4'b1111
module ALU(
    input [31:0] in_a,
    input [31:0] in_b,
    input [3:0] ALUOp,
	 input [4:0] shamt,
	 input [15:0] imm16,
    output [31:0] result,
    output zero,
	 output bnezalc
    );
	integer i;
	reg [31:0] rlb_tmp;
	always @(*) begin
		rlb_tmp = in_a;
		if(imm16 == 0) begin
			rlb_tmp = in_a;
		end
		else begin
			for(i=0; i<imm16; i=i+1) begin
				rlb_tmp[i] = ~in_a[i];
			end
		end
	end
	assign result = (ALUOp == `Add) ? in_a+in_b :
							(ALUOp == `Sub) ? in_a-in_b :
							(ALUOp == `Or) ? in_a | in_b :
							(ALUOp == `Sll) ? in_b << shamt :
							(ALUOp == `Rlb) ? rlb_tmp :
							32'b0;
	assign zero = (in_a == in_b) ? 1 : 0;
	assign bnezalc = (in_a != 0) ? 1 : 0;

endmodule

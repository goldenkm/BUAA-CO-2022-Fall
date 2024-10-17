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
`define Slt 4'b0100
`define Sltu 4'b0101
module ALU(
    input [31:0] in_a,
    input [31:0] in_b,
    input [3:0] ALUOp,
    output [31:0] result
    );
	 wire [31:0] slt_out = ($signed(in_a) < $signed(in_b)) ? 32'd1 : 0;
	 wire [31:0] sltu_out = ({1'b0,in_a} < {1'b0,in_b}) ? 1 : 0;
	assign result = (ALUOp == `Add) ? in_a+in_b :
							(ALUOp == `Sub) ? in_a-in_b :
							(ALUOp == `Or) ? in_a | in_b :
							(ALUOp == `And) ? in_a & in_b :
							(ALUOp == `Slt) ? slt_out :
							(ALUOp == `Sltu) ? sltu_out :
							32'b0;

endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:58 10/26/2022 
// Design Name: 
// Module Name:    MUX2 
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
module MUX2_32bits(
    input [31:0] in_a,
    input [31:0] in_b,
    input slt,
    output [31:0] out
    );
	assign out = (slt == 1) ? in_b : in_a;
endmodule

module MUX3_5bits(
    input [4:0] in_a,
    input [4:0] in_b,
	 input [4:0] in_c,
    input [1:0] slt,
    output [4:0] out
    );
	assign out = (slt == 2'b01) ? in_b : 
						(slt == 2'b10) ? in_c :
						in_a;
endmodule

module MUX3_32bits(
    input [31:0] in_a,
    input [31:0] in_b,
	 input [31:0] in_c,
    input [1:0] slt,
    output [31:0] out
    );
	assign out = (slt == 2'b01) ? in_b : 
						(slt == 2'b10) ? in_c :
						in_a;
endmodule







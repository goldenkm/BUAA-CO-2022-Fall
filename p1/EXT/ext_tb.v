`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:40:03 10/05/2022
// Design Name:   ext
// Module Name:   /home/co-eda/ISE/p1/EXT/ext_tb.v
// Project Name:  EXT
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ext_tb;

	// Inputs
	reg [15:0] imm;
	reg [1:0] EOp;

	// Outputs
	wire [31:0] ext;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.EOp(EOp), 
		.ext(ext)
	);

	initial begin
		// Initialize Inputs
		imm = 16'b0000000000000001;
		EOp = 2'b00;
		#100
		imm = 16'b0000000000000001;
		EOp = 2'b10;
	end
      
endmodule


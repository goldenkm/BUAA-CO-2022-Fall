`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:45:12 11/20/2022
// Design Name:   Bit_Finder
// Module Name:   /home/co-eda/p4_practice/Bit_Finder_tb.v
// Project Name:  p4_practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Bit_Finder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Bit_Finder_tb;

	// Inputs
	reg [31:0] data;
	reg [1:0] type;

	// Outputs
	wire [5:0] result;

	// Instantiate the Unit Under Test (UUT)
	Bit_Finder uut (
		.data(data), 
		.type(type), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		data = 32'h0fff0010;
		type = 2'b00;
		#10
		type = 2'b01;
		#10
		type = 2'b10;
		#10
		type = 2'b11;
	end
      
endmodule


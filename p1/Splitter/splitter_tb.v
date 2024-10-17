`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:18:18 10/05/2022
// Design Name:   splitter
// Module Name:   /home/co-eda/ISE/Splitter/splitter_tb.v
// Project Name:  Splitter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: splitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module splitter_tb;

	// Inputs
	reg [31:0] A;

	// Outputs
	wire [7:0] O1;
	wire [7:0] O2;
	wire [7:0] O3;
	wire [7:0] O4;

	// Instantiate the Unit Under Test (UUT)
	splitter uut (
		.A(A), 
		.O1(O1), 
		.O2(O2), 
		.O3(O3), 
		.O4(O4)
	);

	initial begin
		// Initialize Inputs
		A = 32'b10000000010000000010000000010000;

	end
      
endmodule


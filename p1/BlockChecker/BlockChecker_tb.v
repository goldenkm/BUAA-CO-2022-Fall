`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:53:33 10/06/2022
// Design Name:   BlockChecker
// Module Name:   /home/co-eda/ISE/p1/BlockChecker/BlockChecker_tb.v
// Project Name:  BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BlockChecker_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;
	wire [31:0] count_end1;
	wire [31:0] count_begin1;
	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result),
		.count_end1(count_end1),
		.count_begin1(count_begin1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		/*#10
		in = "a";
		#10
		in = " ";
		#10
		in = "B";
		#10
		in = "E";
		#10
		in = "g";
		#10
		in = "i";
		#10
		in = "n";
		#10
		in = " ";
		#10
		in = "e";
		#10
		in = "N";
		#10
		in = "D";
		#10
		in = "c";
		#10
		in = " ";
		#10*/
		in = "e";
		#10
		in = "n";
		#10
		in = "d";
		#10
		in = " ";
		#10
		in = "b";
		#10
		in = "E";
		#10
		in = "g";
		#10
		in = "i";
		#10
		in = "n";
		#10
		in = " ";
		#10
		in = "e";
		#10
		in = "n";
		#10
		in = "d";
		#10
		in = " ";
		#10
		in = "e";
		#10
		in = "n";
		#10
		in = "d";
		#10
		in = "A";
		#10
		in = "d";
		#100
		reset = 1;
		in = 0;
	end
     always #5 clk=~clk; 
endmodule


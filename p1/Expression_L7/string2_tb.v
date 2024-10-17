`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:13:53 10/10/2022
// Design Name:   string2
// Module Name:   /home/co-eda/ISE/p1/Expression_L7/string2_tb.v
// Project Name:  Expression_L7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module string2_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;
	wire flag1;
	wire [2:0] status1;

	// Instantiate the Unit Under Test (UUT)
	string2 uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out),
		.flag1(flag1),
		.status1(status1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in="1";
		#10 in="+";
		#10 in="(";
		#10 in="1";
		#10 in="+";
		#10 in="2";
		#10 in=")";
		#10 in="*";
		#10 in="(";
		#10 in="3";
		#10 in="+";
		#10 in="2";
		#10 in=")";
		#10 in="2";
		#10 in="2";
		#100 clr = 1;
	end
     always #5 clk = ~clk;
endmodule


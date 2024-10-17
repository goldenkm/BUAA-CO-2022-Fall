`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:38:10 10/05/2022
// Design Name:   expr
// Module Name:   /home/co-eda/ISE/p1/Expr/expr_tb.v
// Project Name:  Expr
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: expr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module expr_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;
	wire out;
	wire [1:0] Status;
	// Instantiate the Unit Under Test (UUT)
	expr uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out),
		.Status(Status)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;
		#10
		in="1";
		#10
		in="+";
		#10
		in="2";
		#10
		in="3";
		#10
		in="*";
		#10
		in="5";
	end
	always #5 clk=~clk;
endmodule


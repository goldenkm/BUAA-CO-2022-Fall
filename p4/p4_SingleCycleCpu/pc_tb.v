`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:29:46 10/26/2022
// Design Name:   PC
// Module Name:   /home/co-eda/p4_SingleCycleCpu/pc_tb.v
// Project Name:  p4_SingleCycleCpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pc_tb;

	// Inputs
	reg [31:0] in_pc;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] out_pc;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.in_pc(in_pc), 
		.clk(clk), 
		.reset(reset), 
		.out_pc(out_pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		#100;
      reset=0;

	end
      always #5 clk=~clk;
endmodule


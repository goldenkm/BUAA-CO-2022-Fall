`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:22:55 10/26/2022
// Design Name:   Ext
// Module Name:   /home/co-eda/p4_SingleCycleCpu/Ext_tb.v
// Project Name:  p4_SingleCycleCpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ext_tb;

	// Inputs
	reg [15:0] imm16;
	reg [1:0] ExtOp;

	// Outputs
	wire [31:0] imm32;

	// Instantiate the Unit Under Test (UUT)
	Ext uut (
		.imm16(imm16), 
		.ExtOp(ExtOp), 
		.imm32(imm32)
	);

	initial begin
		// Initialize Inputs
		imm16 = 16'b1000000000000001;
		ExtOp = 2'b10;

		
		#100;
      imm16 = 16'b1000000000000001;
		ExtOp = 2'b00;
		

	end
      
endmodule


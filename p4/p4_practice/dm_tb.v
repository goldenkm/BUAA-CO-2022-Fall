`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:56:52 10/27/2022
// Design Name:   DM
// Module Name:   /home/co-eda/p4_SingleCycleCpu/dm_tb.v
// Project Name:  p4_SingleCycleCpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dm_tb;

	// Inputs
	reg [31:0] addr;
	reg [31:0] write_data;
	reg [31:0] instr;
	reg clk;
	reg MemWrite;
	reg reset;

	// Outputs
	wire [31:0] read_data;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.addr(addr), 
		.write_data(write_data), 
		.instr(instr), 
		.clk(clk), 
		.MemWrite(MemWrite), 
		.reset(reset), 
		.read_data(read_data)
	);

	initial begin
		// Initialize Inputs
		addr = 32'h00000004;
		write_data = 32'h00001234;
		instr = 32'h00003004;
		clk = 0;
		MemWrite = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#15;
      addr = 32'h00000004;
		write_data = 32'h00001234;
		instr = 32'h00003008;
		MemWrite = 0;
		reset = 0;
		// Add stimulus here

	end
   always #5 clk=~clk;
endmodule


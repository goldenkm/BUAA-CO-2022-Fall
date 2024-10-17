`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:59:07 11/29/2022
// Design Name:   Cal_Continue
// Module Name:   /home/co-eda/p5_Pipelined/Cal_Continue_tb.v
// Project Name:  p5_Pipelined
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Cal_Continue
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Cal_Continue_tb;

	// Inputs
	reg [31:0] data;

	// Outputs
	wire [5:0] result;

	// Instantiate the Unit Under Test (UUT)
	Cal_Continue uut (
		.data(data), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		data = 32'b0000_0011_1111_1000_0000_1111_0101_0000;
		
	end
      
endmodule


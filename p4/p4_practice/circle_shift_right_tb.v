`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:18:47 11/14/2022
// Design Name:   Circle_Shift_Right
// Module Name:   /home/co-eda/p4_practice/circle_shift_right_tb.v
// Project Name:  p4_practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Circle_Shift_Right
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module circle_shift_right_tb;

	// Inputs
	reg [31:0] data;
	reg [4:0] num;
	reg [1:0] type;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Shifter uut (
		.data(data), 
		.num(num), 
		.type(type),
		.result(result)
	);

	initial begin
		// Initialize Inputs
		data = 32'hffff0005;
		num = 5'b10;
		type = 2'b00;
		
		#10 type = 2'b01;
		#10 type = 2'b10;
		#10 type = 2'b11;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


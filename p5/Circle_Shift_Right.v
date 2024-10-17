`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:25 11/14/2022 
// Design Name: 
// Module Name:    Circle_Shift_Right 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define arithmetic_right 2'b00
`define rotate_left 2'b01
`define rotate_right 2'b10
module Shifter(
    input [31:0] data,
    input [4:0] num,
	 input [1:0] type,
    output [31:0] result
    );
	 reg [31:0] tmp1;
	 reg tmp_bit;
	 integer i;
	 //arithmetic_right
	 always @(*) begin
		tmp1 = data;
		for(i=0; i<num; i=i+1) begin
			tmp_bit = tmp1[31];
			tmp1 = tmp1 >> 1;
			tmp1 = {tmp_bit, tmp1[30:0]};
		end
	 end
	 //rotate_left
	 wire [31:0] tmp2_1 = data << num;
	 wire [31:0] tmp2_2 = data >> (32-num);
	 wire [31:0] tmp2 = tmp2_1 | tmp2_2;
	 //rotate_right
	 wire [31:0] tmp3_1 = data >> num;
	 wire [31:0] tmp3_2 = data << (32-num);
	 wire [31:0] tmp3 = tmp3_1 | tmp3_2;
	 assign result = (type == 2'b00) ? tmp1 : 
							(type == 2'b01) ? tmp2 :
							(type == 2'b10) ? tmp3 :
							0;


endmodule

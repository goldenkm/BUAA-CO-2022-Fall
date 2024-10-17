`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:43 10/05/2022 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
wire [31:0] ans1;
wire [31:0] ans2;
wire [31:0] ans3;
wire [31:0] ans4;
wire [15:0] zero = 16'b0000000000000000;
assign ans1 = {{16{imm[15]}},imm};
assign ans2 = {zero,imm};
assign ans3 = {imm,zero};
assign ans4 = ans1 << 2;

assign ext = (EOp == 2'b00) ? ans1 :
             (EOp == 2'b01) ? ans2 :
				 (EOp == 2'b10) ? ans3 :
				 (EOp == 2'b11) ? ans4 :
				 32'b0;

endmodule

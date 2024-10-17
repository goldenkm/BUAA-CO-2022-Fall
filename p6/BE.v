`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:44 11/09/2022 
// Design Name: 
// Module Name:    ByteEn 
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
module BE(
    input [2:0] ByteOp,
    input [31:0] addr,
    output [3:0] byteen
    );
	 assign byteen =	//sb
							(ByteOp == 3'b010 && addr[1:0] == 2'b00) ? 4'b0001 :	
							(ByteOp == 3'b010 && addr[1:0] == 2'b01) ? 4'b0010 :
							(ByteOp == 3'b010 && addr[1:0] == 2'b10) ? 4'b0100 :
							(ByteOp == 3'b010 && addr[1:0] == 2'b11) ? 4'b1000 :
							//sh
							(ByteOp == 3'b011 && addr[1] == 0) ? 4'b0011 :	
							(ByteOp == 3'b011 && addr[1] == 1) ? 4'b1100 :
							//sw
							(ByteOp == 3'b001) ? 4'b1111 :
							4'b0000;



endmodule

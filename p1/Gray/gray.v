`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:56 10/05/2022 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
reg over;
reg [2:0] status;
initial begin
	status <= 3'b000;
	over <= 1'b0;
end
always@(posedge Clk) begin
	if( Reset == 1'b1) begin
		status <= 3'b000;
		over <= 1'b0;
	end
	else if( En == 1'b1 ) begin
		if (status == 3'b000) status <= 3'b001;
		else if (status == 3'b001) status <= 3'b011;
		else if (status == 3'b011) status <= 3'b010;
		else if (status == 3'b010) status <= 3'b110;
		else if (status == 3'b110) status <= 3'b111;
		else if (status == 3'b111) status <= 3'b101;
		else if (status == 3'b101) status <= 3'b100;
		else if (status == 3'b100) begin
				status <= 3'b000;
				over <= 1'b1;
		end
	end
	else status <= status;
end
assign Output = status;
assign Overflow = over;
endmodule

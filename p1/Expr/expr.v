`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:01 10/05/2022 
// Design Name: 
// Module Name:    expr 
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
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
`define S3 2'b11
module expr(
    input clk,
    input clr,
    input [7:0] in,
    output out,
	 output [1:0] Status
    );
reg [1:0] status;
initial begin
	status <= `S0;
end
always@(posedge clk) begin
	if(clr == 1'b1) 
	status <= `S0;
	else begin
		case (status)
		`S0: begin
			if( in >= "0" && in <= "9" ) begin
				status <= `S1;
			end
			else 
				status <= `S0;
		end
		`S1: begin
			if( in == "+" || in == "*" ) begin
				status <= `S2;
			end
			else if( in >= "0" && in <= "9" ) begin
				status <= `S3;
			end
			else
				status <= `S0;
		end
		`S2: begin
			if( in >= "0" && in <= "9" ) begin
				status <= `S1;
			end
			else 
				status <= `S0;
		end
		`S3: begin
			if( in >= "0" && in <= "9" ) begin
				status <= `S3;
			end
			else if( in == "+" || in == "*" ) begin
				status <= `S2;
			end
			else 
				status <= `S0;
		end
		default: status <= status;
	endcase
	end
end
always @(posedge clr) begin
	status <= `S0;
end
assign out = (status == `S1) ? 1'b1 : 1'b0;
assign Status = status;
endmodule

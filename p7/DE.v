`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:28 11/09/2022 
// Design Name: 
// Module Name:    DE 
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
module DE(
    input [31:0] addr,
    input [31:0] Data_in,
    input [2:0] ByteOp,
    output [31:0] Data_out
    );
	 reg [7:0] data_lb;
	 reg [15:0] data_lh;
	 always @(*) begin
		if(ByteOp == 3'b101) begin			//lb
			if(addr[1:0] == 2'b00) begin
				data_lb <= Data_in[7:0];
			end
			else if(addr[1:0] == 2'b01) begin
				data_lb <= Data_in[15:8];
			end
			else if(addr[1:0] == 2'b10) begin
				data_lb <= Data_in[23:16];
			end
			else begin
				data_lb <= Data_in[31:24];
			end
		end
		else if(ByteOp == 3'b110) begin		//lh
			if(addr[1] == 0) begin
				data_lh <= Data_in[15:0];
			end
			else begin
				data_lh <= Data_in[31:16];
			end
		end
	 end
	 wire isLb = (ByteOp == 3'b101) ? 1 : 0;
	 wire isLh = (ByteOp == 3'b110) ? 1 : 0;
	 assign Data_out = (isLb) ? {{24{data_lb[7]}},data_lb} :
								(isLh) ? {{16{data_lh[15]}},data_lh} :
								Data_in;


endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:13:20 10/26/2022 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input [1:0] DMOp,
    input [31:0] addr,
    input [31:0] write_data,
	 input [31:0] instr,
    input clk,
    input MemWrite,
    input reset,
    output [31:0] read_data
    );
	 reg [31:0] ram [1023:0];
	 wire [1:0] byte_sel = addr[1:0];
	 reg [7:0] store_byte;
	integer i;
	initial begin 
		for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
		end
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i=0; i<1024; i=i+1) begin
				ram[i] <= 32'b0;
			end
		end
		else begin
			if (MemWrite == 1) begin
				if(DMOp != 2'b10) begin
					ram[addr[11:2]] <= write_data;
					$display("@%h: *%h <= %h", instr, addr, write_data);
				end
				else begin
					store_byte <= write_data[7:0];
					if (byte_sel == 2'b11)  ram[addr[11:2]][31:24] <= store_byte;
					else if (byte_sel == 2'b10)  ram[addr[11:2]][23:16] <= store_byte;
					else if (byte_sel == 2'b01)  ram[addr[11:2]][15:8] <= store_byte;
					else ram[addr[11:2]][7:0] <= store_byte;
				end
			end		
		end
	end
	wire [7:0] load_byte = (byte_sel == 2'b11) ? ram[addr[11:2]][31:24] :
									(byte_sel == 2'b10) ? ram[addr[11:2]][23:16] :
									(byte_sel == 2'b01) ? ram[addr[11:2]][15:8] :
									 ram[addr[11:2]][7:0];
	wire [31:0] ext_byte = {{24{load_byte[7]}},load_byte};
	assign read_data = (DMOp == 2'b01) ? ext_byte : ram[addr[11:2]];

endmodule

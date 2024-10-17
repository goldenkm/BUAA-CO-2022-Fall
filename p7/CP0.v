`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:27:03 11/19/2022 
// Design Name: 
// Module Name:    CP0 
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
`define SR CP0[12]
`define Cause CP0[13]
`define EPC CP0[14]
`define EBase CP0[15] 
`define IM `SR[15:10]
`define EXL `SR[1]
`define IE `SR[0]
`define BD `Cause[31]
`define IP `Cause[15:10]
`define ExcCode `Cause[6:2]
module CP0(
    input clk,
    input reset,
    input en,
    input [4:0] CP0Add,
    input [31:0] CP0In,
    output [31:0] CP0Out,
    input [31:0] VPC,
    input BDIn,
    input [4:0] ExcCodeIn,
    input [5:0] HWInt,
    input EXLClr,
    output [31:0] EPCOut,
	 output [31:0] EBaseOut,
    output Req
    );
	 reg [31:0] CP0[31:0];
	 //reg [31:0] SR;
	 //reg [31:0] Cause;
	 //reg [31:0] EPC;
	 wire ExcReq = (|ExcCodeIn) & !`EXL;
	 wire IntReq = (|(HWInt & `IM)) & `IE & (!`EXL);
	 assign Req = ExcReq | IntReq;
	 integer i;
	 always @(posedge clk) begin
		if(reset) begin
			`SR <= 0;
			`Cause <= 0;
			`EPC <= 0;
			`EBase <= 32'h0000_4180;
		end
		else begin
			`IP <= HWInt;
			if(Req) begin
				`EXL <= 1'b1;
				`BD <= BDIn;
				`EPC <= (BDIn) ? (VPC - 32'd4) : VPC;
				`ExcCode <= (IntReq) ? 5'b0 : ExcCodeIn;
			end
			else if (EXLClr) begin
				`EXL <= 0;
			end
			else if(en) begin
				CP0[CP0Add] <= CP0In;
			end
		end
	 end
	 assign CP0Out = CP0[CP0Add];
	 assign EPCOut = `EPC;
	 assign EBaseOut = (IntReq) ? CP0In : `EBase;


endmodule

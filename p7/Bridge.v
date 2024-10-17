`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:52 11/25/2022 
// Design Name: 
// Module Name:    Bridge 
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
`define DM_StartAddr 32'h0000_0000
`define DM_EndAddr 32'h0000_2fff
`define TC0_StartAddr 32'h0000_7f00
`define TC0_EndAddr 32'h0000_7f0b
`define TC1_StartAddr 32'h0000_7f10
`define TC1_EndAddr 32'h0000_7f1b
module Bridge(
    input [31:0] VAdd,
    input [3:0] ByteEn,
	 input [31:0] CPUOut,
	 input [31:0] TC0_out,
    input [31:0] TC1_out,
    input [31:0] m_data_rdata,			//DM's read data
    output [31:0] m_data_addr,			//DM's address
    output [3:0] m_data_byteen,
	 output [31:0] m_data_wdata,
	 output [31:0] m_int_addr,
	 output [3:0] m_int_byteen,
    output [31:2] TC0_addr,
    output [31:2] TC1_addr,
    output TC0_we,
    output TC1_we,
    output [31:0] Bridge_out
    );
	 assign m_data_addr = VAdd;
	 assign m_data_byteen = ByteEn;
	 assign m_data_wdata = CPUOut;
	 assign m_int_addr = VAdd;
	 assign m_int_byteen = (VAdd == 32'h0000_7f20) ? ByteEn : 0;
	 wire HitDM = (VAdd >= `DM_StartAddr) && (VAdd <= `DM_EndAddr);
	 wire HitTC0 = ((VAdd >= `TC0_StartAddr) && (VAdd <= `TC0_EndAddr));
	 wire HitTC1 = ((VAdd >= `TC1_StartAddr) && (VAdd <= `TC1_EndAddr));
	 assign Bridge_out = (HitTC0) ? TC0_out :
								(HitTC1) ? TC1_out :
								(HitDM) ? m_data_rdata :
								32'b0;
	 assign TC0_addr = (HitTC0) ? VAdd[31:2] : 0;
	 assign TC1_addr = (HitTC1) ? VAdd[31:2] : 0;
	 assign TC0_we = ByteEn != 0 && HitTC0;
	 assign TC1_we = ByteEn != 0 && HitTC1;


endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:16 11/03/2022 
// Design Name: 
// Module Name:    HazardControl 
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
module HazardControl(
    input [4:0] D_A1,
    input [4:0] D_A2,
    input [4:0] E_A1,
    input [4:0] E_A2,
    input [4:0] M_A2,
    input [4:0] E_WR,
    input [4:0] M_WR,
    input [4:0] W_WR,
    input [2:0] Tuse_rs,
    input [2:0] Tuse_rt,
    input [2:0] Tnew_E,
    input [2:0] Tnew_M,
    input [2:0] Tnew_W,
	 input RegWrite_E,
	 input RegWrite_M,
	 input RegWrite_W,
	 input MDU_busy,
	 input D_eret,
	 input E_mtc0,
	 input [4:0] E_rd,
	 input M_mtc0,
	 input [4:0] M_rd,
	 output Stall,
	 output [1:0] MF_V1_D_Sel,
	 output [1:0] MF_V2_D_Sel,
	 output [1:0] MF_V1_E_Sel,
	 output [1:0] MF_V2_E_Sel,
	 output MF_V2_M_Sel
    );
	 /*******************************Stall_Rs******************************/
	 wire Stall_Rs0_E2 = (Tuse_rs == 0) & (Tnew_E == 3'd2) & (E_WR == D_A1) & (D_A1 != 0) & (RegWrite_E);
	 wire Stall_Rs0_E1 = (Tuse_rs == 0) & (Tnew_E == 3'd1) & (E_WR == D_A1) & (D_A1 != 0) & (RegWrite_E);
	 wire Stall_Rs1_E2 = (Tuse_rs == 1) & (Tnew_E == 3'd2) & (E_WR == D_A1) & (D_A1 != 0) & (RegWrite_E);
	 wire Stall_Rs0_M1 = (Tuse_rs == 0) & (Tnew_M == 3'd1) & (M_WR == D_A1) & (D_A1 != 0) & (RegWrite_M);
	 wire Stall_Rs = Stall_Rs0_E2 | Stall_Rs0_E1 | Stall_Rs1_E2 | Stall_Rs0_M1;
	 /*******************************Stall_Rt******************************/
	 wire Stall_Rt0_E2 = (Tuse_rt == 0) & (Tnew_E == 3'd2) & (E_WR == D_A2) & (D_A2 != 0) & (RegWrite_E);
	 wire Stall_Rt0_E1 = (Tuse_rt == 0) & (Tnew_E == 3'd1) & (E_WR == D_A2) & (D_A2 != 0) & (RegWrite_E);
	 wire Stall_Rt1_E2 = (Tuse_rt == 1) & (Tnew_E == 3'd2) & (E_WR == D_A2) & (D_A2 != 0) & (RegWrite_E);
	 wire Stall_Rt0_M1 = (Tuse_rt == 0) & (Tnew_M == 3'd1) & (M_WR == D_A2) & (D_A2 != 0) & (RegWrite_M);
	 wire Stall_Rt = Stall_Rt0_E2 || Stall_Rt0_E1 || Stall_Rt1_E2 || Stall_Rt0_M1;
	 /*******************************Stall_Eret******************************/
	 wire Stall_eret = D_eret & ((E_mtc0 & (E_rd == 5'd14)) || (M_mtc0 & (M_rd == 5'd14)));
	 
	 assign Stall = Stall_Rs || Stall_Rt || MDU_busy || Stall_eret; 
	 /*******************************MF_V1_D_Sel******************************/
	 assign MF_V1_D_Sel = (D_A1 == E_WR && D_A1 != 0 && Tnew_E == 0 && RegWrite_E == 1) ? 2'b01 :
						(D_A1 == M_WR && D_A1 != 0 && Tnew_M == 0 && RegWrite_M == 1) ? 2'b10 :
						(D_A1 == W_WR && D_A1 != 0 && RegWrite_W == 1) ? 2'b11 :
						2'b00;
	 /*******************************MF_V2_D_Sel******************************/
	 assign MF_V2_D_Sel = (D_A2 == E_WR && D_A2 != 0 && Tnew_E == 0 && RegWrite_E == 1) ? 2'b01 :
						(D_A2 == M_WR && D_A2 != 0 && Tnew_M == 0 && RegWrite_M == 1) ? 2'b10 :
						(D_A2 == W_WR && D_A2 != 0 && RegWrite_W == 1) ? 2'b11 :
						2'b00;
	 /*******************************MF_V1_E_Sel******************************/
	 assign MF_V1_E_Sel = (E_A1 == M_WR && E_A1 != 0 && Tnew_M == 0 && RegWrite_M == 1) ? 2'b01 :
						(E_A1 == W_WR && E_A1 != 0 && RegWrite_W == 1) ? 2'b10 :
						2'b00;
	 /******************************MF_V2_E_Sel*******************************/
	 assign MF_V2_E_Sel = (E_A2 == M_WR && E_A2 != 0 && Tnew_M == 0 && RegWrite_M == 1) ? 2'b01 :
						(E_A2 == W_WR && E_A2 != 0 && RegWrite_W == 1) ? 2'b10 :
						2'b00;
	 /******************************MF_V2_M_Sel*******************************/
	 assign MF_V2_M_Sel = (M_A2 == W_WR && M_A2 != 0 && RegWrite_W == 1) ? 1 : 0;
	 
endmodule

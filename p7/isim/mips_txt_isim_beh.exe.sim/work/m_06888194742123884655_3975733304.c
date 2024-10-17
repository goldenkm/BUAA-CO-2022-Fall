/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/p7/CP0.v";
static int ng1[] = {12, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {13, 0};
static int ng5[] = {14, 0};
static unsigned int ng6[] = {16768U, 0U};
static int ng7[] = {15, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {31, 0};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {0U, 0U};
static int ng13[] = {6, 0};
static int ng14[] = {2, 0};



static void NetDecl_51_0(char *t0)
{
    char t3[8];
    char t11[8];
    char t15[8];
    char t23[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 31U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t0 + 3848);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 3848);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3848);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t15, 32, t14, t18, t21, 2, 1, t22, 32, 1);
    t24 = (t0 + 3848);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t23, 1, t15, t26, 2, t27, 32, 1);
    memset(t11, 0, 8);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t28) == 0)
        goto LAB8;

LAB10:    t34 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t34) = 1;

LAB11:    t36 = *((unsigned int *)t3);
    t37 = *((unsigned int *)t11);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t3 + 4);
    t40 = (t11 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB12;

LAB13:
LAB14:    t67 = (t0 + 6904);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t71, 0, 8);
    t72 = 1U;
    t73 = t72;
    t74 = (t35 + 4);
    t75 = *((unsigned int *)t35);
    t72 = (t72 & t75);
    t76 = *((unsigned int *)t74);
    t73 = (t73 & t76);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 | t72);
    t79 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t79 | t73);
    xsi_driver_vfirst_trans(t67, 0, 0U);
    t80 = (t0 + 6728);
    *((int *)t80) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t3 + 4);
    t50 = (t11 + 4);
    t51 = *((unsigned int *)t3);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t11);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB14;

}

static void NetDecl_52_1(char *t0)
{
    char t3[8];
    char t7[8];
    char t15[8];
    char t24[8];
    char t66[8];
    char t74[8];
    char t79[8];
    char t111[8];
    char t115[8];
    char t123[8];
    char t135[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3848);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 3848);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3848);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 32, 1);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 10);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 10);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 63U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 63U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t15);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t15 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 & 63U);
    if (t61 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t56) != 0)
        goto LAB9;

LAB10:    t63 = (t0 + 3848);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t67 = (t0 + 3848);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t70 = (t0 + 3848);
    t71 = (t70 + 64U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t66, 32, t65, t69, t72, 2, 1, t73, 32, 1);
    t75 = (t0 + 3848);
    t76 = (t75 + 72U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t74, 1, t66, t77, 2, t78, 32, 1);
    t80 = *((unsigned int *)t3);
    t81 = *((unsigned int *)t74);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t3 + 4);
    t84 = (t74 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB11;

LAB12:
LAB13:    t112 = (t0 + 3848);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t116 = (t0 + 3848);
    t117 = (t116 + 72U);
    t118 = *((char **)t117);
    t119 = (t0 + 3848);
    t120 = (t119 + 64U);
    t121 = *((char **)t120);
    t122 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t115, 32, t114, t118, t121, 2, 1, t122, 32, 1);
    t124 = (t0 + 3848);
    t125 = (t124 + 72U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t123, 1, t115, t126, 2, t127, 32, 1);
    memset(t111, 0, 8);
    t128 = (t123 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t123);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t128) == 0)
        goto LAB14;

LAB16:    t134 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t134) = 1;

LAB17:    t136 = *((unsigned int *)t79);
    t137 = *((unsigned int *)t111);
    t138 = (t136 & t137);
    *((unsigned int *)t135) = t138;
    t139 = (t79 + 4);
    t140 = (t111 + 4);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t139);
    t143 = *((unsigned int *)t140);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = *((unsigned int *)t141);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB18;

LAB19:
LAB20:    t167 = (t0 + 6968);
    t168 = (t167 + 56U);
    t169 = *((char **)t168);
    t170 = (t169 + 56U);
    t171 = *((char **)t170);
    memset(t171, 0, 8);
    t172 = 1U;
    t173 = t172;
    t174 = (t135 + 4);
    t175 = *((unsigned int *)t135);
    t172 = (t172 & t175);
    t176 = *((unsigned int *)t174);
    t173 = (t173 & t176);
    t177 = (t171 + 4);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t178 | t172);
    t179 = *((unsigned int *)t177);
    *((unsigned int *)t177) = (t179 | t173);
    xsi_driver_vfirst_trans(t167, 0, 0U);
    t180 = (t0 + 6744);
    *((int *)t180) = 1;

LAB1:    return;
LAB4:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t15 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t62 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB10;

LAB11:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t3 + 4);
    t94 = (t74 + 4);
    t95 = *((unsigned int *)t3);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t74);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t103 = (t96 & t98);
    t104 = (t100 & t102);
    t105 = (~(t103));
    t106 = (~(t104));
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t108 & t106);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    t110 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t110 & t106);
    goto LAB13;

LAB14:    *((unsigned int *)t111) = 1;
    goto LAB17;

LAB18:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t141);
    *((unsigned int *)t135) = (t147 | t148);
    t149 = (t79 + 4);
    t150 = (t111 + 4);
    t151 = *((unsigned int *)t79);
    t152 = (~(t151));
    t153 = *((unsigned int *)t149);
    t154 = (~(t153));
    t155 = *((unsigned int *)t111);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (~(t157));
    t159 = (t152 & t154);
    t160 = (t156 & t158);
    t161 = (~(t159));
    t162 = (~(t160));
    t163 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t163 & t161);
    t164 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t164 & t162);
    t165 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t165 & t161);
    t166 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t166 & t162);
    goto LAB20;

}

static void Cont_53_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 7032);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 6760);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Always_55_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t55[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 5696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(62, ng0);

LAB18:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3848);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 3848);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t25 = (t13 + 4);
    t6 = *((unsigned int *)t25);
    t24 = (!(t6));
    t36 = (t14 + 4);
    t7 = *((unsigned int *)t36);
    t27 = (!(t7));
    t28 = (t24 && t27);
    t37 = (t33 + 4);
    t8 = *((unsigned int *)t37);
    t31 = (!(t8));
    t32 = (t28 && t31);
    t38 = (t34 + 4);
    t9 = *((unsigned int *)t38);
    t39 = (!(t9));
    t40 = (t32 && t39);
    t41 = (t35 + 4);
    t10 = *((unsigned int *)t41);
    t42 = (!(t10));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB61:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3848);
    t15 = (t0 + 3848);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3848);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3848);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3848);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3848);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB13;

LAB14:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB15;

LAB16:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB17;

LAB19:    t23 = *((unsigned int *)t35);
    t44 = (t23 + 0);
    t26 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t34);
    t45 = (t26 + t29);
    t30 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t34);
    t47 = (t30 - t46);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t44, t45, t48, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(64, ng0);

LAB24:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 3848);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 3848);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t33, t22, 2, t25, 32, 1);
    t36 = (t13 + 4);
    t23 = *((unsigned int *)t36);
    t24 = (!(t23));
    t37 = (t14 + 4);
    t26 = *((unsigned int *)t37);
    t27 = (!(t26));
    t28 = (t24 && t27);
    t38 = (t33 + 4);
    t29 = *((unsigned int *)t38);
    t31 = (!(t29));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3848);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 3848);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t33, t20, 2, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t24 = (!(t6));
    t25 = (t14 + 4);
    t7 = *((unsigned int *)t25);
    t27 = (!(t7));
    t28 = (t24 && t27);
    t36 = (t33 + 4);
    t8 = *((unsigned int *)t36);
    t31 = (!(t8));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t5 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t5);
    t29 = (t23 || t26);
    if (t29 > 0)
        goto LAB33;

LAB34:    t30 = *((unsigned int *)t14);
    t46 = (~(t30));
    t49 = *((unsigned int *)t5);
    t50 = (t46 || t49);
    if (t50 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t14) > 0)
        goto LAB39;

LAB40:    memcpy(t13, t16, 8);

LAB41:    t15 = (t0 + 3848);
    t17 = (t0 + 3848);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3848);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t34, t35, t19, t22, 2, 1, t25, 32, 1);
    t36 = (t34 + 4);
    t51 = *((unsigned int *)t36);
    t24 = (!(t51));
    t37 = (t35 + 4);
    t52 = *((unsigned int *)t37);
    t27 = (!(t52));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t5 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t5);
    t29 = (t23 || t26);
    if (t29 > 0)
        goto LAB48;

LAB49:    t30 = *((unsigned int *)t14);
    t46 = (~(t30));
    t49 = *((unsigned int *)t5);
    t50 = (t46 || t49);
    if (t50 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t5) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t14) > 0)
        goto LAB54;

LAB55:    memcpy(t13, t15, 8);

LAB56:    t12 = (t0 + 3848);
    t16 = (t0 + 3848);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3848);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t33, t34, t18, t21, 2, 1, t22, 32, 1);
    t25 = (t0 + 3848);
    t36 = (t25 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng13)));
    t41 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t35, t55, t56, ((int*)(t37)), 2, t38, 32, 1, t41, 32, 1);
    t57 = (t33 + 4);
    t51 = *((unsigned int *)t57);
    t24 = (!(t51));
    t58 = (t34 + 4);
    t52 = *((unsigned int *)t58);
    t27 = (!(t52));
    t28 = (t24 && t27);
    t59 = (t35 + 4);
    t53 = *((unsigned int *)t59);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t60 = (t55 + 4);
    t54 = *((unsigned int *)t60);
    t39 = (!(t54));
    t40 = (t32 && t39);
    t61 = (t56 + 4);
    t62 = *((unsigned int *)t61);
    t42 = (!(t62));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB57;

LAB58:    goto LAB23;

LAB25:    t30 = *((unsigned int *)t14);
    t46 = *((unsigned int *)t33);
    t39 = (t30 + t46);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, t39, 1, 0LL);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t33);
    t39 = (t9 + t10);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, t39, 1, 0LL);
    goto LAB28;

LAB29:    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB31:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng11)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t12, 32, t11, 32);
    goto LAB34;

LAB35:    t15 = (t0 + 2008U);
    t16 = *((char **)t15);
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t13, 32, t33, 32, t16, 32);
    goto LAB41;

LAB39:    memcpy(t13, t33, 8);
    goto LAB41;

LAB42:    t53 = *((unsigned int *)t34);
    t54 = *((unsigned int *)t35);
    t31 = (t53 - t54);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t15, t13, 0, *((unsigned int *)t35), t32, 0LL);
    goto LAB43;

LAB44:    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB46:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB48:    t11 = ((char*)((ng12)));
    goto LAB49;

LAB50:    t12 = (t0 + 2328U);
    t15 = *((char **)t12);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t13, 5, t11, 5, t15, 5);
    goto LAB56;

LAB54:    memcpy(t13, t11, 8);
    goto LAB56;

LAB57:    t63 = *((unsigned int *)t56);
    t44 = (t63 + 0);
    t64 = *((unsigned int *)t34);
    t65 = *((unsigned int *)t55);
    t45 = (t64 + t65);
    t66 = *((unsigned int *)t35);
    t67 = *((unsigned int *)t55);
    t47 = (t66 - t67);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t44, t45, t48, 0LL);
    goto LAB58;

LAB59:    xsi_set_current_line(70, ng0);

LAB62:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 3848);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 3848);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t33, t22, 2, t25, 32, 1);
    t36 = (t13 + 4);
    t23 = *((unsigned int *)t36);
    t24 = (!(t23));
    t37 = (t14 + 4);
    t26 = *((unsigned int *)t37);
    t27 = (!(t26));
    t28 = (t24 && t27);
    t38 = (t33 + 4);
    t29 = *((unsigned int *)t38);
    t31 = (!(t29));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB63;

LAB64:    goto LAB61;

LAB63:    t30 = *((unsigned int *)t14);
    t46 = *((unsigned int *)t33);
    t39 = (t30 + t46);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, t39, 1, 0LL);
    goto LAB64;

LAB65:    xsi_set_current_line(73, ng0);

LAB68:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 3848);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t13, t14, t15, t18, 2, 1, t20, 5, 2);
    t19 = (t13 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (!(t23));
    t21 = (t14 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB69;

LAB70:    goto LAB67;

LAB69:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB70;

}

static void Cont_78_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 7096);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 6792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_79_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 7160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 6808);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_80_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3448U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t32 = (t0 + 7224);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t37 = (t0 + 6824);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1688U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 3848);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    t25 = (t0 + 3848);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 3848);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t24, 32, t23, t27, t30, 2, 1, t31, 32, 1);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}


extern void work_m_06888194742123884655_3975733304_init()
{
	static char *pe[] = {(void *)NetDecl_51_0,(void *)NetDecl_52_1,(void *)Cont_53_2,(void *)Always_55_3,(void *)Cont_78_4,(void *)Cont_79_5,(void *)Cont_80_6};
	xsi_register_didat("work_m_06888194742123884655_3975733304", "isim/mips_txt_isim_beh.exe.sim/work/m_06888194742123884655_3975733304.didat");
	xsi_register_executes(pe);
}

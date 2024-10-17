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
static const char *ng0 = "/home/co-eda/p4_SingleCycleCpu/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static const char *ng6 = "@%h: *%h <= %h";
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {31, 0};
static int ng9[] = {24, 0};
static int ng10[] = {23, 0};
static int ng11[] = {16, 0};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {15, 0};
static int ng14[] = {8, 0};
static int ng15[] = {7, 0};



static void NetDecl_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 5984);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1U);
    t25 = (t0 + 5840);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_35_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(37, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3048);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_40_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t62[8];
    char t65[8];
    char t81[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t83;
    char *t84;
    char *t85;
    int t86;
    int t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5856);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);

LAB20:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(42, ng0);

LAB17:    xsi_set_current_line(43, ng0);
    t8 = ((char*)((ng3)));
    t21 = (t0 + 3048);
    t22 = (t0 + 3048);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 3048);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 3368);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB19;

LAB23:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t45 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t21);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t29);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB30;

LAB29:    if (t54 != 0)
        goto LAB31;

LAB32:    t33 = (t30 + 4);
    t57 = *((unsigned int *)t33);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(52, ng0);

LAB39:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB61;

LAB58:    if (t18 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t6) = 1;

LAB61:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 3048);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (t9 >> 2);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t34);
    t12 = (t11 >> 2);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 1023U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 1023U);
    xsi_vlog_generic_convert_array_indices(t6, t30, t21, t29, 2, 1, t31, 10, 2);
    t35 = (t0 + 3048);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng15)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t62, t65, t81, ((int*)(t37)), 2, t38, 32, 1, t40, 32, 1);
    t63 = (t6 + 4);
    t15 = *((unsigned int *)t63);
    t39 = (!(t15));
    t64 = (t30 + 4);
    t16 = *((unsigned int *)t64);
    t41 = (!(t16));
    t42 = (t39 && t41);
    t66 = (t62 + 4);
    t17 = *((unsigned int *)t66);
    t43 = (!(t17));
    t44 = (t42 && t43);
    t67 = (t65 + 4);
    t18 = *((unsigned int *)t67);
    t86 = (!(t18));
    t87 = (t44 && t86);
    t68 = (t81 + 4);
    t19 = *((unsigned int *)t68);
    t89 = (!(t19));
    t90 = (t87 && t89);
    if (t90 == 1)
        goto LAB67;

LAB68:
LAB64:
LAB55:
LAB46:
LAB35:    goto LAB27;

LAB30:    *((unsigned int *)t30) = 1;
    goto LAB32;

LAB31:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(48, ng0);

LAB36:    xsi_set_current_line(49, ng0);
    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    t34 = (t0 + 3048);
    t36 = (t0 + 3048);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t40 = (t0 + 3048);
    t63 = (t40 + 64U);
    t64 = *((char **)t63);
    t66 = (t0 + 1208U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 2);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 2);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 1023U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 1023U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t38, t64, 2, 1, t65, 10, 2);
    t75 = (t31 + 4);
    t76 = *((unsigned int *)t75);
    t39 = (!(t76));
    t77 = (t62 + 4);
    t78 = *((unsigned int *)t77);
    t41 = (!(t78));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t5, 32);
    goto LAB35;

LAB37:    t79 = *((unsigned int *)t31);
    t80 = *((unsigned int *)t62);
    t43 = (t79 - t80);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t34, t35, 0, *((unsigned int *)t62), t44, 0LL);
    goto LAB38;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(54, ng0);
    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3048);
    t32 = (t0 + 3048);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 3048);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1208U);
    t40 = *((char **)t38);
    memset(t62, 0, 8);
    t38 = (t62 + 4);
    t63 = (t40 + 4);
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 2);
    *((unsigned int *)t62) = t46;
    t47 = *((unsigned int *)t63);
    t48 = (t47 >> 2);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t49 & 1023U);
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t62, 10, 2);
    t64 = (t0 + 3048);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng8)));
    t75 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t65, t81, t82, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t30 + 4);
    t51 = *((unsigned int *)t77);
    t39 = (!(t51));
    t83 = (t31 + 4);
    t52 = *((unsigned int *)t83);
    t41 = (!(t52));
    t42 = (t39 && t41);
    t84 = (t65 + 4);
    t53 = *((unsigned int *)t84);
    t43 = (!(t53));
    t44 = (t42 && t43);
    t85 = (t81 + 4);
    t54 = *((unsigned int *)t85);
    t86 = (!(t54));
    t87 = (t44 && t86);
    t88 = (t82 + 4);
    t55 = *((unsigned int *)t88);
    t89 = (!(t55));
    t90 = (t87 && t89);
    if (t90 == 1)
        goto LAB47;

LAB48:    goto LAB46;

LAB47:    t56 = *((unsigned int *)t82);
    t91 = (t56 + 0);
    t57 = *((unsigned int *)t31);
    t58 = *((unsigned int *)t81);
    t92 = (t57 + t58);
    t59 = *((unsigned int *)t65);
    t60 = *((unsigned int *)t81);
    t93 = (t59 - t60);
    t94 = (t93 + 1);
    xsi_vlogvar_wait_assign_value(t29, t28, t91, t92, t94, 0LL);
    goto LAB48;

LAB51:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3048);
    t32 = (t0 + 3048);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 3048);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1208U);
    t40 = *((char **)t38);
    memset(t62, 0, 8);
    t38 = (t62 + 4);
    t63 = (t40 + 4);
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 2);
    *((unsigned int *)t62) = t46;
    t47 = *((unsigned int *)t63);
    t48 = (t47 >> 2);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t49 & 1023U);
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t62, 10, 2);
    t64 = (t0 + 3048);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng10)));
    t75 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t65, t81, t82, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t30 + 4);
    t51 = *((unsigned int *)t77);
    t39 = (!(t51));
    t83 = (t31 + 4);
    t52 = *((unsigned int *)t83);
    t41 = (!(t52));
    t42 = (t39 && t41);
    t84 = (t65 + 4);
    t53 = *((unsigned int *)t84);
    t43 = (!(t53));
    t44 = (t42 && t43);
    t85 = (t81 + 4);
    t54 = *((unsigned int *)t85);
    t86 = (!(t54));
    t87 = (t44 && t86);
    t88 = (t82 + 4);
    t55 = *((unsigned int *)t88);
    t89 = (!(t55));
    t90 = (t87 && t89);
    if (t90 == 1)
        goto LAB56;

LAB57:    goto LAB55;

LAB56:    t56 = *((unsigned int *)t82);
    t91 = (t56 + 0);
    t57 = *((unsigned int *)t31);
    t58 = *((unsigned int *)t81);
    t92 = (t57 + t58);
    t59 = *((unsigned int *)t65);
    t60 = *((unsigned int *)t81);
    t93 = (t59 - t60);
    t94 = (t93 + 1);
    xsi_vlogvar_wait_assign_value(t29, t28, t91, t92, t94, 0LL);
    goto LAB57;

LAB60:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(56, ng0);
    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3048);
    t32 = (t0 + 3048);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 3048);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1208U);
    t40 = *((char **)t38);
    memset(t62, 0, 8);
    t38 = (t62 + 4);
    t63 = (t40 + 4);
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 2);
    *((unsigned int *)t62) = t46;
    t47 = *((unsigned int *)t63);
    t48 = (t47 >> 2);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t49 & 1023U);
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t62, 10, 2);
    t64 = (t0 + 3048);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng13)));
    t75 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t65, t81, t82, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t30 + 4);
    t51 = *((unsigned int *)t77);
    t39 = (!(t51));
    t83 = (t31 + 4);
    t52 = *((unsigned int *)t83);
    t41 = (!(t52));
    t42 = (t39 && t41);
    t84 = (t65 + 4);
    t53 = *((unsigned int *)t84);
    t43 = (!(t53));
    t44 = (t42 && t43);
    t85 = (t81 + 4);
    t54 = *((unsigned int *)t85);
    t86 = (!(t54));
    t87 = (t44 && t86);
    t88 = (t82 + 4);
    t55 = *((unsigned int *)t88);
    t89 = (!(t55));
    t90 = (t87 && t89);
    if (t90 == 1)
        goto LAB65;

LAB66:    goto LAB64;

LAB65:    t56 = *((unsigned int *)t82);
    t91 = (t56 + 0);
    t57 = *((unsigned int *)t31);
    t58 = *((unsigned int *)t81);
    t92 = (t57 + t58);
    t59 = *((unsigned int *)t65);
    t60 = *((unsigned int *)t81);
    t93 = (t59 - t60);
    t94 = (t93 + 1);
    xsi_vlogvar_wait_assign_value(t29, t28, t91, t92, t94, 0LL);
    goto LAB66;

LAB67:    t20 = *((unsigned int *)t81);
    t91 = (t20 + 0);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t65);
    t92 = (t23 + t24);
    t25 = *((unsigned int *)t62);
    t26 = *((unsigned int *)t65);
    t93 = (t25 - t26);
    t94 = (t93 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t91, t92, t94, 0LL);
    goto LAB68;

}

static void NetDecl_62_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t43[8];
    char t53[8];
    char t66[8];
    char t67[8];
    char t70[8];
    char t100[8];
    char t107[8];
    char t117[8];
    char t130[8];
    char t131[8];
    char t134[8];
    char t164[8];
    char t171[8];
    char t181[8];
    char t197[8];
    char t204[8];
    char t214[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
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
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    char *t198;
    char *t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t205;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    char *t236;

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t62 = *((unsigned int *)t4);
    t63 = (~(t62));
    t64 = *((unsigned int *)t29);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t66, 8);

LAB20:    t223 = (t0 + 6048);
    t224 = (t223 + 56U);
    t225 = *((char **)t224);
    t226 = (t225 + 56U);
    t227 = *((char **)t226);
    memset(t227, 0, 8);
    t228 = 255U;
    t229 = t228;
    t230 = (t3 + 4);
    t231 = *((unsigned int *)t3);
    t228 = (t228 & t231);
    t232 = *((unsigned int *)t230);
    t229 = (t229 & t232);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t234 | t228);
    t235 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t235 | t229);
    xsi_driver_vfirst_trans(t223, 0, 7U);
    t236 = (t0 + 5872);
    *((int *)t236) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3048);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 3048);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 3048);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 2);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 2);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 1023U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 1023U);
    xsi_vlog_generic_get_array_select_value(t36, 32, t35, t39, t42, 2, 1, t43, 10, 2);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t36 + 4);
    t56 = *((unsigned int *)t36);
    t57 = (t56 >> 24);
    *((unsigned int *)t53) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 24);
    *((unsigned int *)t54) = t59;
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 & 255U);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t61 & 255U);
    goto LAB13;

LAB14:    t68 = (t0 + 2328U);
    t69 = *((char **)t68);
    t68 = ((char*)((ng5)));
    memset(t70, 0, 8);
    t71 = (t69 + 4);
    t72 = (t68 + 4);
    t73 = *((unsigned int *)t69);
    t74 = *((unsigned int *)t68);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t71);
    t77 = *((unsigned int *)t72);
    t78 = (t76 ^ t77);
    t79 = (t75 | t78);
    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t72);
    t82 = (t80 | t81);
    t83 = (~(t82));
    t84 = (t79 & t83);
    if (t84 != 0)
        goto LAB24;

LAB21:    if (t82 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t70) = 1;

LAB24:    memset(t67, 0, 8);
    t86 = (t70 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t70);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t86) != 0)
        goto LAB27;

LAB28:    t93 = (t67 + 4);
    t94 = *((unsigned int *)t67);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB29;

LAB30:    t126 = *((unsigned int *)t67);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t93) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t67) > 0)
        goto LAB35;

LAB36:    memcpy(t66, t130, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t53, 8, t66, 8);
    goto LAB20;

LAB18:    memcpy(t3, t53, 8);
    goto LAB20;

LAB23:    t85 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t67) = 1;
    goto LAB28;

LAB27:    t92 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB28;

LAB29:    t97 = (t0 + 3048);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t101 = (t0 + 3048);
    t102 = (t101 + 72U);
    t103 = *((char **)t102);
    t104 = (t0 + 3048);
    t105 = (t104 + 64U);
    t106 = *((char **)t105);
    t108 = (t0 + 1208U);
    t109 = *((char **)t108);
    memset(t107, 0, 8);
    t108 = (t107 + 4);
    t110 = (t109 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (t111 >> 2);
    *((unsigned int *)t107) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 2);
    *((unsigned int *)t108) = t114;
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 1023U);
    t116 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t116 & 1023U);
    xsi_vlog_generic_get_array_select_value(t100, 32, t99, t103, t106, 2, 1, t107, 10, 2);
    memset(t117, 0, 8);
    t118 = (t117 + 4);
    t119 = (t100 + 4);
    t120 = *((unsigned int *)t100);
    t121 = (t120 >> 16);
    *((unsigned int *)t117) = t121;
    t122 = *((unsigned int *)t119);
    t123 = (t122 >> 16);
    *((unsigned int *)t118) = t123;
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 & 255U);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t125 & 255U);
    goto LAB30;

LAB31:    t132 = (t0 + 2328U);
    t133 = *((char **)t132);
    t132 = ((char*)((ng12)));
    memset(t134, 0, 8);
    t135 = (t133 + 4);
    t136 = (t132 + 4);
    t137 = *((unsigned int *)t133);
    t138 = *((unsigned int *)t132);
    t139 = (t137 ^ t138);
    t140 = *((unsigned int *)t135);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = (t139 | t142);
    t144 = *((unsigned int *)t135);
    t145 = *((unsigned int *)t136);
    t146 = (t144 | t145);
    t147 = (~(t146));
    t148 = (t143 & t147);
    if (t148 != 0)
        goto LAB41;

LAB38:    if (t146 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t134) = 1;

LAB41:    memset(t131, 0, 8);
    t150 = (t134 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t134);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t150) != 0)
        goto LAB44;

LAB45:    t157 = (t131 + 4);
    t158 = *((unsigned int *)t131);
    t159 = *((unsigned int *)t157);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB46;

LAB47:    t190 = *((unsigned int *)t131);
    t191 = (~(t190));
    t192 = *((unsigned int *)t157);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t157) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t131) > 0)
        goto LAB52;

LAB53:    memcpy(t130, t214, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t66, 8, t117, 8, t130, 8);
    goto LAB37;

LAB35:    memcpy(t66, t117, 8);
    goto LAB37;

LAB40:    t149 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t131) = 1;
    goto LAB45;

LAB44:    t156 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB45;

LAB46:    t161 = (t0 + 3048);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    t165 = (t0 + 3048);
    t166 = (t165 + 72U);
    t167 = *((char **)t166);
    t168 = (t0 + 3048);
    t169 = (t168 + 64U);
    t170 = *((char **)t169);
    t172 = (t0 + 1208U);
    t173 = *((char **)t172);
    memset(t171, 0, 8);
    t172 = (t171 + 4);
    t174 = (t173 + 4);
    t175 = *((unsigned int *)t173);
    t176 = (t175 >> 2);
    *((unsigned int *)t171) = t176;
    t177 = *((unsigned int *)t174);
    t178 = (t177 >> 2);
    *((unsigned int *)t172) = t178;
    t179 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t179 & 1023U);
    t180 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t180 & 1023U);
    xsi_vlog_generic_get_array_select_value(t164, 32, t163, t167, t170, 2, 1, t171, 10, 2);
    memset(t181, 0, 8);
    t182 = (t181 + 4);
    t183 = (t164 + 4);
    t184 = *((unsigned int *)t164);
    t185 = (t184 >> 8);
    *((unsigned int *)t181) = t185;
    t186 = *((unsigned int *)t183);
    t187 = (t186 >> 8);
    *((unsigned int *)t182) = t187;
    t188 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t188 & 255U);
    t189 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t189 & 255U);
    goto LAB47;

LAB48:    t194 = (t0 + 3048);
    t195 = (t194 + 56U);
    t196 = *((char **)t195);
    t198 = (t0 + 3048);
    t199 = (t198 + 72U);
    t200 = *((char **)t199);
    t201 = (t0 + 3048);
    t202 = (t201 + 64U);
    t203 = *((char **)t202);
    t205 = (t0 + 1208U);
    t206 = *((char **)t205);
    memset(t204, 0, 8);
    t205 = (t204 + 4);
    t207 = (t206 + 4);
    t208 = *((unsigned int *)t206);
    t209 = (t208 >> 2);
    *((unsigned int *)t204) = t209;
    t210 = *((unsigned int *)t207);
    t211 = (t210 >> 2);
    *((unsigned int *)t205) = t211;
    t212 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t212 & 1023U);
    t213 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t213 & 1023U);
    xsi_vlog_generic_get_array_select_value(t197, 32, t196, t200, t203, 2, 1, t204, 10, 2);
    memset(t214, 0, 8);
    t215 = (t214 + 4);
    t216 = (t197 + 4);
    t217 = *((unsigned int *)t197);
    t218 = (t217 >> 0);
    *((unsigned int *)t214) = t218;
    t219 = *((unsigned int *)t216);
    t220 = (t219 >> 0);
    *((unsigned int *)t215) = t220;
    t221 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t221 & 255U);
    t222 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t222 & 255U);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t130, 8, t181, 8, t214, 8);
    goto LAB54;

LAB52:    memcpy(t130, t181, 8);
    goto LAB54;

}

static void NetDecl_66_4(char *t0)
{
    char t3[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng9)));
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 24, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 24, t4, 8);
    t16 = (t0 + 6112);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31U);
    t21 = (t0 + 5888);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_67_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t58 = (t0 + 6176);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t3, 8);
    xsi_driver_vfirst_trans(t58, 0, 31);
    t63 = (t0 + 5904);
    *((int *)t63) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2648U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 3048);
    t39 = (t33 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 3048);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 3048);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t49 = (t0 + 1208U);
    t50 = *((char **)t49);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 2);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 2);
    *((unsigned int *)t49) = t55;
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 1023U);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 1023U);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t48, 10, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

}


extern void work_m_16345734821839423839_2924402094_init()
{
	static char *pe[] = {(void *)NetDecl_32_0,(void *)Initial_35_1,(void *)Always_40_2,(void *)NetDecl_62_3,(void *)NetDecl_66_4,(void *)Cont_67_5};
	xsi_register_didat("work_m_16345734821839423839_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_16345734821839423839_2924402094.didat");
	xsi_register_executes(pe);
}

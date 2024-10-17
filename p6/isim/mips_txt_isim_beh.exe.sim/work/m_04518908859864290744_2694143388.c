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
static const char *ng0 = "/home/co-eda/p6/DE.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static int ng8[] = {24, 0};
static int ng9[] = {16, 0};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {30U, 0U};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t39[8];
    char t61[8];
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
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1528U);
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
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 3U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 3U);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t28 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB17;

LAB14:    if (t51 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t39) = 1;

LAB17:    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
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
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB25;

LAB22:    if (t26 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t28) = 1;

LAB25:    t22 = (t28 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
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
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB33;

LAB30:    if (t26 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t28) = 1;

LAB33:    t22 = (t28 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);

LAB38:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);

LAB36:
LAB28:
LAB20:    goto LAB12;

LAB16:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(34, ng0);

LAB21:    xsi_set_current_line(35, ng0);
    t62 = (t0 + 1208U);
    t63 = *((char **)t62);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t64 = (t63 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (t65 >> 0);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 0);
    *((unsigned int *)t62) = t68;
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 255U);
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 & 255U);
    t71 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t71, t61, 0, 0, 8, 0LL);
    goto LAB20;

LAB24:    t21 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(37, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t39, 0, 8);
    t29 = (t39 + 4);
    t31 = (t30 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (t42 >> 8);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t31);
    t45 = (t44 >> 8);
    *((unsigned int *)t29) = t45;
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 255U);
    t47 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t47 & 255U);
    t38 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 8, 0LL);
    goto LAB28;

LAB32:    t21 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(40, ng0);

LAB37:    xsi_set_current_line(41, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t39, 0, 8);
    t29 = (t39 + 4);
    t31 = (t30 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (t42 >> 16);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t31);
    t45 = (t44 >> 16);
    *((unsigned int *)t29) = t45;
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 255U);
    t47 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t47 & 255U);
    t38 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 8, 0LL);
    goto LAB36;

LAB41:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(47, ng0);

LAB46:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1008U);
    t29 = (t21 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t28, 32, t22, t30, 2, t31, 32, 1);
    t38 = ((char*)((ng7)));
    memset(t39, 0, 8);
    t40 = (t28 + 4);
    t41 = (t38 + 4);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t38);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t40);
    t36 = *((unsigned int *)t41);
    t37 = (t35 ^ t36);
    t42 = (t34 | t37);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB50;

LAB47:    if (t45 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t39) = 1;

LAB50:    t55 = (t39 + 4);
    t48 = *((unsigned int *)t55);
    t49 = (~(t48));
    t50 = *((unsigned int *)t39);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(51, ng0);

LAB55:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 16, 0LL);

LAB53:    goto LAB45;

LAB49:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(48, ng0);

LAB54:    xsi_set_current_line(49, ng0);
    t62 = (t0 + 1208U);
    t63 = *((char **)t62);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t64 = (t63 + 4);
    t53 = *((unsigned int *)t63);
    t56 = (t53 >> 0);
    *((unsigned int *)t61) = t56;
    t57 = *((unsigned int *)t64);
    t58 = (t57 >> 0);
    *((unsigned int *)t62) = t58;
    t59 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t59 & 65535U);
    t60 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t60 & 65535U);
    t71 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t71, t61, 0, 0, 16, 0LL);
    goto LAB53;

}

static void NetDecl_56_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 5256);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0U);
    t52 = (t0 + 5128);
    *((int *)t52) = 1;

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

LAB12:    t33 = ((char*)((ng6)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng7)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void NetDecl_57_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
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

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 5320);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0U);
    t52 = (t0 + 5144);
    *((int *)t52) = 1;

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

LAB12:    t33 = ((char*)((ng6)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng7)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_58_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t20[8];
    char t25[8];
    char t38[8];
    char t39[8];
    char t52[8];
    char t56[8];
    char t61[8];
    char t74[8];
    char t75[8];
    char t78[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
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
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2008U);
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

LAB9:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t38, 8);

LAB16:    t105 = (t0 + 5384);
    t112 = (t105 + 56U);
    t113 = *((char **)t112);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    memcpy(t115, t3, 8);
    xsi_driver_vfirst_trans(t105, 0, 31);
    t116 = (t0 + 5160);
    *((int *)t116) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 7);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 7);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    xsi_vlog_mul_concat(t20, 24, 1, t21, 1U, t25, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t20, 24, t19, 8);
    goto LAB9;

LAB10:    t40 = (t0 + 2168U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t41 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t40) != 0)
        goto LAB19;

LAB20:    t48 = (t39 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB21;

LAB22:    t70 = *((unsigned int *)t39);
    t71 = (~(t70));
    t72 = *((unsigned int *)t48);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t48) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t39) > 0)
        goto LAB27;

LAB28:    memcpy(t38, t74, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t38, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t39) = 1;
    goto LAB20;

LAB19:    t47 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB20;

LAB21:    t53 = (t0 + 2728);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t57 = ((char*)((ng9)));
    t58 = (t0 + 2728);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 15);
    t66 = (t65 & 1);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 15);
    t69 = (t68 & 1);
    *((unsigned int *)t62) = t69;
    xsi_vlog_mul_concat(t56, 16, 1, t57, 1U, t61, 1);
    xsi_vlogtype_concat(t52, 32, 32, 2U, t56, 16, t55, 16);
    goto LAB22;

LAB23:    t76 = (t0 + 1528U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng10)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t76 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t76);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB33;

LAB30:    if (t90 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t78) = 1;

LAB33:    memset(t75, 0, 8);
    t94 = (t78 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t78);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t94) != 0)
        goto LAB36;

LAB37:    t101 = (t75 + 4);
    t102 = *((unsigned int *)t75);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB38;

LAB39:    t107 = *((unsigned int *)t75);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t101) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t75) > 0)
        goto LAB44;

LAB45:    memcpy(t74, t111, 8);

LAB46:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t38, 32, t52, 32, t74, 32);
    goto LAB29;

LAB27:    memcpy(t38, t52, 8);
    goto LAB29;

LAB32:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t75) = 1;
    goto LAB37;

LAB36:    t100 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1208U);
    t106 = *((char **)t105);
    goto LAB39;

LAB40:    t105 = (t0 + 1208U);
    t111 = *((char **)t105);
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t74, 32, t106, 32, t111, 32);
    goto LAB46;

LAB44:    memcpy(t74, t106, 8);
    goto LAB46;

}

static void Cont_62_4(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t2 = ((char*)((ng11)));
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t2);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t5 + 4);
    t11 = (t2 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 5448);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 31U;
    t44 = t43;
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans(t38, 0, 4);
    t51 = (t0 + 5176);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t2 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

}


extern void work_m_04518908859864290744_2694143388_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)NetDecl_56_1,(void *)NetDecl_57_2,(void *)Cont_58_3,(void *)Cont_62_4};
	xsi_register_didat("work_m_04518908859864290744_2694143388", "isim/mips_txt_isim_beh.exe.sim/work/m_04518908859864290744_2694143388.didat");
	xsi_register_executes(pe);
}

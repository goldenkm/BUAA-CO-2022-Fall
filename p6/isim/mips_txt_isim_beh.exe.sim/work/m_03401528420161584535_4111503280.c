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
static const char *ng0 = "/home/co-eda/p6/MDU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {10U, 0U};
static int ng5[] = {0, 0, 0, 0};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {31, 0};
static int ng14[] = {63, 0};
static int ng15[] = {32, 0};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {0U, 0U, 0U, 0U};



static void NetDecl_50_0(char *t0)
{
    char t3[16];
    char t5[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t2, 1, t4, 32);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 33, 33, 2U, t6, 1, t7, 32);
    xsi_vlog_unsigned_greatereq(t8, 33, t3, 33, t5, 33);
    t9 = (t0 + 6216);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 1U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 0U);
    t22 = (t0 + 6072);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_51_1(char *t0)
{
    char t13[8];
    char t31[16];
    char t32[16];
    char t33[16];
    char t34[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t38[8];
    char t52[16];
    char t53[16];
    char t54[16];
    char t55[16];
    char t56[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    char *t50;
    char *t51;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6088);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
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

LAB7:    xsi_set_current_line(60, ng0);

LAB10:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB25:
LAB17:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t28 = (t13 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB79;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB81:    t28 = (t13 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB82;

LAB83:
LAB84:
LAB76:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB89;

LAB86:    if (t18 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t13) = 1;

LAB89:    t28 = (t13 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB94:    if (t18 != 0)
        goto LAB96;

LAB97:    t28 = (t13 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB98;

LAB99:
LAB100:
LAB92:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(61, ng0);

LAB18:    xsi_set_current_line(62, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB17;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(64, ng0);

LAB26:    xsi_set_current_line(65, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB25;

LAB29:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);

LAB34:    xsi_set_current_line(68, ng0);
    t26 = (t0 + 3048);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB33;

LAB35:    xsi_set_current_line(72, ng0);

LAB38:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB39:    t4 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB50;

LAB51:
LAB53:
LAB52:    xsi_set_current_line(106, ng0);

LAB69:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB54:    goto LAB37;

LAB40:    xsi_set_current_line(74, ng0);

LAB55:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t31, 64, t12, 32);
    t11 = (t0 + 1528U);
    t26 = *((char **)t11);
    xsi_vlogtype_sign_extend(t32, 64, t26, 32);
    xsi_vlog_signed_multiply(t33, 64, t31, 64, t32, 64);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t33, 0, 0, 64, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB42:    xsi_set_current_line(79, ng0);

LAB56:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t31, 64, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 64, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_multiply(t33, 64, t31, 64, t32, 64);
    t26 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t26, t33, 0, 0, 64, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB44:    xsi_set_current_line(84, ng0);

LAB57:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t11 = *((char **)t3);
    memset(t35, 0, 8);
    xsi_vlog_signed_divide(t35, 32, t4, 32, t11, 32);
    t3 = (t0 + 3208);
    t12 = (t0 + 3208);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng13)));
    t29 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t27)), 2, t28, 32, 1, t29, 32, 1);
    t39 = (t36 + 4);
    t6 = *((unsigned int *)t39);
    t40 = (!(t6));
    t41 = (t37 + 4);
    t7 = *((unsigned int *)t41);
    t42 = (!(t7));
    t43 = (t40 && t42);
    t44 = (t38 + 4);
    t8 = *((unsigned int *)t44);
    t45 = (!(t8));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    xsi_vlog_signed_mod(t35, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    t11 = (t0 + 3208);
    t12 = (t11 + 72U);
    t26 = *((char **)t12);
    t27 = ((char*)((ng14)));
    t28 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t36, t37, t38, ((int*)(t26)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t36 + 4);
    t6 = *((unsigned int *)t29);
    t30 = (!(t6));
    t39 = (t37 + 4);
    t7 = *((unsigned int *)t39);
    t40 = (!(t7));
    t42 = (t30 && t40);
    t41 = (t38 + 4);
    t8 = *((unsigned int *)t41);
    t43 = (!(t8));
    t45 = (t42 && t43);
    if (t45 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB46:    xsi_set_current_line(90, ng0);

LAB62:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t31, 33, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 33, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_divide(t33, 33, t31, 33, t32, 33);
    t26 = (t0 + 3208);
    t27 = (t0 + 3208);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t39 = ((char*)((ng13)));
    t41 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t13, t34, t35, ((int*)(t29)), 2, t39, 32, 1, t41, 32, 1);
    t44 = (t13 + 4);
    t6 = *((unsigned int *)t44);
    t40 = (!(t6));
    t50 = (t34 + 4);
    t7 = *((unsigned int *)t50);
    t42 = (!(t7));
    t43 = (t40 && t42);
    t51 = (t35 + 4);
    t8 = *((unsigned int *)t51);
    t45 = (!(t8));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t31, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 33, 33, 2U, t4, 1, t11, 32);
    xsi_vlog_unsigned_mod(t33, 33, t31, 33, t32, 33);
    t12 = (t0 + 3208);
    t26 = (t0 + 3208);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng14)));
    t39 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t13, t34, t35, ((int*)(t28)), 2, t29, 32, 1, t39, 32, 1);
    t41 = (t13 + 4);
    t6 = *((unsigned int *)t41);
    t30 = (!(t6));
    t44 = (t34 + 4);
    t7 = *((unsigned int *)t44);
    t40 = (!(t7));
    t42 = (t30 && t40);
    t50 = (t35 + 4);
    t8 = *((unsigned int *)t50);
    t43 = (!(t8));
    t45 = (t42 && t43);
    if (t45 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB48:    xsi_set_current_line(96, ng0);

LAB67:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 3048);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t31, 64, 64, 2U, t27, 32, t11, 32);
    t28 = ((char*)((ng18)));
    t29 = (t0 + 1368U);
    t39 = *((char **)t29);
    xsi_vlogtype_sign_extend(t52, 64, t39, 32);
    t29 = (t0 + 1528U);
    t41 = *((char **)t29);
    xsi_vlogtype_sign_extend(t53, 64, t41, 32);
    xsi_vlog_signed_multiply(t54, 64, t52, 64, t53, 64);
    xsi_vlog_signed_add(t55, 64, t28, 64, t54, 64);
    xsi_vlog_unsigned_add(t56, 64, t31, 64, t55, 64);
    t29 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t29, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB50:    xsi_set_current_line(101, ng0);

LAB68:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 3048);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t31, 64, 64, 2U, t27, 32, t11, 32);
    t28 = ((char*)((ng18)));
    t29 = (t0 + 1368U);
    t39 = *((char **)t29);
    xsi_vlogtype_sign_extend(t52, 64, t39, 32);
    t29 = (t0 + 1528U);
    t41 = *((char **)t29);
    xsi_vlogtype_sign_extend(t53, 64, t41, 32);
    xsi_vlog_signed_multiply(t54, 64, t52, 64, t53, 64);
    xsi_vlog_signed_minus(t55, 64, t28, 64, t54, 64);
    xsi_vlog_unsigned_add(t56, 64, t31, 64, t55, 64);
    t29 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t29, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB54;

LAB58:    t9 = *((unsigned int *)t38);
    t47 = (t9 + 0);
    t10 = *((unsigned int *)t36);
    t14 = *((unsigned int *)t37);
    t48 = (t10 - t14);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t3, t35, t47, *((unsigned int *)t37), t49, 0LL);
    goto LAB59;

LAB60:    t9 = *((unsigned int *)t38);
    t46 = (t9 + 0);
    t10 = *((unsigned int *)t36);
    t14 = *((unsigned int *)t37);
    t47 = (t10 - t14);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t2, t35, t46, *((unsigned int *)t37), t48, 0LL);
    goto LAB61;

LAB63:    t9 = *((unsigned int *)t35);
    t47 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t34);
    t48 = (t10 - t14);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t26, t33, t47, *((unsigned int *)t34), t49, 0LL);
    goto LAB64;

LAB65:    t9 = *((unsigned int *)t35);
    t46 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t34);
    t47 = (t10 - t14);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t12, t33, t46, *((unsigned int *)t34), t48, 0LL);
    goto LAB66;

LAB72:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(113, ng0);

LAB77:    xsi_set_current_line(114, ng0);
    t29 = (t0 + 3208);
    t39 = (t29 + 56U);
    t41 = *((char **)t39);
    memset(t34, 0, 8);
    t44 = (t34 + 4);
    t50 = (t41 + 4);
    t57 = *((unsigned int *)t41);
    t58 = (t57 >> 0);
    *((unsigned int *)t34) = t58;
    t59 = *((unsigned int *)t50);
    t60 = (t59 >> 0);
    *((unsigned int *)t44) = t60;
    t61 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t61 & 4294967295U);
    t62 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t62 & 4294967295U);
    t51 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t51, t34, 0, 0, 32, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 8);
    t26 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 4294967295U);
    t27 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB76;

LAB79:    *((unsigned int *)t13) = 1;
    goto LAB81;

LAB80:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(119, ng0);

LAB85:    xsi_set_current_line(120, ng0);
    t29 = ((char*)((ng10)));
    t39 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t39, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB84;

LAB88:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(123, ng0);

LAB93:    xsi_set_current_line(124, ng0);
    t29 = (t0 + 3208);
    t39 = (t29 + 56U);
    t41 = *((char **)t39);
    memset(t34, 0, 8);
    t44 = (t34 + 4);
    t50 = (t41 + 4);
    t57 = *((unsigned int *)t41);
    t58 = (t57 >> 0);
    *((unsigned int *)t34) = t58;
    t59 = *((unsigned int *)t50);
    t60 = (t59 >> 0);
    *((unsigned int *)t44) = t60;
    t61 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t61 & 4294967295U);
    t62 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t62 & 4294967295U);
    t51 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t51, t34, 0, 0, 32, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 8);
    t26 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 4294967295U);
    t27 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB92;

LAB95:    *((unsigned int *)t13) = 1;
    goto LAB97;

LAB96:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(129, ng0);

LAB101:    xsi_set_current_line(130, ng0);
    t29 = ((char*)((ng10)));
    t39 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t39, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t11, 32);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB100;

}

static void Cont_135_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6104);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_136_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6120);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_137_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6136);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_03401528420161584535_4111503280_init()
{
	static char *pe[] = {(void *)NetDecl_50_0,(void *)Always_51_1,(void *)Cont_135_2,(void *)Cont_136_3,(void *)Cont_137_4};
	xsi_register_didat("work_m_03401528420161584535_4111503280", "isim/mips_txt_isim_beh.exe.sim/work/m_03401528420161584535_4111503280.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "/home/co-eda/ISE/p1/Expr/expr.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {48, 0};
static int ng4[] = {57, 0};
static int ng5[] = {43, 0};
static int ng6[] = {42, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_36_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t40[8];
    char t43[8];
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
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
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
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
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
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);

LAB25:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(41, ng0);

LAB26:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t21 = (t8 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB28;

LAB27:    t22 = (t7 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t8) < *((unsigned int *)t7))
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB30:    memset(t31, 0, 8);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t29) != 0)
        goto LAB34;

LAB35:    t33 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t33);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB36;

LAB37:    memcpy(t43, t31, 8);

LAB38:    t71 = (t43 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB53:    goto LAB25;

LAB17:    xsi_set_current_line(48, ng0);

LAB55:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
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
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB63:    t29 = (t31 + 4);
    t47 = *((unsigned int *)t31);
    t48 = (!(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB64;

LAB65:    memcpy(t43, t31, 8);

LAB66:    t53 = (t43 + 4);
    t95 = *((unsigned int *)t53);
    t96 = (~(t95));
    t97 = *((unsigned int *)t43);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB83;

LAB82:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;

LAB85:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t21) != 0)
        goto LAB89;

LAB90:    t28 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB91;

LAB92:    memcpy(t43, t31, 8);

LAB93:    t46 = (t43 + 4);
    t72 = *((unsigned int *)t46);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB108:
LAB80:    goto LAB25;

LAB19:    xsi_set_current_line(58, ng0);

LAB110:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB112;

LAB111:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB112;

LAB115:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB114;

LAB113:    *((unsigned int *)t6) = 1;

LAB114:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t22) != 0)
        goto LAB118;

LAB119:    t29 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB120;

LAB121:    memcpy(t43, t31, 8);

LAB122:    t53 = (t43 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB137:    goto LAB25;

LAB21:    xsi_set_current_line(65, ng0);

LAB139:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB141;

LAB140:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB141;

LAB144:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB143;

LAB142:    *((unsigned int *)t6) = 1;

LAB143:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t22) != 0)
        goto LAB147;

LAB148:    t29 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB149;

LAB150:    memcpy(t43, t31, 8);

LAB151:    t53 = (t43 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB171;

LAB168:    if (t18 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t6) = 1;

LAB171:    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t21) != 0)
        goto LAB174;

LAB175:    t28 = (t31 + 4);
    t47 = *((unsigned int *)t31);
    t48 = (!(t47));
    t49 = *((unsigned int *)t28);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB176;

LAB177:    memcpy(t43, t31, 8);

LAB178:    t46 = (t43 + 4);
    t95 = *((unsigned int *)t46);
    t96 = (~(t95));
    t97 = *((unsigned int *)t43);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB190;

LAB191:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB192:
LAB166:    goto LAB25;

LAB28:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t31) = 1;
    goto LAB35;

LAB34:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB35;

LAB36:    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB40;

LAB39:    t38 = (t34 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t35) > *((unsigned int *)t34))
        goto LAB42;

LAB41:    *((unsigned int *)t36) = 1;

LAB42:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t41) != 0)
        goto LAB46;

LAB47:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t27 | t47);
    *((unsigned int *)t46) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB38;

LAB40:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t40) = 1;
    goto LAB47;

LAB46:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB47;

LAB48:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t51 | t52);
    t53 = (t31 + 4);
    t54 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB50;

LAB51:    xsi_set_current_line(42, ng0);

LAB54:    xsi_set_current_line(43, ng0);
    t77 = ((char*)((ng2)));
    t78 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 2, 0LL);
    goto LAB53;

LAB58:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t31) = 1;
    goto LAB63;

LAB62:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB64:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t51 = *((unsigned int *)t33);
    t52 = *((unsigned int *)t32);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t35);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t34);
    t61 = *((unsigned int *)t35);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB70;

LAB67:    if (t62 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t36) = 1;

LAB70:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t69 = *((unsigned int *)t36);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t38) != 0)
        goto LAB73;

LAB74:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t40);
    t75 = (t73 | t74);
    *((unsigned int *)t43) = t75;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t76 = *((unsigned int *)t41);
    t79 = *((unsigned int *)t42);
    t80 = (t76 | t79);
    *((unsigned int *)t44) = t80;
    t81 = *((unsigned int *)t44);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t40) = 1;
    goto LAB74;

LAB73:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB74;

LAB75:    t83 = *((unsigned int *)t43);
    t84 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t83 | t84);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t85 = *((unsigned int *)t45);
    t86 = (~(t85));
    t87 = *((unsigned int *)t31);
    t63 = (t87 & t86);
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t40);
    t64 = (t90 & t89);
    t91 = (~(t63));
    t92 = (~(t64));
    t93 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t93 & t91);
    t94 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t94 & t92);
    goto LAB77;

LAB78:    xsi_set_current_line(49, ng0);

LAB81:    xsi_set_current_line(50, ng0);
    t54 = ((char*)((ng7)));
    t71 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    goto LAB80;

LAB83:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB85;

LAB87:    *((unsigned int *)t31) = 1;
    goto LAB90;

LAB89:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB90;

LAB91:    t29 = (t0 + 1368U);
    t32 = *((char **)t29);
    t29 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t33 = (t32 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB95;

LAB94:    t34 = (t29 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t32) > *((unsigned int *)t29))
        goto LAB97;

LAB96:    *((unsigned int *)t36) = 1;

LAB97:    memset(t40, 0, 8);
    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t37) != 0)
        goto LAB101;

LAB102:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t39 = (t31 + 4);
    t41 = (t40 + 4);
    t42 = (t43 + 4);
    t27 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t41);
    t48 = (t27 | t47);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t42);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB93;

LAB95:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB97;

LAB99:    *((unsigned int *)t40) = 1;
    goto LAB102;

LAB101:    t38 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB102;

LAB103:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t51 | t52);
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t30 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t30));
    t66 = (~(t63));
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB105;

LAB106:    xsi_set_current_line(52, ng0);

LAB109:    xsi_set_current_line(53, ng0);
    t53 = ((char*)((ng8)));
    t54 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    goto LAB108;

LAB112:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB114;

LAB116:    *((unsigned int *)t31) = 1;
    goto LAB119;

LAB118:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB119;

LAB120:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB124;

LAB123:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB124;

LAB127:    if (*((unsigned int *)t33) > *((unsigned int *)t32))
        goto LAB126;

LAB125:    *((unsigned int *)t36) = 1;

LAB126:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t38) != 0)
        goto LAB130;

LAB131:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t27 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t27 | t47);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB122;

LAB124:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB126;

LAB128:    *((unsigned int *)t40) = 1;
    goto LAB131;

LAB130:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB131;

LAB132:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t51 | t52);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t45);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB134;

LAB135:    xsi_set_current_line(59, ng0);

LAB138:    xsi_set_current_line(60, ng0);
    t54 = ((char*)((ng2)));
    t71 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    goto LAB137;

LAB141:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB143;

LAB145:    *((unsigned int *)t31) = 1;
    goto LAB148;

LAB147:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB148;

LAB149:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB153;

LAB152:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB153;

LAB156:    if (*((unsigned int *)t33) > *((unsigned int *)t32))
        goto LAB155;

LAB154:    *((unsigned int *)t36) = 1;

LAB155:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t38) != 0)
        goto LAB159;

LAB160:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t27 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t27 | t47);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB151;

LAB153:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB155;

LAB157:    *((unsigned int *)t40) = 1;
    goto LAB160;

LAB159:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB160;

LAB161:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t51 | t52);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t45);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB163;

LAB164:    xsi_set_current_line(66, ng0);

LAB167:    xsi_set_current_line(67, ng0);
    t54 = ((char*)((ng8)));
    t71 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    goto LAB166;

LAB170:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB171;

LAB172:    *((unsigned int *)t31) = 1;
    goto LAB175;

LAB174:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB175;

LAB176:    t29 = (t0 + 1368U);
    t32 = *((char **)t29);
    t29 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t33 = (t32 + 4);
    t34 = (t29 + 4);
    t51 = *((unsigned int *)t32);
    t52 = *((unsigned int *)t29);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t33);
    t57 = *((unsigned int *)t34);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t33);
    t61 = *((unsigned int *)t34);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB182;

LAB179:    if (t62 != 0)
        goto LAB181;

LAB180:    *((unsigned int *)t36) = 1;

LAB182:    memset(t40, 0, 8);
    t37 = (t36 + 4);
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t36);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB183;

LAB184:    if (*((unsigned int *)t37) != 0)
        goto LAB185;

LAB186:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t40);
    t75 = (t73 | t74);
    *((unsigned int *)t43) = t75;
    t39 = (t31 + 4);
    t41 = (t40 + 4);
    t42 = (t43 + 4);
    t76 = *((unsigned int *)t39);
    t79 = *((unsigned int *)t41);
    t80 = (t76 | t79);
    *((unsigned int *)t42) = t80;
    t81 = *((unsigned int *)t42);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB187;

LAB188:
LAB189:    goto LAB178;

LAB181:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB182;

LAB183:    *((unsigned int *)t40) = 1;
    goto LAB186;

LAB185:    t38 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB186;

LAB187:    t83 = *((unsigned int *)t43);
    t84 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t83 | t84);
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t85 = *((unsigned int *)t44);
    t86 = (~(t85));
    t87 = *((unsigned int *)t31);
    t30 = (t87 & t86);
    t88 = *((unsigned int *)t45);
    t89 = (~(t88));
    t90 = *((unsigned int *)t40);
    t63 = (t90 & t89);
    t91 = (~(t30));
    t92 = (~(t63));
    t93 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t93 & t91);
    t94 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t94 & t92);
    goto LAB189;

LAB190:    xsi_set_current_line(69, ng0);

LAB193:    xsi_set_current_line(70, ng0);
    t53 = ((char*)((ng7)));
    t54 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    goto LAB192;

}

static void Always_79_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    t3 = (t0 + 3528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Cont_82_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 4440);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 4344);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_83_4(char *t0)
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

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
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
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 4360);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_04210100180534820728_1212989544_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_36_1,(void *)Always_79_2,(void *)Cont_82_3,(void *)Cont_83_4};
	xsi_register_didat("work_m_04210100180534820728_1212989544", "isim/expr_tb_isim_beh.exe.sim/work/m_04210100180534820728_1212989544.didat");
	xsi_register_executes(pe);
}

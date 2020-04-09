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
static const char *ng0 = "/home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_3/cpu_moduler/alu.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {18, 0};
static int ng8[] = {19, 0};
static int ng9[] = {20, 0};
static int ng10[] = {21, 0};
static int ng11[] = {22, 0};
static int ng12[] = {23, 0};
static int ng13[] = {24, 0};
static int ng14[] = {25, 0};
static int ng15[] = {26, 0};
static int ng16[] = {27, 0};
static int ng17[] = {28, 0};
static int ng18[] = {29, 0};
static int ng19[] = {30, 0};
static int ng20[] = {31, 0};
static int ng21[] = {32, 0};
static int ng22[] = {33, 0};
static int ng23[] = {34, 0};
static int ng24[] = {35, 0};
static int ng25[] = {36, 0};



static void Always_24_0(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3888);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1688U);
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

LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_30_1(char *t0)
{
    char t7[8];
    char t10[8];
    char t13[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3904);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:
LAB58:
LAB57:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB59:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 2408);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t9, 32, t12, 32);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t13, 32, t14, 32);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB59;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t9, 32);
    t11 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_not_equal(t15, 32, t13, 32, t11, 32);
    t12 = (t15 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB59;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t9, 32);
    t11 = (t13 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB59;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t4, 32, t9, 32);
    t11 = (t13 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB59;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB73;

LAB72:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB74;

LAB75:    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB59;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB81;

LAB80:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB83;

LAB82:    *((unsigned int *)t7) = 1;

LAB83:    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB59;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t9, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB21:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t9, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB59;

LAB23:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB89;

LAB88:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB89;

LAB92:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB90;

LAB91:    t16 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB25:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB93;

LAB94:
LAB95:    t16 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB27:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB96;

LAB97:
LAB98:    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB29:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 & t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB99;

LAB100:
LAB101:    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB31:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t10, 0, 0, 32, 0LL);
    goto LAB59;

LAB33:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t10, 0, 0, 32, 0LL);
    goto LAB59;

LAB35:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t13, 0, 8);
    xsi_vlog_signed_arith_rshift(t13, 32, t4, 32, t10, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB59;

LAB37:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t9, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB39:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t9, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB41:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t10, 0, 0, 32, 0LL);
    goto LAB59;

LAB43:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t9, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB59;

LAB45:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB103;

LAB102:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB104;

LAB105:    t16 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB47:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB107;

LAB108:
LAB109:    t16 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB49:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t10, 0, 0, 32, 0LL);
    goto LAB59;

LAB51:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    *((unsigned int *)t11) = t20;
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t21 & 15U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 15U);
    memset(t13, 0, 8);
    xsi_vlog_signed_arith_rshift(t13, 32, t4, 32, t10, 4);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB59;

LAB53:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB110;

LAB111:
LAB112:    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB55:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t9);
    t19 = (t17 & t18);
    *((unsigned int *)t7) = t19;
    t11 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = (t7 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t24 = (t20 | t21);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t14);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB113;

LAB114:
LAB115:    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t7, 0, 0, 32, 0LL);
    goto LAB59;

LAB60:    xsi_set_current_line(32, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 1, 0LL);
    goto LAB62;

LAB63:    xsi_set_current_line(33, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 1, 0LL);
    goto LAB65;

LAB66:    xsi_set_current_line(34, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 1, 0LL);
    goto LAB68;

LAB69:    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 1, 0LL);
    goto LAB71;

LAB73:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t7) = 1;
    goto LAB75;

LAB77:    xsi_set_current_line(36, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 1, 0LL);
    goto LAB79;

LAB81:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB83;

LAB85:    xsi_set_current_line(37, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 1, 0LL);
    goto LAB87;

LAB89:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB91;

LAB90:    *((unsigned int *)t7) = 1;
    goto LAB91;

LAB93:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    goto LAB95;

LAB96:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t38);
    goto LAB98;

LAB99:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t33 = (~(t31));
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t32 = (t30 & t33);
    t36 = (t35 & t38);
    t39 = (~(t32));
    t40 = (~(t36));
    t41 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t40);
    t43 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t43 & t39);
    t44 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t44 & t40);
    goto LAB101;

LAB103:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t7) = 1;
    goto LAB105;

LAB107:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    goto LAB109;

LAB110:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t38);
    goto LAB112;

LAB113:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t27 | t28);
    t16 = (t4 + 4);
    t22 = (t9 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t33 = (~(t31));
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t32 = (t30 & t33);
    t36 = (t35 & t38);
    t39 = (~(t32));
    t40 = (~(t36));
    t41 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t40);
    t43 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t43 & t39);
    t44 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t44 & t40);
    goto LAB115;

}


extern void work_m_15953114902393303765_2725559894_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_30_1};
	xsi_register_didat("work_m_15953114902393303765_2725559894", "isim/cpu_tb_isim_beh.exe.sim/work/m_15953114902393303765_2725559894.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "/home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_3/cpu_moduler/dmem.v";
static const char *ng1 = "dmem_ini_moduler.mem";
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {4294967292U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {8U, 0U};
static int ng14[] = {5, 0};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {12U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {15U, 0U};



static void Initial_31_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2888);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t4[8];
    char t8[8];
    char t19[8];
    char t30[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6264);
    *((int *)t2) = 1;
    t3 = (t0 + 4240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 2888);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2888);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t8, 8, t7, t11, t14, 2, 1, t15, 32, 1);
    t16 = (t0 + 2888);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2888);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t26, 32, 1);
    t27 = (t0 + 2888);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 2888);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2888);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t30, 8, t29, t33, t36, 2, 1, t37, 32, 1);
    t38 = (t0 + 2888);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 2888);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2888);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t41, 8, t40, t44, t47, 2, 1, t48, 32, 1);
    xsi_vlogtype_concat(t4, 32, 32, 4U, t41, 8, t30, 8, t19, 8, t8, 8);
    t49 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t49, t4, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Cont_42_2(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng7)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 6456);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 6280);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_43_3(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng8)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 6520);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 6296);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_44_4(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng9)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 6584);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 6312);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_45_5(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 5200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng10)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 6648);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 6328);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_47_6(char *t0)
{
    char t3[8];
    char t6[8];
    char t17[8];
    char t28[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 5448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2888);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1848U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2888);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 2888);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2888);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2008U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t17, 8, t16, t20, t23, 2, 1, t25, 32, 2);
    t24 = (t0 + 2888);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 2888);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2888);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2168U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t28, 8, t27, t31, t34, 2, 1, t36, 32, 2);
    t35 = (t0 + 2888);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 2888);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2888);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 2328U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_array_select_value(t39, 8, t38, t42, t45, 2, 1, t47, 32, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t39, 8, t28, 8, t17, 8, t6, 8);
    t46 = (t0 + 6712);
    t48 = (t46 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t3, 8);
    xsi_driver_vfirst_trans(t46, 0, 31);
    t52 = (t0 + 6344);
    *((int *)t52) = 1;

LAB1:    return;
}

static void Always_49_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6360);
    *((int *)t2) = 1;
    t3 = (t0 + 5728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);
    t7 = ((char*)((ng7)));
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 4, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB25;

}

static void Always_65_8(char *t0)
{
    char t7[8];
    char t13[8];
    char t35[8];
    char t46[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6376);
    *((int *)t2) = 1;
    t3 = (t0 + 5976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 3048);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t10, 2, t11, 32, 1);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t14 = (t7 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t13) = 1;

LAB9:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t15 = (t13 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB27;

LAB24:    if (t25 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t13) = 1;

LAB27:    t15 = (t13 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB36;

LAB33:    if (t25 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB36:    t15 = (t13 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB8:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 255U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 255U);
    t45 = (t0 + 2888);
    t48 = (t0 + 2888);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2888);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = (t0 + 1848U);
    t55 = *((char **)t54);
    xsi_vlog_generic_convert_array_indices(t46, t47, t50, t53, 2, 1, t55, 32, 2);
    t54 = (t46 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (!(t56));
    t58 = (t47 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t45, t35, 0, *((unsigned int *)t47), t65);
    goto LAB14;

LAB17:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(69, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t36 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 8);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t36);
    t42 = (t41 >> 8);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t37 = (t0 + 2888);
    t38 = (t0 + 2888);
    t45 = (t38 + 72U);
    t48 = *((char **)t45);
    t49 = (t0 + 2888);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 2008U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t46, t47, t48, t51, 2, 1, t53, 32, 2);
    t52 = (t46 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (!(t56));
    t54 = (t47 + 4);
    t59 = *((unsigned int *)t54);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t37, t35, 0, *((unsigned int *)t47), t65);
    goto LAB23;

LAB26:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(71, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t36 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 16);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t36);
    t42 = (t41 >> 16);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t37 = (t0 + 2888);
    t38 = (t0 + 2888);
    t45 = (t38 + 72U);
    t48 = *((char **)t45);
    t49 = (t0 + 2888);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 2168U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t46, t47, t48, t51, 2, 1, t53, 32, 2);
    t52 = (t46 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (!(t56));
    t54 = (t47 + 4);
    t59 = *((unsigned int *)t54);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB31;

LAB32:    goto LAB30;

LAB31:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t37, t35, 0, *((unsigned int *)t47), t65);
    goto LAB32;

LAB35:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(73, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t35, 0, 8);
    t28 = (t35 + 4);
    t36 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (t39 >> 24);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t36);
    t42 = (t41 >> 24);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t37 = (t0 + 2888);
    t38 = (t0 + 2888);
    t45 = (t38 + 72U);
    t48 = *((char **)t45);
    t49 = (t0 + 2888);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 2328U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t46, t47, t48, t51, 2, 1, t53, 32, 2);
    t52 = (t46 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (!(t56));
    t54 = (t47 + 4);
    t59 = *((unsigned int *)t54);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t37, t35, 0, *((unsigned int *)t47), t65);
    goto LAB41;

}


extern void work_m_17940884201837979142_1352674679_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_34_1,(void *)Cont_42_2,(void *)Cont_43_3,(void *)Cont_44_4,(void *)Cont_45_5,(void *)Cont_47_6,(void *)Always_49_7,(void *)Always_65_8};
	xsi_register_didat("work_m_17940884201837979142_1352674679", "isim/cpu_tb_isim_beh.exe.sim/work/m_17940884201837979142_1352674679.didat");
	xsi_register_executes(pe);
}

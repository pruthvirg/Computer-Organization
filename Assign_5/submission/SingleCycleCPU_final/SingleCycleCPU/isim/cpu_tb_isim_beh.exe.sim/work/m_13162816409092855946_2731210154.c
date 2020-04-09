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
static const char *ng0 = "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU_final/SingleCycleCPU/imem.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {4019U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2147487927U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {16777527U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {537927715U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {538976803U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {537928227U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {545268099U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {549462531U, 0U};
static unsigned int ng18[] = {0U, 0U};



static void Initial_7_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t25[8];
    char t26[8];
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
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
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
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;

LAB0:    xsi_set_current_line(7, ng0);

LAB2:    xsi_set_current_line(8, ng0);
    xsi_set_current_line(8, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1768);
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
LAB4:    xsi_set_current_line(9, ng0);

LAB6:    xsi_set_current_line(10, ng0);
    t12 = (t0 + 1768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t14, 32, t15, 32);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(12, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng10)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng12)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng14)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng16)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng18)));
    t2 = (t0 + 1608);
    t3 = (t0 + 1608);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1608);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1768);
    t17 = (t15 + 56U);
    t23 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t23, 32, 1);
    t24 = (t5 + 4);
    t7 = *((unsigned int *)t24);
    t38 = (!(t7));
    t27 = (t16 + 4);
    t8 = *((unsigned int *)t27);
    t41 = (!(t8));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB47;

LAB48:
LAB44:
LAB39:
LAB34:
LAB29:
LAB24:
LAB19:
LAB14:
LAB9:    xsi_set_current_line(8, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    xsi_set_current_line(11, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 1608);
    t27 = (t0 + 1608);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 1608);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1768);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t25, t26, t29, t32, 2, 1, t35, 32, 1);
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB10;

LAB11:    goto LAB9;

LAB10:    t43 = *((unsigned int *)t25);
    t44 = *((unsigned int *)t26);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t24, t23, 0, *((unsigned int *)t26), t46);
    goto LAB11;

LAB12:    xsi_set_current_line(13, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB15;

LAB16:    goto LAB14;

LAB15:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB16;

LAB17:    xsi_set_current_line(15, ng0);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB21;

LAB22:    xsi_set_current_line(17, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB25;

LAB26:    goto LAB24;

LAB25:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB26;

LAB27:    xsi_set_current_line(19, ng0);
    t12 = ((char*)((ng11)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB30:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB31;

LAB32:    xsi_set_current_line(21, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB35;

LAB36:    goto LAB34;

LAB35:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB36;

LAB37:    xsi_set_current_line(23, ng0);
    t12 = ((char*)((ng15)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB41;

LAB42:    xsi_set_current_line(25, ng0);
    t12 = ((char*)((ng17)));
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t23 = (t0 + 1608);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t16, t25, t17, t27, 2, 1, t30, 32, 1);
    t31 = (t16 + 4);
    t18 = *((unsigned int *)t31);
    t38 = (!(t18));
    t32 = (t25 + 4);
    t19 = *((unsigned int *)t32);
    t41 = (!(t19));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB45;

LAB46:    goto LAB44;

LAB45:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t45 = (t20 - t21);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t25), t46);
    goto LAB46;

LAB47:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t45 = (t9 - t10);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t46);
    goto LAB48;

}

static void Cont_32_1(char *t0)
{
    char t5[8];
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1608);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1073741823U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1073741823U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 30, 2);
    t22 = (t0 + 3328);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 3248);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_13162816409092855946_2731210154_init()
{
	static char *pe[] = {(void *)Initial_7_0,(void *)Cont_32_1};
	xsi_register_didat("work_m_13162816409092855946_2731210154", "isim/cpu_tb_isim_beh.exe.sim/work/m_13162816409092855946_2731210154.didat");
	xsi_register_executes(pe);
}

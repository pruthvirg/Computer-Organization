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
static const char *ng0 = "/home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_3/cpu_moduler/pc_candidate_generation_module.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t25[8];
    char t56[8];
    char t71[8];
    char t78[8];
    char t115[8];
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
    char *t13;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
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
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
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
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t2) != 0)
        goto LAB11;

LAB12:    t5 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB13;

LAB14:    memcpy(t25, t14, 8);

LAB15:    memset(t56, 0, 8);
    t57 = (t25 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t25);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t57) != 0)
        goto LAB25;

LAB26:    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = (!(t65));
    t67 = *((unsigned int *)t64);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB27;

LAB28:    memcpy(t78, t56, 8);

LAB29:    t106 = (t78 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t78);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t14, 0, 0, 32, 0LL);

LAB39:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t12, 32, t13, 32);
    t11 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_lshift(t15, 32, t14, 32, t11, 32);
    t16 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB13:    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t12 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t11) != 0)
        goto LAB18;

LAB19:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t15);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t16 = (t14 + 4);
    t29 = (t15 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB15;

LAB16:    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB18:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB20:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t14 + 4);
    t39 = (t15 + 4);
    t40 = *((unsigned int *)t14);
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
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB22;

LAB23:    *((unsigned int *)t56) = 1;
    goto LAB26;

LAB25:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB26;

LAB27:    t69 = (t0 + 1688U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t70 + 4);
    t72 = *((unsigned int *)t69);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t69) != 0)
        goto LAB32;

LAB33:    t79 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = (t56 + 4);
    t83 = (t71 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t71) = 1;
    goto LAB33;

LAB32:    t77 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB33;

LAB34:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t56 + 4);
    t93 = (t71 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t56);
    t97 = (t96 & t95);
    t98 = *((unsigned int *)t93);
    t99 = (~(t98));
    t100 = *((unsigned int *)t71);
    t101 = (t100 & t99);
    t102 = (~(t97));
    t103 = (~(t101));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    goto LAB36;

LAB37:    xsi_set_current_line(28, ng0);
    t112 = (t0 + 1048U);
    t113 = *((char **)t112);
    t112 = (t0 + 1208U);
    t114 = *((char **)t112);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_add(t115, 32, t113, 32, t114, 32);
    t112 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t112, t115, 0, 0, 32, 0LL);
    goto LAB39;

}


extern void work_m_05496639870504252608_2503317288_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_05496639870504252608_2503317288", "isim/cpu_tb_isim_beh.exe.sim/work/m_05496639870504252608_2503317288.didat");
	xsi_register_executes(pe);
}

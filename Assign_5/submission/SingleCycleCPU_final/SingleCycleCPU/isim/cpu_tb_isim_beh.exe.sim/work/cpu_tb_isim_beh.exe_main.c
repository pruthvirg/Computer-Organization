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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_13757352218222066433_2347679131_init();
    work_m_04537331432565090790_2725559894_init();
    work_m_07180342803942430888_3335238582_init();
    work_m_01143012847317641904_1200043877_init();
    work_m_10890567288289495221_1352674679_init();
    work_m_13162816409092855946_2731210154_init();
    work_m_14670560565787657432_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_14670560565787657432_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}

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
    work_m_06271383389641442952_2058220583_init();
    work_m_17861128042778047219_1733832700_init();
    work_m_13607153160851576193_0467708899_init();
    work_m_14291181776866250923_2609156571_init();
    work_m_11555193254362169842_0621066737_init();
    work_m_17644247152014876398_3298408361_init();
    work_m_11998032899422641192_3074850086_init();
    work_m_00302951999807477306_0886308060_init();
    work_m_16345734821839423839_2924402094_init();
    work_m_14291181776866250923_2079096248_init();
    work_m_15222664087064131246_0358683917_init();
    work_m_15326970707227533261_3979377396_init();
    work_m_15037816341982021193_3877310806_init();
    work_m_05916939032839477016_0258635663_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05916939032839477016_0258635663");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}

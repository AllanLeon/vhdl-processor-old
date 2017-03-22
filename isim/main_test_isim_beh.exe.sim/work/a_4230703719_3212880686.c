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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/UPB/9no Semestre/Arquitectura y tecnologia de procesadores/VHDL/Processor/instruction_register.vhd";



static void work_a_4230703719_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 5721);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t2 = (t0 + 5745);
    t15 = xsi_mem_cmp(t2, t7, 2U);
    if (t15 == 1)
        goto LAB14;

LAB18:    t9 = (t0 + 5747);
    t16 = xsi_mem_cmp(t9, t7, 2U);
    if (t16 == 1)
        goto LAB15;

LAB19:    t17 = (t0 + 5749);
    t19 = xsi_mem_cmp(t17, t7, 2U);
    if (t19 == 1)
        goto LAB16;

LAB20:
LAB17:
LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(53, ng0);
    t20 = (t0 + 1672U);
    t21 = *((char **)t20);
    t20 = (t0 + 3392);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t21, 8U);
    xsi_driver_first_trans_delta(t20, 0U, 8U, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 8U, 8U, 0LL);
    goto LAB13;

LAB16:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 16U, 8U, 0LL);
    goto LAB13;

LAB21:;
}


extern void work_a_4230703719_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4230703719_3212880686_p_0};
	xsi_register_didat("work_a_4230703719_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_4230703719_3212880686.didat");
	xsi_register_executes(pe);
}

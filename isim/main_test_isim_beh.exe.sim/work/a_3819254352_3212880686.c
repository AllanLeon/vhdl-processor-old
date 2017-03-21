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
static const char *ng0 = "D:/UPB/9no Semestre/Arquitectura y tecnologia de procesadores/VHDL/Processor/arithmetic_logic_unit.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_3819254352_3212880686_p_0(char *t0)
{
    char t20[16];
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
    int t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    xsi_set_current_line(48, ng0);
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
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6132);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t2 = (t0 + 6140);
    t13 = xsi_mem_cmp(t2, t6, 3U);
    if (t13 == 1)
        goto LAB11;

LAB16:    t8 = (t0 + 6143);
    t14 = xsi_mem_cmp(t8, t6, 3U);
    if (t14 == 1)
        goto LAB12;

LAB17:    t10 = (t0 + 6146);
    t16 = xsi_mem_cmp(t10, t6, 3U);
    if (t16 == 1)
        goto LAB13;

LAB18:    t17 = (t0 + 6149);
    t19 = xsi_mem_cmp(t17, t6, 3U);
    if (t19 == 1)
        goto LAB14;

LAB19:
LAB15:
LAB10:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB11:    xsi_set_current_line(53, ng0);
    t21 = (t0 + 1512U);
    t22 = *((char **)t21);
    t21 = (t0 + 6028U);
    t23 = (t0 + 1672U);
    t24 = *((char **)t23);
    t23 = (t0 + 6044U);
    t25 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t20, t22, t21, t24, t23);
    t26 = (t0 + 3552);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t25, 8U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB10;

LAB12:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6028U);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t5 = (t0 + 6044U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t2, t1, t6, t5);
    t8 = (t20 + 12U);
    t31 = *((unsigned int *)t8);
    t32 = (1U * t31);
    t3 = (8U != t32);
    if (t3 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 3552);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB10;

LAB13:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6028U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t20, t2, t1);
    t6 = (t20 + 12U);
    t31 = *((unsigned int *)t6);
    t32 = (1U * t31);
    t3 = (8U != t32);
    if (t3 == 1)
        goto LAB23;

LAB24:    t7 = (t0 + 3552);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB10;

LAB14:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB28;

LAB29:    t3 = 0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB26:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t3 = xsi_vhdl_greater(t1, t2, 8U, t5, 8U);
    if (t3 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB35:    goto LAB10;

LAB20:;
LAB21:    xsi_size_not_matching(8U, t32, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t32, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 3616);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    goto LAB26;

LAB28:    t31 = 0;

LAB31:    if (t31 < 8U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t1 = (t2 + t31);
    t6 = (t5 + t31);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB29;

LAB33:    t31 = (t31 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(66, ng0);
    t6 = (t0 + 3616);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_delta(t6, 1U, 1, 0LL);
    goto LAB35;

}


extern void work_a_3819254352_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3819254352_3212880686_p_0};
	xsi_register_didat("work_a_3819254352_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_3819254352_3212880686.didat");
	xsi_register_executes(pe);
}

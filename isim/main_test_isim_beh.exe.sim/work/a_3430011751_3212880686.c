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
static const char *ng0 = "D:/UPB/9no Semestre/Arquitectura y tecnologia de procesadores/VHDL/Processor/program_counter.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_3430011751_3212880686_p_0(char *t0)
{
    char t13[16];
    char t21[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4336);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 7333);
    t6 = (t0 + 4272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB13:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB15:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2152U);
    t6 = *((char **)t1);
    t1 = (t0 + 7200U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t6, t1, 1);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t16 = (8U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 4272);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB10:    xsi_size_not_matching(8U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 7168U);
    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t6 = (t0 + 7216U);
    t8 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t13, t5, t1, t7, t6);
    t9 = (t0 + 2768U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t17 = (t13 + 12U);
    t14 = *((unsigned int *)t17);
    t15 = (1U * t14);
    memcpy(t9, t8, t15);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t14 = (15 - 7);
    t15 = (t14 * 1U);
    t20 = (0 + t15);
    t1 = (t2 + t20);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t22 = (0 - 7);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t23;
    t6 = (t0 + 2312U);
    t7 = *((char **)t6);
    t6 = (t0 + 7200U);
    t8 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t13, t1, t21, t7, t6);
    t9 = (t0 + 2888U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t17 = (t13 + 12U);
    t23 = *((unsigned int *)t17);
    t24 = (1U * t23);
    memcpy(t9, t8, t24);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t1 = (t0 + 4272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB14:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 4272);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

}


extern void work_a_3430011751_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3430011751_3212880686_p_0};
	xsi_register_didat("work_a_3430011751_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_3430011751_3212880686.didat");
	xsi_register_executes(pe);
}

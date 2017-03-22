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
static const char *ng0 = "D:/UPB/9no Semestre/Arquitectura y tecnologia de procesadores/VHDL/Processor/mux_addr.vhd";



static void work_a_3014422047_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned char t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5941);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5943);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t5 = (0 - 0);
    t14 = (t5 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 5945);
    t16 = 1;
    if (2U == 2U)
        goto LAB24;

LAB25:    t16 = 0;

LAB26:    if (t16 == 1)
        goto LAB21;

LAB22:    t4 = (unsigned char)0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:
LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t8 = (t0 + 3552);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(51, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 3552);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(54, ng0);
    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t24 = (2 - 0);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t11 = (t12 + t26);
    t13 = (t0 + 5947);
    t28 = 1;
    if (2U == 2U)
        goto LAB33;

LAB34:    t28 = 0;

LAB35:    if (t28 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t5 = (2 - 0);
    t14 = (t5 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 5949);
    t4 = 1;
    if (2U == 2U)
        goto LAB41;

LAB42:    t4 = 0;

LAB43:    if (t4 != 0)
        goto LAB39;

LAB40:
LAB31:    goto LAB3;

LAB21:    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t18 = (4 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t9 = (t10 + t21);
    t22 = *((unsigned char *)t9);
    t23 = (t22 == (unsigned char)3);
    t4 = t23;
    goto LAB23;

LAB24:    t17 = 0;

LAB27:    if (t17 < 2U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t7 = (t1 + t17);
    t8 = (t3 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB25;

LAB29:    t17 = (t17 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(55, ng0);
    t32 = (t0 + 1352U);
    t33 = *((char **)t32);
    t34 = (23 - 15);
    t35 = (t34 * 1U);
    t36 = (0 + t35);
    t32 = (t33 + t36);
    t37 = (t0 + 3552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t32, 8U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB31;

LAB33:    t29 = 0;

LAB36:    if (t29 < 2U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t30 = (t11 + t29);
    t31 = (t13 + t29);
    if (*((unsigned char *)t30) != *((unsigned char *)t31))
        goto LAB34;

LAB38:    t29 = (t29 + 1);
    goto LAB36;

LAB39:    xsi_set_current_line(57, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t19 = (23 - 7);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t9 = (t10 + t21);
    t11 = (t0 + 3552);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t27 = (t13 + 56U);
    t30 = *((char **)t27);
    memcpy(t30, t9, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB31;

LAB41:    t17 = 0;

LAB44:    if (t17 < 2U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t7 = (t1 + t17);
    t8 = (t3 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB42;

LAB46:    t17 = (t17 + 1);
    goto LAB44;

}


extern void work_a_3014422047_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3014422047_3212880686_p_0};
	xsi_register_didat("work_a_3014422047_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_3014422047_3212880686.didat");
	xsi_register_executes(pe);
}

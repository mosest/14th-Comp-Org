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
static const char *ng0 = "C:/Users/Tara/Documents/GitHub/14th-Comp-Org/Lab1/adder_test.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_2687875052_2372691052_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 4);
    t2 = (t0 + 2760);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 6164U);
    t7 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t6, t3, t2);
    t8 = (t6 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (16U != t10);
    if (t11 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 3832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(16U, t10, 0);
    goto LAB9;

}

static void work_a_2687875052_2372691052_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 2);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6180U);
    t7 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t6, t3, t2);
    t8 = (t6 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (16U != t10);
    if (t11 == 1)
        goto LAB8;

LAB9:    t12 = (t0 + 3896);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(16U, t10, 0);
    goto LAB9;

}

static void work_a_2687875052_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3256);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t2 = (t0 + 3960);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_2687875052_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2687875052_2372691052_p_0,(void *)work_a_2687875052_2372691052_p_1,(void *)work_a_2687875052_2372691052_p_2};
	xsi_register_didat("work_a_2687875052_2372691052", "isim/adder_test_isim_beh.exe.sim/work/a_2687875052_2372691052.didat");
	xsi_register_executes(pe);
}

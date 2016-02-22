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
static const char *ng0 = "C:/Users/Tara/Documents/GitHub/14th-Comp-Org/Lab3/ise/register_file.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0278921292_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2272U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB12;

LAB13:
LAB3:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 7967);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 4560);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 7983);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 4560);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    t1 = (t0 + 4448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 7943);
    *((int *)t1) = 2;
    t5 = (t0 + 7947);
    *((int *)t5) = 15;
    t6 = 2;
    t7 = 15;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 7951);
    t10 = (16U != 16U);
    if (t10 == 1)
        goto LAB9;

LAB10:    t11 = (t0 + 7943);
    t12 = *((int *)t11);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (16U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 4560);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 16U);
    xsi_driver_first_trans_delta(t17, t16, 16U, 0LL);

LAB7:    t1 = (t0 + 7943);
    t6 = *((int *)t1);
    t2 = (t0 + 7947);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB11:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 7943);
    *((int *)t5) = t6;
    goto LAB5;

LAB9:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB10;

LAB12:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t2 = (t0 + 1192U);
    t9 = *((char **)t2);
    t2 = (t0 + 7536U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t2);
    t7 = (t6 - 0);
    t14 = (t7 * 1);
    t15 = (16U * t14);
    t16 = (0U + t15);
    t11 = (t0 + 4560);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 16U);
    xsi_driver_first_trans_delta(t11, t16, 16U, 0LL);
    goto LAB3;

LAB14:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t22 = (t10 == (unsigned char)3);
    t3 = t22;
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB20;

}

static void work_a_0278921292_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 7568U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 4624);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 4464);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0278921292_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 7600U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 4688);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 4480);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0278921292_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0278921292_3212880686_p_0,(void *)work_a_0278921292_3212880686_p_1,(void *)work_a_0278921292_3212880686_p_2};
	xsi_register_didat("work_a_0278921292_3212880686", "isim/register_file_isim_beh.exe.sim/work/a_0278921292_3212880686.didat");
	xsi_register_executes(pe);
}

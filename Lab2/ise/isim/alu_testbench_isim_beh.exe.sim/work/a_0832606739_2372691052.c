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
static const char *ng0 = "C:/Users/Tara/Documents/GitHub/14th-Comp-Org/Lab2/ise/alu.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_0774719531;

unsigned char ieee_p_0774719531_sub_1742983514_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_2698824431_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_2698860368_2162500114(char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_2372691052_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 10488U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (16U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 6888);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6664);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t7, 0);
    goto LAB6;

}

static void work_a_0832606739_2372691052_p_1(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 10472U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 10488U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (17U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 6952);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 17U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 6680);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t15, 0);
    goto LAB6;

}

static void work_a_0832606739_2372691052_p_2(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 10472U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 10488U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (17U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 7016);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 17U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 6696);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t15, 0);
    goto LAB6;

}

static void work_a_0832606739_2372691052_p_3(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 10708);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10710);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10712);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 10472U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 10488U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t12, t3, t2, t6, t4);
    t9 = (t12 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t21 = (16U != t20);
    if (t21 == 1)
        goto LAB19;

LAB20:    t10 = (t0 + 7080);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t10);

LAB4:    xsi_set_current_line(35, ng0);

LAB23:    t2 = (t0 + 6712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(36, ng0);
    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t13 = (t0 + 10472U);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 10488U);
    t17 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t12, t14, t13, t16, t15);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (16U != t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 7080);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 16U);
    xsi_driver_first_trans_fast(t22);
    goto LAB4;

LAB6:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 10472U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 10488U);
    t7 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t12, t3, t2, t6, t4);
    t9 = (t12 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t21 = (16U != t20);
    if (t21 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 7080);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 10472U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 10488U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t12, t3, t2, t6, t4);
    t9 = (t12 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t21 = (16U != t20);
    if (t21 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 7080);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB12:;
LAB13:    xsi_size_not_matching(16U, t20, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t20, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, t20, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, t20, 0);
    goto LAB20;

LAB21:    t3 = (t0 + 6712);
    *((int *)t3) = 0;
    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}

static void work_a_0832606739_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 10472U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 10488U);
    t5 = ieee_p_0774719531_sub_1742983514_2162500114(IEEE_P_0774719531, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 7144);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 6728);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 7144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 10472U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 10488U);
    t5 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 7208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 6744);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 7208);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_2372691052_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 10472U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 10488U);
    t5 = ieee_p_0774719531_sub_2698860368_2162500114(IEEE_P_0774719531, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 7272);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 6760);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 7272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_2372691052_p_7(char *t0)
{
    char t5[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10504U);
    t3 = (t0 + 10714);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 1352U);
    t22 = *((char **)t21);
    t21 = (t0 + 10504U);
    t23 = (t0 + 10716);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 0);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t30 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t22, t21, t23, t25);
    if (t30 != 0)
        goto LAB5;

LAB6:
LAB7:    t41 = (t0 + 7336);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6776);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2632U);
    t11 = *((char **)t7);
    t12 = (16 - 16);
    t9 = (t12 * -1);
    t13 = (1U * t9);
    t14 = (0 + t13);
    t7 = (t11 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 7336);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t27 = (t0 + 2792U);
    t31 = *((char **)t27);
    t32 = (16 - 16);
    t29 = (t32 * -1);
    t33 = (1U * t29);
    t34 = (0 + t33);
    t27 = (t31 + t34);
    t35 = *((unsigned char *)t27);
    t36 = (t0 + 7336);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t35;
    xsi_driver_first_trans_fast_port(t36);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_0832606739_2372691052_p_8(char *t0)
{
    char t7[16];
    char t52[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    char *t63;
    char *t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned char t69;
    unsigned char t70;
    char *t71;
    char *t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned char t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    unsigned char t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 10504U);
    t5 = (t0 + 10718);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t4, t3, t5, t7);
    if (t12 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t48 = (t0 + 1352U);
    t49 = *((char **)t48);
    t48 = (t0 + 10504U);
    t50 = (t0 + 10720);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 0;
    t54 = (t53 + 4U);
    *((int *)t54) = 1;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t55 = (1 - 0);
    t56 = (t55 * 1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t57 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t49, t48, t50, t52);
    if (t57 == 1)
        goto LAB16;

LAB17:    t47 = (unsigned char)0;

LAB18:    if (t47 == 1)
        goto LAB13;

LAB14:    t46 = (unsigned char)0;

LAB15:    if (t46 != 0)
        goto LAB11;

LAB12:
LAB19:    t91 = (t0 + 7400);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((unsigned char *)t95) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t91);

LAB2:    t96 = (t0 + 6792);
    *((int *)t96) = 1;

LAB1:    return;
LAB3:    t41 = (t0 + 7400);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t41);
    goto LAB2;

LAB5:    t26 = (t0 + 2472U);
    t27 = *((char **)t26);
    t28 = (15 - 15);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t26 = (t27 + t31);
    t32 = *((unsigned char *)t26);
    t33 = (t0 + 1032U);
    t34 = *((char **)t33);
    t35 = (15 - 15);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t33 = (t34 + t38);
    t39 = *((unsigned char *)t33);
    t40 = (t32 != t39);
    t1 = t40;
    goto LAB7;

LAB8:    t9 = (t0 + 1032U);
    t13 = *((char **)t9);
    t14 = (15 - 15);
    t11 = (t14 * -1);
    t15 = (1U * t11);
    t16 = (0 + t15);
    t9 = (t13 + t16);
    t17 = *((unsigned char *)t9);
    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t20 = (15 - 15);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t25 = (t17 == t24);
    t2 = t25;
    goto LAB10;

LAB11:    t86 = (t0 + 7400);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t86);
    goto LAB2;

LAB13:    t71 = (t0 + 2472U);
    t72 = *((char **)t71);
    t73 = (15 - 15);
    t74 = (t73 * -1);
    t75 = (1U * t74);
    t76 = (0 + t75);
    t71 = (t72 + t76);
    t77 = *((unsigned char *)t71);
    t78 = (t0 + 1032U);
    t79 = *((char **)t78);
    t80 = (15 - 15);
    t81 = (t80 * -1);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t78 = (t79 + t83);
    t84 = *((unsigned char *)t78);
    t85 = (t77 != t84);
    t46 = t85;
    goto LAB15;

LAB16:    t54 = (t0 + 1032U);
    t58 = *((char **)t54);
    t59 = (15 - 15);
    t56 = (t59 * -1);
    t60 = (1U * t56);
    t61 = (0 + t60);
    t54 = (t58 + t61);
    t62 = *((unsigned char *)t54);
    t63 = (t0 + 2952U);
    t64 = *((char **)t63);
    t65 = (15 - 15);
    t66 = (t65 * -1);
    t67 = (1U * t66);
    t68 = (0 + t67);
    t63 = (t64 + t68);
    t69 = *((unsigned char *)t63);
    t70 = (t62 == t69);
    t47 = t70;
    goto LAB18;

LAB20:    goto LAB2;

}

static void work_a_0832606739_2372691052_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6808);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0832606739_2372691052_p_0,(void *)work_a_0832606739_2372691052_p_1,(void *)work_a_0832606739_2372691052_p_2,(void *)work_a_0832606739_2372691052_p_3,(void *)work_a_0832606739_2372691052_p_4,(void *)work_a_0832606739_2372691052_p_5,(void *)work_a_0832606739_2372691052_p_6,(void *)work_a_0832606739_2372691052_p_7,(void *)work_a_0832606739_2372691052_p_8,(void *)work_a_0832606739_2372691052_p_9};
	xsi_register_didat("work_a_0832606739_2372691052", "isim/alu_testbench_isim_beh.exe.sim/work/a_0832606739_2372691052.didat");
	xsi_register_executes(pe);
}

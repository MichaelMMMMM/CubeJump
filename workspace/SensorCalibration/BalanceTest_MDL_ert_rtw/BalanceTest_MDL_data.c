/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BalanceTest_MDL_data.c
 *
 * Code generated for Simulink model 'BalanceTest_MDL'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jul 19 15:11:47 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BalanceTest_MDL.h"
#include "BalanceTest_MDL_private.h"

/* Block parameters (auto storage) */
P_BalanceTest_MDL_T BalanceTest_MDL_P = {
  2.42,                                /* Variable: K_phi
                                        * Referenced by: '<Root>/K_Phi'
                                        */
  0.3,                                 /* Variable: K_u_K
                                        * Referenced by: '<Root>/K_u_K'
                                        */
  0.0008,                              /* Variable: K_u_R
                                        * Referenced by: '<Root>/K_u_R'
                                        */
  0.02,                                /* Variable: Ta
                                        * Referenced by:
                                        *   '<S1>/Ta_Gain'
                                        *   '<S1>/Step'
                                        */
  0.98,                                /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S1>/alpha_Gain'
                                        *   '<S1>/alpha_comp_Gain'
                                        */
  0.17453292519943295,                 /* Variable: phi_max
                                        * Referenced by: '<S2>/Constant'
                                        */
  0.14,                                /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S3>/SensorAlpha'
                                        *   '<S3>/SensorAlpha1'
                                        */
  0.061,                               /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S3>/SensorAlpha'
                                        *   '<S3>/SensorAlpha1'
                                        */
  0.322150449679757,                   /* Expression: y1_poly.p2
                                        * Referenced by: '<S10>/y1_poly_p2'
                                        */
  0.11869120132807884,                 /* Expression: y2_poly.p2
                                        * Referenced by: '<S11>/y2_poly_p2'
                                        */
  0.16911193107771114,                 /* Expression: x1_poly.p2
                                        * Referenced by: '<S8>/x1_poly_p2'
                                        */
  0.095996210719801925,                /* Expression: x2_poly.p2
                                        * Referenced by: '<S9>/x2_poly_p2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  1.5707963267948966,                  /* Expression: pi/2
                                        * Referenced by: '<S3>/estimate_offset'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Step'
                                        */
  0.0072850022976595728,               /* Expression: w1_poly.p2
                                        * Referenced by: '<S6>/w1_poly_p2'
                                        */
  0.01092655443643774,                 /* Expression: w2_poly.p2
                                        * Referenced by: '<S7>/w2_poly_p2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S4>/half'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/CompDelay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/first_run_select'
                                        */
  173.27149996510724,                  /* Expression: adc_poly.p2
                                        * Referenced by: '<S5>/adc_poly_p2'
                                        */
  0.000571266573F,                     /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S10>/y1_poly_p1'
                                        */
  0.000588968F,                        /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S11>/y2_poly_p1'
                                        */
  0.000600844563F,                     /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S8>/x1_poly_p1'
                                        */
  0.000599972F,                        /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S9>/x2_poly_p1'
                                        */
  0.000266316114F,                     /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S6>/w1_poly_p1'
                                        */
  0.000266316114F,                     /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S7>/w2_poly_p1'
                                        */
  -0.0855169073F,                      /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S5>/adc_poly_p1'
                                        */
  0.11F,                               /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -0.11F                               /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: JumpTest_MDL_data.c
 *
 * Code generated for Simulink model 'JumpTest_MDL'.
 *
 * Model version                  : 1.80
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jul 24 13:55:46 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "JumpTest_MDL.h"
#include "JumpTest_MDL_private.h"

/* Block parameters (auto storage) */
P_JumpTest_MDL_T JumpTest_MDL_P = {
  0.02,                                /* Variable: Ta
                                        * Referenced by:
                                        *   '<S5>/Ta_Gain'
                                        *   '<S5>/Step'
                                        */
  0.98,                                /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S5>/alpha_Gain'
                                        *   '<S5>/alpha_comp_Gain'
                                        */
  0.14,                                /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S6>/SensorAlpha'
                                        *   '<S6>/SensorAlpha1'
                                        */
  0.061,                               /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S6>/SensorAlpha'
                                        *   '<S6>/SensorAlpha1'
                                        */
  0,                                   /* Mask Parameter: RisingEdge_vinit
                                        * Referenced by: '<S4>/Delay Input1'
                                        */
  0.0008,                              /* Expression: 0.0008
                                        * Referenced by: '<S1>/K_u_R'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S1>/K_u_K'
                                        */
  2.42,                                /* Expression: 2.42
                                        * Referenced by: '<S1>/K_Phi'
                                        */
  0.322150449679757,                   /* Expression: y1_poly.p2
                                        * Referenced by: '<S13>/y1_poly_p2'
                                        */
  0.11869120132807884,                 /* Expression: y2_poly.p2
                                        * Referenced by: '<S14>/y2_poly_p2'
                                        */
  0.16911193107771114,                 /* Expression: x1_poly.p2
                                        * Referenced by: '<S11>/x1_poly_p2'
                                        */
  0.095996210719801925,                /* Expression: x2_poly.p2
                                        * Referenced by: '<S12>/x2_poly_p2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  1.5707963267948966,                  /* Expression: pi/2
                                        * Referenced by: '<S6>/estimate_offset'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Step'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S5>/Step'
                                        */
  0.0291252257149135,                  /* Expression: w1_poly.p2
                                        * Referenced by: '<S9>/w1_poly_p2'
                                        */
  0.043684044457992552,                /* Expression: w2_poly.p2
                                        * Referenced by: '<S10>/w2_poly_p2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S7>/half'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/CompDelay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/first_run_select'
                                        */
  0.04,                                /* Expression: 0.04
                                        * Referenced by: '<S3>/phi_offset'
                                        */
  1039.6289997906433,                  /* Expression: adc_poly.p2
                                        * Referenced by: '<S8>/adc_poly_p2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/uR_offset'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/JumpTrigger'
                                        */
  0.3490658503988659,                  /* Expression: degtorad(20)
                                        * Referenced by: '<Root>/PhiMax'
                                        */
  215.0,                               /* Expression: 215
                                        * Referenced by: '<Root>/JumpVelocity'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/uK_offset'
                                        */
  0.11F,                               /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  -0.11F,                              /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  -0.02F,                              /* Computed Parameter: AccelerateTorque_Value
                                        * Referenced by: '<Root>/AccelerateTorque'
                                        */
  0.0F,                                /* Computed Parameter: ZeroTorque_Value
                                        * Referenced by: '<Root>/ZeroTorque'
                                        */
  0.000571266573F,                     /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S13>/y1_poly_p1'
                                        */
  0.000588968F,                        /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S14>/y2_poly_p1'
                                        */
  0.000600844563F,                     /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S11>/x1_poly_p1'
                                        */
  0.000599972F,                        /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S12>/x2_poly_p1'
                                        */
  0.00106472406F,                      /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S9>/w1_poly_p1'
                                        */
  0.00106472406F,                      /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S10>/w2_poly_p1'
                                        */
  -0.513101399F                        /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S8>/adc_poly_p1'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

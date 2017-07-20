/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BremsenZeitvarianzTest_MDL_data.c
 *
 * Code generated for Simulink model 'BremsenZeitvarianzTest_MDL'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jul 20 09:26:01 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BremsenZeitvarianzTest_MDL.h"
#include "BremsenZeitvarianzTest_MDL_private.h"

/* Block parameters (auto storage) */
P_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_P = {
  0.02,                                /* Variable: Ta
                                        * Referenced by:
                                        *   '<S4>/Ta_Gain'
                                        *   '<S4>/Step'
                                        */
  0.98,                                /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S4>/alpha_Gain'
                                        *   '<S4>/alpha_comp_Gain'
                                        */
  200.0,                               /* Variable: jump_velocity
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.14,                                /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S5>/SensorAlpha'
                                        *   '<S5>/SensorAlpha1'
                                        */
  0.061,                               /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S5>/SensorAlpha'
                                        *   '<S5>/SensorAlpha1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/BrakeSwitchSelect'
                                        */
  1039.6289997906433,                  /* Expression: adc_poly.p2
                                        * Referenced by: '<S7>/adc_poly_p2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  0.322150449679757,                   /* Expression: y1_poly.p2
                                        * Referenced by: '<S12>/y1_poly_p2'
                                        */
  0.11869120132807884,                 /* Expression: y2_poly.p2
                                        * Referenced by: '<S13>/y2_poly_p2'
                                        */
  0.16911193107771114,                 /* Expression: x1_poly.p2
                                        * Referenced by: '<S10>/x1_poly_p2'
                                        */
  0.095996210719801925,                /* Expression: x2_poly.p2
                                        * Referenced by: '<S11>/x2_poly_p2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S5>/Gain'
                                        */
  1.5707963267948966,                  /* Expression: pi/2
                                        * Referenced by: '<S5>/estimate_offset'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Step'
                                        */
  0.0291252257149135,                  /* Expression: w1_poly.p2
                                        * Referenced by: '<S8>/w1_poly_p2'
                                        */
  0.043684044457992552,                /* Expression: w2_poly.p2
                                        * Referenced by: '<S9>/w2_poly_p2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/half'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/CompDelay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/first_run_select'
                                        */
  -0.513101399F,                       /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S7>/adc_poly_p1'
                                        */
  0.000571266573F,                     /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S12>/y1_poly_p1'
                                        */
  0.000588968F,                        /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S13>/y2_poly_p1'
                                        */
  0.000600844563F,                     /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S10>/x1_poly_p1'
                                        */
  0.000599972F,                        /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S11>/x2_poly_p1'
                                        */
  0.00106472406F,                      /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S8>/w1_poly_p1'
                                        */
  0.00106472406F,                      /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S9>/w2_poly_p1'
                                        */
  -0.01F,                              /* Computed Parameter: MotorTorque_Value
                                        * Referenced by: '<Root>/MotorTorque'
                                        */
  0,                                   /* Computed Parameter: CustomValueBrake_Value
                                        * Referenced by: '<Root>/CustomValueBrake'
                                        */
  0,                                   /* Computed Parameter: _Y0
                                        * Referenced by: '<S3>/ '
                                        */
  0,                                   /* Computed Parameter: Reset_Value
                                        * Referenced by: '<Root>/Reset'
                                        */
  0,                                   /* Computed Parameter: Enable_Jump_Value
                                        * Referenced by: '<Root>/Enable_Jump'
                                        */
  0                                    /* Computed Parameter: Enable_Motor_Value
                                        * Referenced by: '<Root>/Enable_Motor'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

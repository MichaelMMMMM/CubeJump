/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BremsenZeitvarianzTest_MDL_private.h
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

#ifndef RTW_HEADER_BremsenZeitvarianzTest_MDL_private_h_
#define RTW_HEADER_BremsenZeitvarianzTest_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);

#endif                                 /* RTW_HEADER_BremsenZeitvarianzTest_MDL_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

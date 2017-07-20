/*
 * BremsenZeitvarianzTest_MDL_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "BremsenZeitvarianzTest_MDL".
 *
 * Model version              : 1.15
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Jul 20 09:26:01 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&BremsenZeitvarianzTest_MDL_B.Sum), 0, 0, 3 },

  { (char_T *)(&BremsenZeitvarianzTest_MDL_B.MSCubeADC), 1, 0, 7 },

  { (char_T *)(&BremsenZeitvarianzTest_MDL_B.Switch), 8, 0, 3 }
  ,

  { (char_T *)(&BremsenZeitvarianzTest_MDL_DW.BrakeFlag_PWORK.LoggedData), 11, 0,
    5 },

  { (char_T *)(&BremsenZeitvarianzTest_MDL_DW.SampleandHold_SubsysRanBC), 2, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&BremsenZeitvarianzTest_MDL_P.Ta), 0, 0, 21 },

  { (char_T *)(&BremsenZeitvarianzTest_MDL_P.adc_poly_p1_Gain), 1, 0, 8 },

  { (char_T *)(&BremsenZeitvarianzTest_MDL_P.CustomValueBrake_Value), 8, 0, 5 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] BremsenZeitvarianzTest_MDL_dt.h */

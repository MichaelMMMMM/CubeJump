/*
 * JumpTest_MDL_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "JumpTest_MDL".
 *
 * Model version              : 1.80
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Jul 24 13:55:46 2017
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
  { (char_T *)(&JumpTest_MDL_B.Sum), 0, 0, 7 },

  { (char_T *)(&JumpTest_MDL_B.x1_raw__SIG), 1, 0, 8 },

  { (char_T *)(&JumpTest_MDL_B.motor_input), 7, 0, 1 },

  { (char_T *)(&JumpTest_MDL_B.FixPtRelationalOperator), 8, 0, 3 }
  ,

  { (char_T *)(&JumpTest_MDL_DW.CompDelay_DSTATE), 0, 0, 2 },

  { (char_T *)(&JumpTest_MDL_DW.MotorSelectScope_PWORK.LoggedData), 11, 0, 5 },

  { (char_T *)(&JumpTest_MDL_DW.brake_counter), 6, 0, 1 },

  { (char_T *)(&JumpTest_MDL_DW.is_active_c3_JumpTest_MDL), 3, 0, 3 },

  { (char_T *)(&JumpTest_MDL_DW.doneDoubleBufferReInit), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  9U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&JumpTest_MDL_P.Ta), 0, 0, 4 },

  { (char_T *)(&JumpTest_MDL_P.RisingEdge_vinit), 8, 0, 1 },

  { (char_T *)(&JumpTest_MDL_P.K_u_R_Gain), 0, 0, 23 },

  { (char_T *)(&JumpTest_MDL_P.Saturation_UpperSat), 1, 0, 11 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] JumpTest_MDL_dt.h */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BalanceTest_MDL.c
 *
 * Code generated for Simulink model 'BalanceTest_MDL'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jul 19 15:05:33 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BalanceTest_MDL.h"
#include "BalanceTest_MDL_private.h"
#include "BalanceTest_MDL_dt.h"

/* Block signals (auto storage) */
B_BalanceTest_MDL_T BalanceTest_MDL_B;

/* Block states (auto storage) */
DW_BalanceTest_MDL_T BalanceTest_MDL_DW;

/* Real-time model */
RT_MODEL_BalanceTest_MDL_T BalanceTest_MDL_M_;
RT_MODEL_BalanceTest_MDL_T *const BalanceTest_MDL_M = &BalanceTest_MDL_M_;
real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model step function */
void BalanceTest_MDL_step(void)
{
  real_T currentTime;

  /* S-Function (MS_Cube_Motor): '<Root>/MS-Cube-Motor' */
  MS_Cube_Motor_Output(&BalanceTest_MDL_B.Saturation, BalanceTest_MDL_B.Compare);

  /* S-Function (MS_Cube_Sensors): '<Root>/MS-Cube-Sensors' */
  MS_Cube_Sensors_Output(&BalanceTest_MDL_B.x1_raw__SIG,
    &BalanceTest_MDL_B.y1_raw__SIG, &BalanceTest_MDL_B.w1_raw__SIG,
    &BalanceTest_MDL_B.x2_raw__SIG, &BalanceTest_MDL_B.y2_raw__SIG,
    &BalanceTest_MDL_B.w2_raw__SIG);

  /* Sum: '<S3>/offset_Add' incorporates:
   *  Constant: '<S10>/y1_poly_p2'
   *  Constant: '<S11>/y2_poly_p2'
   *  Constant: '<S3>/estimate_offset'
   *  Constant: '<S8>/x1_poly_p2'
   *  Constant: '<S9>/x2_poly_p2'
   *  Gain: '<S10>/y1_poly_p1'
   *  Gain: '<S11>/y2_poly_p1'
   *  Gain: '<S3>/Gain'
   *  Gain: '<S3>/SensorAlpha'
   *  Gain: '<S3>/SensorAlpha1'
   *  Gain: '<S8>/x1_poly_p1'
   *  Gain: '<S9>/x2_poly_p1'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S3>/x_dd_Add'
   *  Sum: '<S3>/y_dd__Add'
   *  Sum: '<S8>/Sum'
   *  Sum: '<S9>/Sum'
   *  Trigonometry: '<S3>/Trigonometric Function'
   */
  BalanceTest_MDL_B.offset_Add = rt_atan2d_snf
    ((BalanceTest_MDL_P.y1_poly_p1_Gain * BalanceTest_MDL_B.y1_raw__SIG +
      BalanceTest_MDL_P.y1_poly_p2_Value) - (BalanceTest_MDL_P.y2_poly_p1_Gain *
      BalanceTest_MDL_B.y2_raw__SIG + BalanceTest_MDL_P.y2_poly_p2_Value) *
     (BalanceTest_MDL_P.r_S1 / BalanceTest_MDL_P.r_S2),
     ((BalanceTest_MDL_P.x1_poly_p1_Gain * BalanceTest_MDL_B.x1_raw__SIG +
       BalanceTest_MDL_P.x1_poly_p2_Value) - (BalanceTest_MDL_P.x2_poly_p1_Gain *
       BalanceTest_MDL_B.x2_raw__SIG + BalanceTest_MDL_P.x2_poly_p2_Value) *
      (BalanceTest_MDL_P.r_S1 / BalanceTest_MDL_P.r_S2)) *
     BalanceTest_MDL_P.Gain_Gain) + BalanceTest_MDL_P.estimate_offset_Value;

  /* Step: '<S1>/Step' */
  currentTime = BalanceTest_MDL_M->Timing.taskTime0;

  /* Gain: '<S4>/half' incorporates:
   *  Constant: '<S6>/w1_poly_p2'
   *  Constant: '<S7>/w2_poly_p2'
   *  Gain: '<S6>/w1_poly_p1'
   *  Gain: '<S7>/w2_poly_p1'
   *  Sum: '<S4>/w_Add'
   *  Sum: '<S6>/Sum'
   *  Sum: '<S7>/Sum'
   */
  BalanceTest_MDL_B.half = ((BalanceTest_MDL_P.w1_poly_p1_Gain *
    BalanceTest_MDL_B.w1_raw__SIG + BalanceTest_MDL_P.w1_poly_p2_Value) +
    (BalanceTest_MDL_P.w2_poly_p1_Gain * BalanceTest_MDL_B.w2_raw__SIG +
     BalanceTest_MDL_P.w2_poly_p2_Value)) * BalanceTest_MDL_P.half_Gain;

  /* Step: '<S1>/Step' */
  if (currentTime < BalanceTest_MDL_P.Ta) {
    currentTime = BalanceTest_MDL_P.Step_Y0;
  } else {
    currentTime = BalanceTest_MDL_P.Step_YFinal;
  }

  /* Switch: '<S1>/first_run_select' incorporates:
   *  Gain: '<S1>/Ta_Gain'
   *  Gain: '<S1>/alpha_Gain'
   *  Gain: '<S1>/alpha_comp_Gain'
   *  Sum: '<S1>/Add'
   *  Sum: '<S1>/Sum'
   *  UnitDelay: '<S1>/CompDelay'
   */
  if (currentTime > BalanceTest_MDL_P.first_run_select_Threshold) {
    BalanceTest_MDL_B.first_run_select = BalanceTest_MDL_B.offset_Add;
  } else {
    BalanceTest_MDL_B.first_run_select = (BalanceTest_MDL_P.Ta *
      BalanceTest_MDL_B.half + BalanceTest_MDL_B.first_run_select) *
      BalanceTest_MDL_P.alpha_comp + (1.0 - BalanceTest_MDL_P.alpha_comp) *
      BalanceTest_MDL_B.offset_Add;
  }

  /* End of Switch: '<S1>/first_run_select' */

  /* S-Function (MS_Cube_ADC): '<Root>/MS-Cube-ADC' */
  unsigned short testVar = MS_Cube_ADC_Output();
  BalanceTest_MDL_B.MSCubeADC = (real32_T)testVar;

  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S5>/adc_poly_p2'
   *  Gain: '<S5>/adc_poly_p1'
   */
  BalanceTest_MDL_B.Sum = BalanceTest_MDL_P.adc_poly_p1_Gain *
    BalanceTest_MDL_B.MSCubeADC + BalanceTest_MDL_P.adc_poly_p2_Value;

  /* Sum: '<Root>/Sum' incorporates:
   *  Gain: '<Root>/K_Phi'
   *  Gain: '<Root>/K_u_K'
   *  Gain: '<Root>/K_u_R'
   */
  BalanceTest_MDL_B.Sum_k = (real32_T)((BalanceTest_MDL_P.K_phi *
    BalanceTest_MDL_B.first_run_select + BalanceTest_MDL_P.K_u_K *
    BalanceTest_MDL_B.half) + BalanceTest_MDL_P.K_u_R * BalanceTest_MDL_B.Sum);

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Abs: '<Root>/Abs'
   *  Constant: '<S2>/Constant'
   */
  BalanceTest_MDL_B.Compare = (fabs(BalanceTest_MDL_B.first_run_select) <=
    BalanceTest_MDL_P.phi_max);

  /* Saturate: '<Root>/Saturation' */
  if (BalanceTest_MDL_B.Sum_k > BalanceTest_MDL_P.Saturation_UpperSat) {
    BalanceTest_MDL_B.Saturation = BalanceTest_MDL_P.Saturation_UpperSat;
  } else if (BalanceTest_MDL_B.Sum_k < BalanceTest_MDL_P.Saturation_LowerSat) {
    BalanceTest_MDL_B.Saturation = BalanceTest_MDL_P.Saturation_LowerSat;
  } else {
    BalanceTest_MDL_B.Saturation = BalanceTest_MDL_B.Sum_k;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.02s, 0.0s] */
    rtExtModeUpload(0, BalanceTest_MDL_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.02s, 0.0s] */
    if ((rtmGetTFinal(BalanceTest_MDL_M)!=-1) &&
        !((rtmGetTFinal(BalanceTest_MDL_M)-BalanceTest_MDL_M->Timing.taskTime0) >
          BalanceTest_MDL_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(BalanceTest_MDL_M, "Simulation finished");
    }

    if (rtmGetStopRequested(BalanceTest_MDL_M)) {
      rtmSetErrorStatus(BalanceTest_MDL_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BalanceTest_MDL_M->Timing.taskTime0 =
    (++BalanceTest_MDL_M->Timing.clockTick0) *
    BalanceTest_MDL_M->Timing.stepSize0;
}

/* Model initialize function */
void BalanceTest_MDL_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BalanceTest_MDL_M, 0,
                sizeof(RT_MODEL_BalanceTest_MDL_T));
  rtmSetTFinal(BalanceTest_MDL_M, -1);
  BalanceTest_MDL_M->Timing.stepSize0 = 0.02;

  /* External mode info */
  BalanceTest_MDL_M->Sizes.checksums[0] = (2017702286U);
  BalanceTest_MDL_M->Sizes.checksums[1] = (3184549070U);
  BalanceTest_MDL_M->Sizes.checksums[2] = (2786880570U);
  BalanceTest_MDL_M->Sizes.checksums[3] = (3338184207U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    BalanceTest_MDL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BalanceTest_MDL_M->extModeInfo,
      &BalanceTest_MDL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BalanceTest_MDL_M->extModeInfo,
                        BalanceTest_MDL_M->Sizes.checksums);
    rteiSetTPtr(BalanceTest_MDL_M->extModeInfo, rtmGetTPtr(BalanceTest_MDL_M));
  }

  /* block I/O */
  (void) memset(((void *) &BalanceTest_MDL_B), 0,
                sizeof(B_BalanceTest_MDL_T));

  /* states (dwork) */
  (void) memset((void *)&BalanceTest_MDL_DW, 0,
                sizeof(DW_BalanceTest_MDL_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    BalanceTest_MDL_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* InitializeConditions for UnitDelay: '<S1>/CompDelay' */
  BalanceTest_MDL_B.first_run_select =
    BalanceTest_MDL_P.CompDelay_InitialCondition;
}

/* Model terminate function */
void BalanceTest_MDL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

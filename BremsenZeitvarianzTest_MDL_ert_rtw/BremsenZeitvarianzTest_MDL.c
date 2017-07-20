/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BremsenZeitvarianzTest_MDL.c
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
#include "BremsenZeitvarianzTest_MDL_dt.h"

/* Block signals (auto storage) */
B_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_B;

/* Block states (auto storage) */
DW_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_BremsenZeitvarianzTes_T BremsenZeitvarianzTest__PrevZCX;

/* Real-time model */
RT_MODEL_BremsenZeitvarianzTe_T BremsenZeitvarianzTest_MDL_M_;
RT_MODEL_BremsenZeitvarianzTe_T *const BremsenZeitvarianzTest_MDL_M =
  &BremsenZeitvarianzTest_MDL_M_;
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
void BremsenZeitvarianzTest_MDL_step(void)
{
  real_T currentTime;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator;
  real_T rtb_offset_Add;

  /* Reset subsysRan breadcrumbs */
  srClearBC(BremsenZeitvarianzTest_MDL_DW.SampleandHold_SubsysRanBC);

  /* S-Function (MS_Cube_ADC): '<S2>/MS-Cube-ADC' */
  unsigned short testVar = MS_Cube_ADC_Output();
  BremsenZeitvarianzTest_MDL_B.MSCubeADC = (real32_T)testVar;

  /* Sum: '<S7>/Sum' incorporates:
   *  Constant: '<S7>/adc_poly_p2'
   *  Gain: '<S7>/adc_poly_p1'
   */
  BremsenZeitvarianzTest_MDL_B.Sum =
    BremsenZeitvarianzTest_MDL_P.adc_poly_p1_Gain *
    BremsenZeitvarianzTest_MDL_B.MSCubeADC +
    BremsenZeitvarianzTest_MDL_P.adc_poly_p2_Value;

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Abs: '<Root>/u_R_abs'
   *  Constant: '<S1>/Constant'
   */
  rtb_Compare = (fabs(BremsenZeitvarianzTest_MDL_B.Sum) >
                 BremsenZeitvarianzTest_MDL_P.jump_velocity);

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<Root>/Reset'
   */
  rtb_LogicalOperator = (BremsenZeitvarianzTest_MDL_P.Reset_Value || rtb_Compare);

  /* Outputs for Triggered SubSystem: '<Root>/Sample and Hold' incorporates:
   *  TriggerPort: '<S3>/Trigger'
   */
  if (rtb_LogicalOperator &&
      (BremsenZeitvarianzTest__PrevZCX.SampleandHold_Trig_ZCE != POS_ZCSIG)) {
    /* Inport: '<S3>/In' */
    BremsenZeitvarianzTest_MDL_B.In = rtb_Compare;
    BremsenZeitvarianzTest_MDL_DW.SampleandHold_SubsysRanBC = 4;
  }

  BremsenZeitvarianzTest__PrevZCX.SampleandHold_Trig_ZCE = rtb_LogicalOperator;

  /* End of Outputs for SubSystem: '<Root>/Sample and Hold' */

  /* Logic: '<Root>/BrakeAND' incorporates:
   *  Constant: '<Root>/Enable_Jump'
   */
  rtb_Compare = (BremsenZeitvarianzTest_MDL_B.In &&
                 BremsenZeitvarianzTest_MDL_P.Enable_Jump_Value);

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/BrakeSwitchSelect'
   *  Constant: '<Root>/CustomValueBrake'
   */
  if (BremsenZeitvarianzTest_MDL_P.BrakeSwitchSelect_Value >
      BremsenZeitvarianzTest_MDL_P.Switch_Threshold) {
    BremsenZeitvarianzTest_MDL_B.Switch =
      BremsenZeitvarianzTest_MDL_P.CustomValueBrake_Value;
  } else {
    BremsenZeitvarianzTest_MDL_B.Switch = rtb_Compare;
  }

  /* End of Switch: '<Root>/Switch' */

  /* S-Function (MS_Cube_Brake): '<Root>/MS-Cube-Brake' */
  MS_Cube_Brake_Output(BremsenZeitvarianzTest_MDL_B.Switch);

  /* S-Function (MS_Cube_Motor): '<Root>/MS-Cube-Motor' */
  MS_Cube_Motor_Output(&BremsenZeitvarianzTest_MDL_P.MotorTorque_Value,
                       BremsenZeitvarianzTest_MDL_B.MotorAND);

  /* S-Function (MS_Cube_Sensors): '<S2>/MS-Cube-Sensors' */
  MS_Cube_Sensors_Output(&BremsenZeitvarianzTest_MDL_B.x1_raw__SIG,
    &BremsenZeitvarianzTest_MDL_B.y1_raw__SIG,
    &BremsenZeitvarianzTest_MDL_B.w1_raw__SIG,
    &BremsenZeitvarianzTest_MDL_B.x2_raw__SIG,
    &BremsenZeitvarianzTest_MDL_B.y2_raw__SIG,
    &BremsenZeitvarianzTest_MDL_B.w2_raw__SIG);

  /* Sum: '<S5>/offset_Add' incorporates:
   *  Constant: '<S10>/x1_poly_p2'
   *  Constant: '<S11>/x2_poly_p2'
   *  Constant: '<S12>/y1_poly_p2'
   *  Constant: '<S13>/y2_poly_p2'
   *  Constant: '<S5>/estimate_offset'
   *  Gain: '<S10>/x1_poly_p1'
   *  Gain: '<S11>/x2_poly_p1'
   *  Gain: '<S12>/y1_poly_p1'
   *  Gain: '<S13>/y2_poly_p1'
   *  Gain: '<S5>/Gain'
   *  Gain: '<S5>/SensorAlpha'
   *  Gain: '<S5>/SensorAlpha1'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S12>/Sum'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S5>/x_dd_Add'
   *  Sum: '<S5>/y_dd__Add'
   *  Trigonometry: '<S5>/Trigonometric Function'
   */
  rtb_offset_Add = rt_atan2d_snf((BremsenZeitvarianzTest_MDL_P.y1_poly_p1_Gain *
    BremsenZeitvarianzTest_MDL_B.y1_raw__SIG +
    BremsenZeitvarianzTest_MDL_P.y1_poly_p2_Value) -
    (BremsenZeitvarianzTest_MDL_P.y2_poly_p1_Gain *
     BremsenZeitvarianzTest_MDL_B.y2_raw__SIG +
     BremsenZeitvarianzTest_MDL_P.y2_poly_p2_Value) *
    (BremsenZeitvarianzTest_MDL_P.r_S1 / BremsenZeitvarianzTest_MDL_P.r_S2),
    ((BremsenZeitvarianzTest_MDL_P.x1_poly_p1_Gain *
      BremsenZeitvarianzTest_MDL_B.x1_raw__SIG +
      BremsenZeitvarianzTest_MDL_P.x1_poly_p2_Value) -
     (BremsenZeitvarianzTest_MDL_P.x2_poly_p1_Gain *
      BremsenZeitvarianzTest_MDL_B.x2_raw__SIG +
      BremsenZeitvarianzTest_MDL_P.x2_poly_p2_Value) *
     (BremsenZeitvarianzTest_MDL_P.r_S1 / BremsenZeitvarianzTest_MDL_P.r_S2)) *
    BremsenZeitvarianzTest_MDL_P.Gain_Gain) +
    BremsenZeitvarianzTest_MDL_P.estimate_offset_Value;

  /* Step: '<S4>/Step' */
  currentTime = BremsenZeitvarianzTest_MDL_M->Timing.taskTime0;

  /* Gain: '<S6>/half' incorporates:
   *  Constant: '<S8>/w1_poly_p2'
   *  Constant: '<S9>/w2_poly_p2'
   *  Gain: '<S8>/w1_poly_p1'
   *  Gain: '<S9>/w2_poly_p1'
   *  Sum: '<S6>/w_Add'
   *  Sum: '<S8>/Sum'
   *  Sum: '<S9>/Sum'
   */
  BremsenZeitvarianzTest_MDL_B.half =
    ((BremsenZeitvarianzTest_MDL_P.w1_poly_p1_Gain *
      BremsenZeitvarianzTest_MDL_B.w1_raw__SIG +
      BremsenZeitvarianzTest_MDL_P.w1_poly_p2_Value) +
     (BremsenZeitvarianzTest_MDL_P.w2_poly_p1_Gain *
      BremsenZeitvarianzTest_MDL_B.w2_raw__SIG +
      BremsenZeitvarianzTest_MDL_P.w2_poly_p2_Value)) *
    BremsenZeitvarianzTest_MDL_P.half_Gain;

  /* Step: '<S4>/Step' */
  if (currentTime < BremsenZeitvarianzTest_MDL_P.Ta) {
    currentTime = BremsenZeitvarianzTest_MDL_P.Step_Y0;
  } else {
    currentTime = BremsenZeitvarianzTest_MDL_P.Step_YFinal;
  }

  /* Switch: '<S4>/first_run_select' incorporates:
   *  Gain: '<S4>/Ta_Gain'
   *  Gain: '<S4>/alpha_Gain'
   *  Gain: '<S4>/alpha_comp_Gain'
   *  Sum: '<S4>/Add'
   *  Sum: '<S4>/Sum'
   *  UnitDelay: '<S4>/CompDelay'
   */
  if (currentTime > BremsenZeitvarianzTest_MDL_P.first_run_select_Threshold) {
    BremsenZeitvarianzTest_MDL_B.first_run_select = rtb_offset_Add;
  } else {
    BremsenZeitvarianzTest_MDL_B.first_run_select =
      (BremsenZeitvarianzTest_MDL_P.Ta * BremsenZeitvarianzTest_MDL_B.half +
       BremsenZeitvarianzTest_MDL_B.first_run_select) *
      BremsenZeitvarianzTest_MDL_P.alpha_comp + (1.0 -
      BremsenZeitvarianzTest_MDL_P.alpha_comp) * rtb_offset_Add;
  }

  /* End of Switch: '<S4>/first_run_select' */

  /* Logic: '<Root>/MotorAND' incorporates:
   *  Constant: '<Root>/Enable_Motor'
   *  Logic: '<Root>/Invert'
   */
  BremsenZeitvarianzTest_MDL_B.MotorAND =
    (BremsenZeitvarianzTest_MDL_P.Enable_Motor_Value && (!rtb_Compare));

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.02s, 0.0s] */
    rtExtModeUpload(0, BremsenZeitvarianzTest_MDL_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.02s, 0.0s] */
    if ((rtmGetTFinal(BremsenZeitvarianzTest_MDL_M)!=-1) &&
        !((rtmGetTFinal(BremsenZeitvarianzTest_MDL_M)-
           BremsenZeitvarianzTest_MDL_M->Timing.taskTime0) >
          BremsenZeitvarianzTest_MDL_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(BremsenZeitvarianzTest_MDL_M, "Simulation finished");
    }

    if (rtmGetStopRequested(BremsenZeitvarianzTest_MDL_M)) {
      rtmSetErrorStatus(BremsenZeitvarianzTest_MDL_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BremsenZeitvarianzTest_MDL_M->Timing.taskTime0 =
    (++BremsenZeitvarianzTest_MDL_M->Timing.clockTick0) *
    BremsenZeitvarianzTest_MDL_M->Timing.stepSize0;
}

/* Model initialize function */
void BremsenZeitvarianzTest_MDL_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BremsenZeitvarianzTest_MDL_M, 0,
                sizeof(RT_MODEL_BremsenZeitvarianzTe_T));
  rtmSetTFinal(BremsenZeitvarianzTest_MDL_M, -1);
  BremsenZeitvarianzTest_MDL_M->Timing.stepSize0 = 0.02;

  /* External mode info */
  BremsenZeitvarianzTest_MDL_M->Sizes.checksums[0] = (2445159613U);
  BremsenZeitvarianzTest_MDL_M->Sizes.checksums[1] = (2899459126U);
  BremsenZeitvarianzTest_MDL_M->Sizes.checksums[2] = (3336619299U);
  BremsenZeitvarianzTest_MDL_M->Sizes.checksums[3] = (3413171869U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    BremsenZeitvarianzTest_MDL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)
      &BremsenZeitvarianzTest_MDL_DW.SampleandHold_SubsysRanBC;
    rteiSetModelMappingInfoPtr(BremsenZeitvarianzTest_MDL_M->extModeInfo,
      &BremsenZeitvarianzTest_MDL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BremsenZeitvarianzTest_MDL_M->extModeInfo,
                        BremsenZeitvarianzTest_MDL_M->Sizes.checksums);
    rteiSetTPtr(BremsenZeitvarianzTest_MDL_M->extModeInfo, rtmGetTPtr
                (BremsenZeitvarianzTest_MDL_M));
  }

  /* block I/O */
  (void) memset(((void *) &BremsenZeitvarianzTest_MDL_B), 0,
                sizeof(B_BremsenZeitvarianzTest_MDL_T));

  /* states (dwork) */
  (void) memset((void *)&BremsenZeitvarianzTest_MDL_DW, 0,
                sizeof(DW_BremsenZeitvarianzTest_MDL_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    BremsenZeitvarianzTest_MDL_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  BremsenZeitvarianzTest__PrevZCX.SampleandHold_Trig_ZCE = POS_ZCSIG;

  /* InitializeConditions for UnitDelay: '<S4>/CompDelay' */
  BremsenZeitvarianzTest_MDL_B.first_run_select =
    BremsenZeitvarianzTest_MDL_P.CompDelay_InitialCondition;

  /* SystemInitialize for Triggered SubSystem: '<Root>/Sample and Hold' */
  /* SystemInitialize for Outport: '<S3>/ ' */
  BremsenZeitvarianzTest_MDL_B.In = BremsenZeitvarianzTest_MDL_P._Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Sample and Hold' */
}

/* Model terminate function */
void BremsenZeitvarianzTest_MDL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

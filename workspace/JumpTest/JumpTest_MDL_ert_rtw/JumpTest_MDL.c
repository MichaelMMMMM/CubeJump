/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: JumpTest_MDL.c
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
#include "JumpTest_MDL_dt.h"

/* Named constants for Chart: '<Root>/JumpControl' */
#define JumpTest_MDL_IN_Accelerating   ((uint8_T)1U)
#define JumpTest_MDL_IN_Balance        ((uint8_T)1U)
#define JumpTest_MDL_IN_Braking        ((uint8_T)2U)
#define JumpTest_MDL_IN_Idle           ((uint8_T)2U)
#define JumpTest_MDL_IN_Jumping        ((uint8_T)3U)
#define JumpTest_MDL_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block signals (auto storage) */
B_JumpTest_MDL_T JumpTest_MDL_B;

/* Block states (auto storage) */
DW_JumpTest_MDL_T JumpTest_MDL_DW;

/* Real-time model */
RT_MODEL_JumpTest_MDL_T JumpTest_MDL_M_;
RT_MODEL_JumpTest_MDL_T *const JumpTest_MDL_M = &JumpTest_MDL_M_;
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
void JumpTest_MDL_step(void)
{
  real_T currentTime;
  real_T rtb_half;
  real_T rtb_offset_Add;
  real32_T u0;

  /* S-Function (MS_Cube_Brake): '<Root>/MS-Cube-Brake' */
  MS_Cube_Brake_Output(JumpTest_MDL_B.brake_enable);

  /* S-Function (MS_Cube_Motor): '<Root>/MS-Cube-Motor' */
  MS_Cube_Motor_Output(&JumpTest_MDL_B.MultiportSwitch,
                       JumpTest_MDL_B.motor_enable);

  /* S-Function (MS_Cube_Sensors): '<S3>/MS-Cube-Sensors' */
  MS_Cube_Sensors_Output(&JumpTest_MDL_B.x1_raw__SIG,
    &JumpTest_MDL_B.y1_raw__SIG, &JumpTest_MDL_B.w1_raw__SIG,
    &JumpTest_MDL_B.x2_raw__SIG, &JumpTest_MDL_B.y2_raw__SIG,
    &JumpTest_MDL_B.w2_raw__SIG);

  /* Sum: '<S6>/offset_Add' incorporates:
   *  Constant: '<S11>/x1_poly_p2'
   *  Constant: '<S12>/x2_poly_p2'
   *  Constant: '<S13>/y1_poly_p2'
   *  Constant: '<S14>/y2_poly_p2'
   *  Constant: '<S6>/estimate_offset'
   *  Gain: '<S11>/x1_poly_p1'
   *  Gain: '<S12>/x2_poly_p1'
   *  Gain: '<S13>/y1_poly_p1'
   *  Gain: '<S14>/y2_poly_p1'
   *  Gain: '<S6>/Gain'
   *  Gain: '<S6>/SensorAlpha'
   *  Gain: '<S6>/SensorAlpha1'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S12>/Sum'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S14>/Sum'
   *  Sum: '<S6>/x_dd_Add'
   *  Sum: '<S6>/y_dd__Add'
   *  Trigonometry: '<S6>/Trigonometric Function'
   */
  rtb_offset_Add = rt_atan2d_snf((JumpTest_MDL_P.y1_poly_p1_Gain *
    JumpTest_MDL_B.y1_raw__SIG + JumpTest_MDL_P.y1_poly_p2_Value) -
    (JumpTest_MDL_P.y2_poly_p1_Gain * JumpTest_MDL_B.y2_raw__SIG +
     JumpTest_MDL_P.y2_poly_p2_Value) * (JumpTest_MDL_P.r_S1 /
    JumpTest_MDL_P.r_S2), ((JumpTest_MDL_P.x1_poly_p1_Gain *
    JumpTest_MDL_B.x1_raw__SIG + JumpTest_MDL_P.x1_poly_p2_Value) -
    (JumpTest_MDL_P.x2_poly_p1_Gain * JumpTest_MDL_B.x2_raw__SIG +
     JumpTest_MDL_P.x2_poly_p2_Value) * (JumpTest_MDL_P.r_S1 /
    JumpTest_MDL_P.r_S2)) * JumpTest_MDL_P.Gain_Gain) +
    JumpTest_MDL_P.estimate_offset_Value;

  /* Step: '<S5>/Step' */
  currentTime = JumpTest_MDL_M->Timing.taskTime0;

  /* Gain: '<S7>/half' incorporates:
   *  Constant: '<S10>/w2_poly_p2'
   *  Constant: '<S9>/w1_poly_p2'
   *  Gain: '<S10>/w2_poly_p1'
   *  Gain: '<S9>/w1_poly_p1'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S7>/w_Add'
   *  Sum: '<S9>/Sum'
   */
  rtb_half = ((JumpTest_MDL_P.w1_poly_p1_Gain * JumpTest_MDL_B.w1_raw__SIG +
               JumpTest_MDL_P.w1_poly_p2_Value) +
              (JumpTest_MDL_P.w2_poly_p1_Gain * JumpTest_MDL_B.w2_raw__SIG +
               JumpTest_MDL_P.w2_poly_p2_Value)) * JumpTest_MDL_P.half_Gain;

  /* Step: '<S5>/Step' */
  if (currentTime < JumpTest_MDL_P.Ta) {
    currentTime = JumpTest_MDL_P.Step_Y0;
  } else {
    currentTime = JumpTest_MDL_P.Step_YFinal;
  }

  /* Switch: '<S5>/first_run_select' incorporates:
   *  Gain: '<S5>/Ta_Gain'
   *  Gain: '<S5>/alpha_Gain'
   *  Gain: '<S5>/alpha_comp_Gain'
   *  Sum: '<S5>/Add'
   *  Sum: '<S5>/Sum'
   *  UnitDelay: '<S5>/CompDelay'
   */
  if (!(currentTime > JumpTest_MDL_P.first_run_select_Threshold)) {
    rtb_offset_Add = (JumpTest_MDL_P.Ta * rtb_half +
                      JumpTest_MDL_DW.CompDelay_DSTATE) *
      JumpTest_MDL_P.alpha_comp + (1.0 - JumpTest_MDL_P.alpha_comp) *
      rtb_offset_Add;
  }

  /* End of Switch: '<S5>/first_run_select' */

  /* Sum: '<S3>/Sum' incorporates:
   *  Constant: '<S3>/phi_offset'
   */
  JumpTest_MDL_B.Sum = rtb_offset_Add + JumpTest_MDL_P.phi_offset_Value;

  /* Abs: '<Root>/phi_abs' */
  JumpTest_MDL_B.phi_abs = fabs(JumpTest_MDL_B.Sum);

  /* S-Function (MS_Cube_ADC): '<S3>/MS-Cube-ADC' */
  unsigned short testVar = MS_Cube_ADC_Output();
  JumpTest_MDL_B.MSCubeADC = (real32_T)testVar;

  /* Sum: '<S3>/Sum2' incorporates:
   *  Constant: '<S3>/uR_offset'
   *  Constant: '<S8>/adc_poly_p2'
   *  Gain: '<S8>/adc_poly_p1'
   *  Sum: '<S8>/Sum'
   */
  JumpTest_MDL_B.Sum2 = (JumpTest_MDL_P.adc_poly_p1_Gain *
    JumpTest_MDL_B.MSCubeADC + JumpTest_MDL_P.adc_poly_p2_Value) +
    JumpTest_MDL_P.uR_offset_Value;

  /* Abs: '<Root>/uR_abs' */
  JumpTest_MDL_B.uR_abs = fabs(JumpTest_MDL_B.Sum2);

  /* RelationalOperator: '<S4>/FixPt Relational Operator' incorporates:
   *  Constant: '<Root>/JumpTrigger'
   *  UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  JumpTest_MDL_B.FixPtRelationalOperator = (JumpTest_MDL_P.JumpTrigger_Value >
    JumpTest_MDL_DW.DelayInput1_DSTATE);

  /* Constant: '<Root>/PhiMax' */
  JumpTest_MDL_B.PhiMax = JumpTest_MDL_P.PhiMax_Value;

  /* Constant: '<Root>/JumpVelocity' */
  JumpTest_MDL_B.JumpVelocity = JumpTest_MDL_P.JumpVelocity_Value;

  /* Chart: '<Root>/JumpControl' */
  /* Gateway: JumpControl */
  /* During: JumpControl */
  switch (JumpTest_MDL_DW.is_c3_JumpTest_MDL) {
   case JumpTest_MDL_IN_Balance:
    /* During 'Balance': '<S2>:5' */
    /* '<S2>:22:1' sf_internal_predicateOutput = ... */
    /* '<S2>:22:1' phi > phi_max; */
    if (JumpTest_MDL_B.phi_abs > JumpTest_MDL_B.PhiMax) {
      /* Transition: '<S2>:22' */
      /* Exit 'Balance': '<S2>:5' */
      /* '<S2>:5:2' motor_enable = false; */
      /* '<S2>:5:3' motor_input = uint32(0); */
      JumpTest_MDL_DW.is_c3_JumpTest_MDL = JumpTest_MDL_IN_Idle;

      /* Entry 'Idle': '<S2>:4' */
      /* '<S2>:4:1' motor_enable = false; */
      JumpTest_MDL_B.motor_enable = false;

      /* '<S2>:4:1' motor_input = uint32(0); */
      JumpTest_MDL_B.motor_input = 0U;

      /* '<S2>:4:2' brake_enable = false; */
      JumpTest_MDL_B.brake_enable = false;
    }
    break;

   case JumpTest_MDL_IN_Idle:
    /* During 'Idle': '<S2>:4' */
    /* '<S2>:11:1' sf_internal_predicateOutput = ... */
    /* '<S2>:11:1' jump_event; */
    if (JumpTest_MDL_B.FixPtRelationalOperator) {
      /* Transition: '<S2>:11' */
      JumpTest_MDL_DW.is_c3_JumpTest_MDL = JumpTest_MDL_IN_Jumping;

      /* Entry Internal 'Jumping': '<S2>:3' */
      /* Transition: '<S2>:19' */
      JumpTest_MDL_DW.is_Jumping = JumpTest_MDL_IN_Accelerating;

      /* Entry 'Accelerating': '<S2>:6' */
      /* '<S2>:6:1' motor_enable = true; */
      JumpTest_MDL_B.motor_enable = true;

      /* '<S2>:6:1' motor_input = uint32(1); */
      JumpTest_MDL_B.motor_input = 1U;
    } else {
      /* '<S2>:21:1' sf_internal_predicateOutput = ... */
      /* '<S2>:21:1' phi < phi_max; */
      if (JumpTest_MDL_B.phi_abs < JumpTest_MDL_B.PhiMax) {
        /* Transition: '<S2>:21' */
        JumpTest_MDL_DW.is_c3_JumpTest_MDL = JumpTest_MDL_IN_Balance;

        /* Entry 'Balance': '<S2>:5' */
        /* '<S2>:5:1' motor_enable = true; */
        JumpTest_MDL_B.motor_enable = true;

        /* '<S2>:5:1' motor_input = uint32(2); */
        JumpTest_MDL_B.motor_input = 2U;
      }
    }
    break;

   default:
    /* During 'Jumping': '<S2>:3' */
    if (JumpTest_MDL_DW.is_Jumping == JumpTest_MDL_IN_Accelerating) {
      /* During 'Accelerating': '<S2>:6' */
      /* '<S2>:20:1' sf_internal_predicateOutput = ... */
      /* '<S2>:20:1' uR > jump_velocity; */
      if (JumpTest_MDL_B.uR_abs > JumpTest_MDL_B.JumpVelocity) {
        /* Transition: '<S2>:20' */
        /* Exit 'Accelerating': '<S2>:6' */
        /* '<S2>:6:2' motor_enable = false; */
        JumpTest_MDL_B.motor_enable = false;

        /* '<S2>:6:3' motor_input = uint32(0); */
        JumpTest_MDL_B.motor_input = 0U;
        JumpTest_MDL_DW.is_Jumping = JumpTest_MDL_IN_Braking;

        /* Entry 'Braking': '<S2>:7' */
        /* '<S2>:7:1' brake_enable = true; */
        JumpTest_MDL_B.brake_enable = true;

        /* '<S2>:7:1' brake_counter = int32(0); */
        JumpTest_MDL_DW.brake_counter = 0;
      }
    } else {
      /* During 'Braking': '<S2>:7' */
      /* '<S2>:18:1' sf_internal_predicateOutput = ... */
      /* '<S2>:18:1' 5 < brake_counter; */
      if (5 < JumpTest_MDL_DW.brake_counter) {
        /* Transition: '<S2>:18' */
        /* Exit 'Braking': '<S2>:7' */
        /* '<S2>:7:2' brake_enable = false; */
        JumpTest_MDL_DW.is_Jumping = JumpTest_MDL_IN_NO_ACTIVE_CHILD;
        JumpTest_MDL_DW.is_c3_JumpTest_MDL = JumpTest_MDL_IN_Idle;

        /* Entry 'Idle': '<S2>:4' */
        /* '<S2>:4:1' motor_enable = false; */
        JumpTest_MDL_B.motor_enable = false;

        /* '<S2>:4:1' motor_input = uint32(0); */
        JumpTest_MDL_B.motor_input = 0U;

        /* '<S2>:4:2' brake_enable = false; */
        JumpTest_MDL_B.brake_enable = false;
      } else {
        /* '<S2>:7:2' brake_counter = brake_counter + int32(1); */
        if (JumpTest_MDL_DW.brake_counter > 2147483646) {
          JumpTest_MDL_DW.brake_counter = MAX_int32_T;
        } else {
          JumpTest_MDL_DW.brake_counter++;
        }
      }
    }
    break;
  }

  /* End of Chart: '<Root>/JumpControl' */

  /* Sum: '<S3>/Sum1' incorporates:
   *  Constant: '<S3>/uK_offset'
   */
  JumpTest_MDL_B.Sum1 = rtb_half + JumpTest_MDL_P.uK_offset_Value;

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/AccelerateTorque'
   *  Constant: '<Root>/ZeroTorque'
   */
  switch (JumpTest_MDL_B.motor_input) {
   case 0:
    JumpTest_MDL_B.MultiportSwitch = JumpTest_MDL_P.ZeroTorque_Value;
    break;

   case 1:
    JumpTest_MDL_B.MultiportSwitch = JumpTest_MDL_P.AccelerateTorque_Value;
    break;

   default:
    /* Sum: '<S1>/Sum' incorporates:
     *  Gain: '<S1>/K_Phi'
     *  Gain: '<S1>/K_u_K'
     *  Gain: '<S1>/K_u_R'
     */
    u0 = (real32_T)((JumpTest_MDL_P.K_Phi_Gain * JumpTest_MDL_B.Sum +
                     JumpTest_MDL_P.K_u_K_Gain * JumpTest_MDL_B.Sum1) +
                    JumpTest_MDL_P.K_u_R_Gain * JumpTest_MDL_B.Sum2);

    /* Saturate: '<S1>/Saturation' */
    if (u0 > JumpTest_MDL_P.Saturation_UpperSat) {
      JumpTest_MDL_B.MultiportSwitch = JumpTest_MDL_P.Saturation_UpperSat;
    } else if (u0 < JumpTest_MDL_P.Saturation_LowerSat) {
      JumpTest_MDL_B.MultiportSwitch = JumpTest_MDL_P.Saturation_LowerSat;
    } else {
      JumpTest_MDL_B.MultiportSwitch = u0;
    }

    /* End of Saturate: '<S1>/Saturation' */
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* Update for UnitDelay: '<S5>/CompDelay' */
  JumpTest_MDL_DW.CompDelay_DSTATE = rtb_offset_Add;

  /* Update for UnitDelay: '<S4>/Delay Input1' incorporates:
   *  Constant: '<Root>/JumpTrigger'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  JumpTest_MDL_DW.DelayInput1_DSTATE = JumpTest_MDL_P.JumpTrigger_Value;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.02s, 0.0s] */
    rtExtModeUpload(0, JumpTest_MDL_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.02s, 0.0s] */
    if ((rtmGetTFinal(JumpTest_MDL_M)!=-1) &&
        !((rtmGetTFinal(JumpTest_MDL_M)-JumpTest_MDL_M->Timing.taskTime0) >
          JumpTest_MDL_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(JumpTest_MDL_M, "Simulation finished");
    }

    if (rtmGetStopRequested(JumpTest_MDL_M)) {
      rtmSetErrorStatus(JumpTest_MDL_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  JumpTest_MDL_M->Timing.taskTime0 =
    (++JumpTest_MDL_M->Timing.clockTick0) * JumpTest_MDL_M->Timing.stepSize0;
}

/* Model initialize function */
void JumpTest_MDL_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)JumpTest_MDL_M, 0,
                sizeof(RT_MODEL_JumpTest_MDL_T));
  rtmSetTFinal(JumpTest_MDL_M, -1);
  JumpTest_MDL_M->Timing.stepSize0 = 0.02;

  /* External mode info */
  JumpTest_MDL_M->Sizes.checksums[0] = (2664299282U);
  JumpTest_MDL_M->Sizes.checksums[1] = (1108430576U);
  JumpTest_MDL_M->Sizes.checksums[2] = (2724167882U);
  JumpTest_MDL_M->Sizes.checksums[3] = (2209805250U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    JumpTest_MDL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(JumpTest_MDL_M->extModeInfo,
      &JumpTest_MDL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(JumpTest_MDL_M->extModeInfo,
                        JumpTest_MDL_M->Sizes.checksums);
    rteiSetTPtr(JumpTest_MDL_M->extModeInfo, rtmGetTPtr(JumpTest_MDL_M));
  }

  /* block I/O */
  (void) memset(((void *) &JumpTest_MDL_B), 0,
                sizeof(B_JumpTest_MDL_T));

  /* states (dwork) */
  (void) memset((void *)&JumpTest_MDL_DW, 0,
                sizeof(DW_JumpTest_MDL_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    JumpTest_MDL_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for Constant: '<Root>/PhiMax' */
  JumpTest_MDL_B.PhiMax = JumpTest_MDL_P.PhiMax_Value;

  /* Start for Constant: '<Root>/JumpVelocity' */
  JumpTest_MDL_B.JumpVelocity = JumpTest_MDL_P.JumpVelocity_Value;

  /* InitializeConditions for UnitDelay: '<S5>/CompDelay' */
  JumpTest_MDL_DW.CompDelay_DSTATE = JumpTest_MDL_P.CompDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  JumpTest_MDL_DW.DelayInput1_DSTATE = JumpTest_MDL_P.RisingEdge_vinit;

  /* SystemInitialize for Chart: '<Root>/JumpControl' */
  JumpTest_MDL_DW.is_Jumping = JumpTest_MDL_IN_NO_ACTIVE_CHILD;
  JumpTest_MDL_DW.brake_counter = 0;

  /* Entry: JumpControl */
  JumpTest_MDL_DW.is_active_c3_JumpTest_MDL = 1U;

  /* Entry Internal: JumpControl */
  /* Transition: '<S2>:10' */
  JumpTest_MDL_DW.is_c3_JumpTest_MDL = JumpTest_MDL_IN_Idle;

  /* Entry 'Idle': '<S2>:4' */
  /* '<S2>:4:1' motor_enable = false; */
  JumpTest_MDL_B.motor_enable = false;

  /* '<S2>:4:1' motor_input = uint32(0); */
  JumpTest_MDL_B.motor_input = 0U;

  /* '<S2>:4:2' brake_enable = false; */
  JumpTest_MDL_B.brake_enable = false;
}

/* Model terminate function */
void JumpTest_MDL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

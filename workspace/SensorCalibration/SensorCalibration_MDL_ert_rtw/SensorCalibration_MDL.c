/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorCalibration_MDL.c
 *
 * Code generated for Simulink model 'SensorCalibration_MDL'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jul 19 11:07:51 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SensorCalibration_MDL.h"
#include "SensorCalibration_MDL_private.h"
#include "SensorCalibration_MDL_dt.h"

/* Block signals (auto storage) */
B_SensorCalibration_MDL_T SensorCalibration_MDL_B;

/* Block states (auto storage) */
DW_SensorCalibration_MDL_T SensorCalibration_MDL_DW;

/* Real-time model */
RT_MODEL_SensorCalibration_MD_T SensorCalibration_MDL_M_;
RT_MODEL_SensorCalibration_MD_T *const SensorCalibration_MDL_M =
  &SensorCalibration_MDL_M_;

/* Model step function */
void SensorCalibration_MDL_step(void)
{
  /* S-Function (MS_Cube_Sensors): '<Root>/MS-Cube-Sensors' */
  MS_Cube_Sensors_Output(&SensorCalibration_MDL_B.x1_dd__SIG,
    &SensorCalibration_MDL_B.y1_dd__SIG, &SensorCalibration_MDL_B.w1__SIG,
    &SensorCalibration_MDL_B.x2_dd__SIG, &SensorCalibration_MDL_B.y2_dd__SIG,
    &SensorCalibration_MDL_B.w2__SIG);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.02s, 0.0s] */
    rtExtModeUpload(0, SensorCalibration_MDL_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.02s, 0.0s] */
    if ((rtmGetTFinal(SensorCalibration_MDL_M)!=-1) &&
        !((rtmGetTFinal(SensorCalibration_MDL_M)-
           SensorCalibration_MDL_M->Timing.taskTime0) >
          SensorCalibration_MDL_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(SensorCalibration_MDL_M, "Simulation finished");
    }

    if (rtmGetStopRequested(SensorCalibration_MDL_M)) {
      rtmSetErrorStatus(SensorCalibration_MDL_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SensorCalibration_MDL_M->Timing.taskTime0 =
    (++SensorCalibration_MDL_M->Timing.clockTick0) *
    SensorCalibration_MDL_M->Timing.stepSize0;
}

/* Model initialize function */
void SensorCalibration_MDL_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SensorCalibration_MDL_M, 0,
                sizeof(RT_MODEL_SensorCalibration_MD_T));
  rtmSetTFinal(SensorCalibration_MDL_M, 10.0);
  SensorCalibration_MDL_M->Timing.stepSize0 = 0.02;

  /* External mode info */
  SensorCalibration_MDL_M->Sizes.checksums[0] = (960752129U);
  SensorCalibration_MDL_M->Sizes.checksums[1] = (1356753360U);
  SensorCalibration_MDL_M->Sizes.checksums[2] = (1876880783U);
  SensorCalibration_MDL_M->Sizes.checksums[3] = (3302340253U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    SensorCalibration_MDL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(SensorCalibration_MDL_M->extModeInfo,
      &SensorCalibration_MDL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(SensorCalibration_MDL_M->extModeInfo,
                        SensorCalibration_MDL_M->Sizes.checksums);
    rteiSetTPtr(SensorCalibration_MDL_M->extModeInfo, rtmGetTPtr
                (SensorCalibration_MDL_M));
  }

  /* block I/O */
  (void) memset(((void *) &SensorCalibration_MDL_B), 0,
                sizeof(B_SensorCalibration_MDL_T));

  /* states (dwork) */
  (void) memset((void *)&SensorCalibration_MDL_DW, 0,
                sizeof(DW_SensorCalibration_MDL_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    SensorCalibration_MDL_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }
}

/* Model terminate function */
void SensorCalibration_MDL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

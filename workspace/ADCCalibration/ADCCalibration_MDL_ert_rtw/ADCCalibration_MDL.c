/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ADCCalibration_MDL.c
 *
 * Code generated for Simulink model 'ADCCalibration_MDL'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jul 19 13:34:28 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADCCalibration_MDL.h"
#include "ADCCalibration_MDL_private.h"
#include "ADCCalibration_MDL_dt.h"

/* Block signals (auto storage) */
B_ADCCalibration_MDL_T ADCCalibration_MDL_B;

/* Block states (auto storage) */
DW_ADCCalibration_MDL_T ADCCalibration_MDL_DW;

/* Real-time model */
RT_MODEL_ADCCalibration_MDL_T ADCCalibration_MDL_M_;
RT_MODEL_ADCCalibration_MDL_T *const ADCCalibration_MDL_M =
  &ADCCalibration_MDL_M_;

/* Model step function */
void ADCCalibration_MDL_step(void)
{
  /* S-Function (MS_Cube_ADC): '<Root>/MS-Cube-ADC' */
  unsigned short testVar = MS_Cube_ADC_Output();
  ADCCalibration_MDL_B.MSCubeADC = (real32_T)testVar;

  /* S-Function (MS_Cube_Motor): '<Root>/MS-Cube-Motor' */
  MS_Cube_Motor_Output(&ADCCalibration_MDL_P.RPM_Value,
                       ADCCalibration_MDL_P.Enable_Value);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.02s, 0.0s] */
    rtExtModeUpload(0, ADCCalibration_MDL_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.02s, 0.0s] */
    if ((rtmGetTFinal(ADCCalibration_MDL_M)!=-1) &&
        !((rtmGetTFinal(ADCCalibration_MDL_M)-
           ADCCalibration_MDL_M->Timing.taskTime0) >
          ADCCalibration_MDL_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ADCCalibration_MDL_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ADCCalibration_MDL_M)) {
      rtmSetErrorStatus(ADCCalibration_MDL_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  ADCCalibration_MDL_M->Timing.taskTime0 =
    (++ADCCalibration_MDL_M->Timing.clockTick0) *
    ADCCalibration_MDL_M->Timing.stepSize0;
}

/* Model initialize function */
void ADCCalibration_MDL_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ADCCalibration_MDL_M, 0,
                sizeof(RT_MODEL_ADCCalibration_MDL_T));
  rtmSetTFinal(ADCCalibration_MDL_M, 20.0);
  ADCCalibration_MDL_M->Timing.stepSize0 = 0.02;

  /* External mode info */
  ADCCalibration_MDL_M->Sizes.checksums[0] = (2790587673U);
  ADCCalibration_MDL_M->Sizes.checksums[1] = (2470515835U);
  ADCCalibration_MDL_M->Sizes.checksums[2] = (1726947105U);
  ADCCalibration_MDL_M->Sizes.checksums[3] = (3784518053U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    ADCCalibration_MDL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ADCCalibration_MDL_M->extModeInfo,
      &ADCCalibration_MDL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ADCCalibration_MDL_M->extModeInfo,
                        ADCCalibration_MDL_M->Sizes.checksums);
    rteiSetTPtr(ADCCalibration_MDL_M->extModeInfo, rtmGetTPtr
                (ADCCalibration_MDL_M));
  }

  /* block I/O */
  (void) memset(((void *) &ADCCalibration_MDL_B), 0,
                sizeof(B_ADCCalibration_MDL_T));

  /* states (dwork) */
  (void) memset((void *)&ADCCalibration_MDL_DW, 0,
                sizeof(DW_ADCCalibration_MDL_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ADCCalibration_MDL_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }
}

/* Model terminate function */
void ADCCalibration_MDL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

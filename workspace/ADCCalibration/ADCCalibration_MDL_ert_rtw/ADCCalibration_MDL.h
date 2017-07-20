/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ADCCalibration_MDL.h
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

#ifndef RTW_HEADER_ADCCalibration_MDL_h_
#define RTW_HEADER_ADCCalibration_MDL_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef ADCCalibration_MDL_COMMON_INCLUDES_
# define ADCCalibration_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* ADCCalibration_MDL_COMMON_INCLUDES_ */

#include "ADCCalibration_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real32_T MSCubeADC;                  /* '<Root>/MS-Cube-ADC' */
} B_ADCCalibration_MDL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } ADCScope_PWORK;                    /* '<Root>/ADCScope' */
} DW_ADCCalibration_MDL_T;

/* Parameters (auto storage) */
struct P_ADCCalibration_MDL_T_ {
  real32_T RPM_Value;                  /* Computed Parameter: RPM_Value
                                        * Referenced by: '<Root>/RPM'
                                        */
  boolean_T Enable_Value;              /* Computed Parameter: Enable_Value
                                        * Referenced by: '<Root>/Enable'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ADCCalibration_MDL_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ADCCalibration_MDL_T ADCCalibration_MDL_P;

/* Block signals (auto storage) */
extern B_ADCCalibration_MDL_T ADCCalibration_MDL_B;

/* Block states (auto storage) */
extern DW_ADCCalibration_MDL_T ADCCalibration_MDL_DW;

/* Model entry point functions */
extern void ADCCalibration_MDL_initialize(void);
extern void ADCCalibration_MDL_step(void);
extern void ADCCalibration_MDL_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ADCCalibration_MDL_T *const ADCCalibration_MDL_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ADCCalibration_MDL'
 */
#endif                                 /* RTW_HEADER_ADCCalibration_MDL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

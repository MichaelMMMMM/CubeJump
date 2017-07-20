/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorCalibration_MDL.h
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

#ifndef RTW_HEADER_SensorCalibration_MDL_h_
#define RTW_HEADER_SensorCalibration_MDL_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef SensorCalibration_MDL_COMMON_INCLUDES_
# define SensorCalibration_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* SensorCalibration_MDL_COMMON_INCLUDES_ */

#include "SensorCalibration_MDL_types.h"

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
  real32_T x1_dd__SIG;                 /* '<Root>/MS-Cube-Sensors' */
  real32_T y1_dd__SIG;                 /* '<Root>/MS-Cube-Sensors' */
  real32_T w1__SIG;                    /* '<Root>/MS-Cube-Sensors' */
  real32_T x2_dd__SIG;                 /* '<Root>/MS-Cube-Sensors' */
  real32_T y2_dd__SIG;                 /* '<Root>/MS-Cube-Sensors' */
  real32_T w2__SIG;                    /* '<Root>/MS-Cube-Sensors' */
} B_SensorCalibration_MDL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[6];
  } SensorScope_PWORK;                 /* '<Root>/SensorScope' */
} DW_SensorCalibration_MDL_T;

/* Real-time Model Data Structure */
struct tag_RTM_SensorCalibration_MDL_T {
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

/* Block signals (auto storage) */
extern B_SensorCalibration_MDL_T SensorCalibration_MDL_B;

/* Block states (auto storage) */
extern DW_SensorCalibration_MDL_T SensorCalibration_MDL_DW;

/* Model entry point functions */
extern void SensorCalibration_MDL_initialize(void);
extern void SensorCalibration_MDL_step(void);
extern void SensorCalibration_MDL_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SensorCalibration_MD_T *const SensorCalibration_MDL_M;

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
 * '<Root>' : 'SensorCalibration_MDL'
 */
#endif                                 /* RTW_HEADER_SensorCalibration_MDL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

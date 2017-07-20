/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BalanceTest_MDL.h
 *
 * Code generated for Simulink model 'BalanceTest_MDL'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jul 19 15:21:17 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BalanceTest_MDL_h_
#define RTW_HEADER_BalanceTest_MDL_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef BalanceTest_MDL_COMMON_INCLUDES_
# define BalanceTest_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* BalanceTest_MDL_COMMON_INCLUDES_ */

#include "BalanceTest_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
  real_T offset_Add;                   /* '<S3>/offset_Add' */
  real_T half;                         /* '<S4>/half' */
  real_T first_run_select;             /* '<S1>/first_run_select' */
  real_T Sum;                          /* '<S5>/Sum' */
  real32_T x1_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T y1_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T w1_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T x2_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T y2_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T w2_raw__SIG;                /* '<Root>/MS-Cube-Sensors' */
  real32_T MSCubeADC;                  /* '<Root>/MS-Cube-ADC' */
  real32_T Saturation;                 /* '<Root>/Saturation' */
  boolean_T Compare;                   /* '<S2>/Compare' */
} B_BalanceTest_MDL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[2];
  } phi_Scope_PWORK;                   /* '<Root>/phi_Scope' */

  struct {
    void *LoggedData;
  } torque_Scope_PWORK;                /* '<Root>/torque_Scope' */

  struct {
    void *LoggedData;
  } u_K_Scope_PWORK;                   /* '<Root>/u_K_Scope' */

  struct {
    void *LoggedData;
  } u_R_Scope_PWORK;                   /* '<Root>/u_R_Scope' */
} DW_BalanceTest_MDL_T;

/* Parameters (auto storage) */
struct P_BalanceTest_MDL_T_ {
  real_T K_u_K;                        /* Variable: K_u_K
                                        * Referenced by: '<Root>/K_u_K'
                                        */
  real_T K_u_R;                        /* Variable: K_u_R
                                        * Referenced by: '<Root>/K_u_R'
                                        */
  real_T Ta;                           /* Variable: Ta
                                        * Referenced by:
                                        *   '<S1>/Ta_Gain'
                                        *   '<S1>/Step'
                                        */
  real_T alpha_comp;                   /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S1>/alpha_Gain'
                                        *   '<S1>/alpha_comp_Gain'
                                        */
  real_T phi_max;                      /* Variable: phi_max
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T r_S1;                         /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S3>/SensorAlpha'
                                        *   '<S3>/SensorAlpha1'
                                        */
  real_T r_S2;                         /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S3>/SensorAlpha'
                                        *   '<S3>/SensorAlpha1'
                                        */
  real_T y1_poly_p2_Value;             /* Expression: y1_poly.p2
                                        * Referenced by: '<S10>/y1_poly_p2'
                                        */
  real_T y2_poly_p2_Value;             /* Expression: y2_poly.p2
                                        * Referenced by: '<S11>/y2_poly_p2'
                                        */
  real_T x1_poly_p2_Value;             /* Expression: x1_poly.p2
                                        * Referenced by: '<S8>/x1_poly_p2'
                                        */
  real_T x2_poly_p2_Value;             /* Expression: x2_poly.p2
                                        * Referenced by: '<S9>/x2_poly_p2'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T estimate_offset_Value;        /* Expression: pi/2
                                        * Referenced by: '<S3>/estimate_offset'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<S1>/Step'
                                        */
  real_T w1_poly_p2_Value;             /* Expression: w1_poly.p2
                                        * Referenced by: '<S6>/w1_poly_p2'
                                        */
  real_T w2_poly_p2_Value;             /* Expression: w2_poly.p2
                                        * Referenced by: '<S7>/w2_poly_p2'
                                        */
  real_T half_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S4>/half'
                                        */
  real_T CompDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/CompDelay'
                                        */
  real_T first_run_select_Threshold;   /* Expression: 0
                                        * Referenced by: '<S1>/first_run_select'
                                        */
  real_T K_Phi_Gain;                   /* Expression: 1.8
                                        * Referenced by: '<Root>/K_Phi'
                                        */
  real_T adc_poly_p2_Value;            /* Expression: adc_poly.p2
                                        * Referenced by: '<S5>/adc_poly_p2'
                                        */
  real32_T y1_poly_p1_Gain;            /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S10>/y1_poly_p1'
                                        */
  real32_T y2_poly_p1_Gain;            /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S11>/y2_poly_p1'
                                        */
  real32_T x1_poly_p1_Gain;            /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S8>/x1_poly_p1'
                                        */
  real32_T x2_poly_p1_Gain;            /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S9>/x2_poly_p1'
                                        */
  real32_T w1_poly_p1_Gain;            /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S6>/w1_poly_p1'
                                        */
  real32_T w2_poly_p1_Gain;            /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S7>/w2_poly_p1'
                                        */
  real32_T adc_poly_p1_Gain;           /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S5>/adc_poly_p1'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<Root>/Saturation'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_BalanceTest_MDL_T {
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
extern P_BalanceTest_MDL_T BalanceTest_MDL_P;

/* Block signals (auto storage) */
extern B_BalanceTest_MDL_T BalanceTest_MDL_B;

/* Block states (auto storage) */
extern DW_BalanceTest_MDL_T BalanceTest_MDL_DW;

/* Model entry point functions */
extern void BalanceTest_MDL_initialize(void);
extern void BalanceTest_MDL_step(void);
extern void BalanceTest_MDL_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BalanceTest_MDL_T *const BalanceTest_MDL_M;

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
 * '<Root>' : 'BalanceTest_MDL'
 * '<S1>'   : 'BalanceTest_MDL/ComplementaryFilter'
 * '<S2>'   : 'BalanceTest_MDL/EnableCheck'
 * '<S3>'   : 'BalanceTest_MDL/PhiEstimate'
 * '<S4>'   : 'BalanceTest_MDL/WAverage'
 * '<S5>'   : 'BalanceTest_MDL/adc_Calibration'
 * '<S6>'   : 'BalanceTest_MDL/w1_Calibration'
 * '<S7>'   : 'BalanceTest_MDL/w2_Calibration'
 * '<S8>'   : 'BalanceTest_MDL/x1_Calibration'
 * '<S9>'   : 'BalanceTest_MDL/x2_Calibration'
 * '<S10>'  : 'BalanceTest_MDL/y1_Calibration'
 * '<S11>'  : 'BalanceTest_MDL/y2_Calibration'
 */
#endif                                 /* RTW_HEADER_BalanceTest_MDL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

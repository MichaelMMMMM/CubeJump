/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BremsenZeitvarianzTest_MDL.h
 *
 * Code generated for Simulink model 'BremsenZeitvarianzTest_MDL'.
 *
 * Model version                  : 1.40
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jul 20 14:28:21 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BremsenZeitvarianzTest_MDL_h_
#define RTW_HEADER_BremsenZeitvarianzTest_MDL_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef BremsenZeitvarianzTest_MDL_COMMON_INCLUDES_
# define BremsenZeitvarianzTest_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* BremsenZeitvarianzTest_MDL_COMMON_INCLUDES_ */

#include "BremsenZeitvarianzTest_MDL_types.h"

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
  real_T Sum;                          /* '<S7>/Sum' */
  real_T half;                         /* '<S6>/half' */
  real_T first_run_select;             /* '<S4>/first_run_select' */
  real32_T MSCubeADC;                  /* '<S2>/MS-Cube-ADC' */
  real32_T x1_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  real32_T y1_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  real32_T w1_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  real32_T x2_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  real32_T y2_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  real32_T w2_raw__SIG;                /* '<S2>/MS-Cube-Sensors' */
  boolean_T Switch;                    /* '<Root>/Switch' */
  boolean_T MotorAND;                  /* '<Root>/MotorAND' */
  boolean_T In;                        /* '<S3>/In' */
} B_BremsenZeitvarianzTest_MDL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } BrakeFlag_PWORK;                   /* '<Root>/BrakeFlag' */

  struct {
    void *LoggedData;
  } DebugScope_PWORK;                  /* '<Root>/DebugScope' */

  struct {
    void *LoggedData;
  } phi_Scope_PWORK;                   /* '<Root>/phi_Scope' */

  struct {
    void *LoggedData;
  } u_K_Scope_PWORK;                   /* '<Root>/u_K_Scope' */

  struct {
    void *LoggedData;
  } u_R_Scope_PWORK;                   /* '<Root>/u_R_Scope' */

  int8_T SampleandHold_SubsysRanBC;    /* '<Root>/Sample and Hold' */
} DW_BremsenZeitvarianzTest_MDL_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SampleandHold_Trig_ZCE;   /* '<Root>/Sample and Hold' */
} PrevZCX_BremsenZeitvarianzTes_T;

/* Parameters (auto storage) */
struct P_BremsenZeitvarianzTest_MDL_T_ {
  real_T Ta;                           /* Variable: Ta
                                        * Referenced by:
                                        *   '<S4>/Ta_Gain'
                                        *   '<S4>/Step'
                                        */
  real_T alpha_comp;                   /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S4>/alpha_Gain'
                                        *   '<S4>/alpha_comp_Gain'
                                        */
  real_T jump_velocity;                /* Variable: jump_velocity
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T r_S1;                         /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S5>/SensorAlpha'
                                        *   '<S5>/SensorAlpha1'
                                        */
  real_T r_S2;                         /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S5>/SensorAlpha'
                                        *   '<S5>/SensorAlpha1'
                                        */
  real_T BrakeSwitchSelect_Value;      /* Expression: 0
                                        * Referenced by: '<Root>/BrakeSwitchSelect'
                                        */
  real_T adc_poly_p2_Value;            /* Expression: adc_poly.p2
                                        * Referenced by: '<S7>/adc_poly_p2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T y1_poly_p2_Value;             /* Expression: y1_poly.p2
                                        * Referenced by: '<S12>/y1_poly_p2'
                                        */
  real_T y2_poly_p2_Value;             /* Expression: y2_poly.p2
                                        * Referenced by: '<S13>/y2_poly_p2'
                                        */
  real_T x1_poly_p2_Value;             /* Expression: x1_poly.p2
                                        * Referenced by: '<S10>/x1_poly_p2'
                                        */
  real_T x2_poly_p2_Value;             /* Expression: x2_poly.p2
                                        * Referenced by: '<S11>/x2_poly_p2'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T estimate_offset_Value;        /* Expression: pi/2
                                        * Referenced by: '<S5>/estimate_offset'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T w1_poly_p2_Value;             /* Expression: w1_poly.p2
                                        * Referenced by: '<S8>/w1_poly_p2'
                                        */
  real_T w2_poly_p2_Value;             /* Expression: w2_poly.p2
                                        * Referenced by: '<S9>/w2_poly_p2'
                                        */
  real_T half_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S6>/half'
                                        */
  real_T CompDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/CompDelay'
                                        */
  real_T first_run_select_Threshold;   /* Expression: 0
                                        * Referenced by: '<S4>/first_run_select'
                                        */
  real32_T adc_poly_p1_Gain;           /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S7>/adc_poly_p1'
                                        */
  real32_T y1_poly_p1_Gain;            /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S12>/y1_poly_p1'
                                        */
  real32_T y2_poly_p1_Gain;            /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S13>/y2_poly_p1'
                                        */
  real32_T x1_poly_p1_Gain;            /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S10>/x1_poly_p1'
                                        */
  real32_T x2_poly_p1_Gain;            /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S11>/x2_poly_p1'
                                        */
  real32_T w1_poly_p1_Gain;            /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S8>/w1_poly_p1'
                                        */
  real32_T w2_poly_p1_Gain;            /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S9>/w2_poly_p1'
                                        */
  real32_T MotorTorque_Value;          /* Computed Parameter: MotorTorque_Value
                                        * Referenced by: '<Root>/MotorTorque'
                                        */
  boolean_T CustomValueBrake_Value;    /* Computed Parameter: CustomValueBrake_Value
                                        * Referenced by: '<Root>/CustomValueBrake'
                                        */
  boolean_T _Y0;                       /* Computed Parameter: _Y0
                                        * Referenced by: '<S3>/ '
                                        */
  boolean_T Reset_Value;               /* Computed Parameter: Reset_Value
                                        * Referenced by: '<Root>/Reset'
                                        */
  boolean_T Enable_Jump_Value;         /* Computed Parameter: Enable_Jump_Value
                                        * Referenced by: '<Root>/Enable_Jump'
                                        */
  boolean_T Enable_Motor_Value;        /* Computed Parameter: Enable_Motor_Value
                                        * Referenced by: '<Root>/Enable_Motor'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_BremsenZeitvarianzTes_T {
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
extern P_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_P;

/* Block signals (auto storage) */
extern B_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_B;

/* Block states (auto storage) */
extern DW_BremsenZeitvarianzTest_MDL_T BremsenZeitvarianzTest_MDL_DW;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_BremsenZeitvarianzTes_T BremsenZeitvarianzTest__PrevZCX;

/* Model entry point functions */
extern void BremsenZeitvarianzTest_MDL_initialize(void);
extern void BremsenZeitvarianzTest_MDL_step(void);
extern void BremsenZeitvarianzTest_MDL_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BremsenZeitvarianzTe_T *const BremsenZeitvarianzTest_MDL_M;

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
 * '<Root>' : 'BremsenZeitvarianzTest_MDL'
 * '<S1>'   : 'BremsenZeitvarianzTest_MDL/Compare To Constant'
 * '<S2>'   : 'BremsenZeitvarianzTest_MDL/Measurement'
 * '<S3>'   : 'BremsenZeitvarianzTest_MDL/Sample and Hold'
 * '<S4>'   : 'BremsenZeitvarianzTest_MDL/Measurement/ComplementaryFilter'
 * '<S5>'   : 'BremsenZeitvarianzTest_MDL/Measurement/PhiEstimate'
 * '<S6>'   : 'BremsenZeitvarianzTest_MDL/Measurement/WAverage'
 * '<S7>'   : 'BremsenZeitvarianzTest_MDL/Measurement/adc_Calibration'
 * '<S8>'   : 'BremsenZeitvarianzTest_MDL/Measurement/w1_Calibration'
 * '<S9>'   : 'BremsenZeitvarianzTest_MDL/Measurement/w2_Calibration'
 * '<S10>'  : 'BremsenZeitvarianzTest_MDL/Measurement/x1_Calibration'
 * '<S11>'  : 'BremsenZeitvarianzTest_MDL/Measurement/x2_Calibration'
 * '<S12>'  : 'BremsenZeitvarianzTest_MDL/Measurement/y1_Calibration'
 * '<S13>'  : 'BremsenZeitvarianzTest_MDL/Measurement/y2_Calibration'
 */
#endif                                 /* RTW_HEADER_BremsenZeitvarianzTest_MDL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

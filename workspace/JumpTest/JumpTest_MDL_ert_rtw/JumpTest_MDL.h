/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: JumpTest_MDL.h
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

#ifndef RTW_HEADER_JumpTest_MDL_h_
#define RTW_HEADER_JumpTest_MDL_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef JumpTest_MDL_COMMON_INCLUDES_
# define JumpTest_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* JumpTest_MDL_COMMON_INCLUDES_ */

#include "JumpTest_MDL_types.h"

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
  real_T Sum;                          /* '<S3>/Sum' */
  real_T phi_abs;                      /* '<Root>/phi_abs' */
  real_T Sum2;                         /* '<S3>/Sum2' */
  real_T uR_abs;                       /* '<Root>/uR_abs' */
  real_T PhiMax;                       /* '<Root>/PhiMax' */
  real_T JumpVelocity;                 /* '<Root>/JumpVelocity' */
  real_T Sum1;                         /* '<S3>/Sum1' */
  real32_T x1_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T y1_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T w1_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T x2_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T y2_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T w2_raw__SIG;                /* '<S3>/MS-Cube-Sensors' */
  real32_T MSCubeADC;                  /* '<S3>/MS-Cube-ADC' */
  real32_T MultiportSwitch;            /* '<Root>/Multiport Switch' */
  uint32_T motor_input;                /* '<Root>/JumpControl' */
  boolean_T FixPtRelationalOperator;   /* '<S4>/FixPt Relational Operator' */
  boolean_T motor_enable;              /* '<Root>/JumpControl' */
  boolean_T brake_enable;              /* '<Root>/JumpControl' */
} B_JumpTest_MDL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T CompDelay_DSTATE;             /* '<S5>/CompDelay' */
  real_T DelayInput1_DSTATE;           /* '<S4>/Delay Input1' */
  struct {
    void *LoggedData;
  } MotorSelectScope_PWORK;            /* '<Root>/MotorSelectScope' */

  struct {
    void *LoggedData;
  } phi_Scope_PWORK;                   /* '<Root>/phi_Scope' */

  struct {
    void *LoggedData;
  } torqueScope_PWORK;                 /* '<Root>/torqueScope' */

  struct {
    void *LoggedData;
  } u_K_Scope_PWORK;                   /* '<Root>/u_K_Scope' */

  struct {
    void *LoggedData;
  } u_R_Scope_PWORK;                   /* '<Root>/u_R_Scope' */

  int32_T brake_counter;               /* '<Root>/JumpControl' */
  uint8_T is_active_c3_JumpTest_MDL;   /* '<Root>/JumpControl' */
  uint8_T is_c3_JumpTest_MDL;          /* '<Root>/JumpControl' */
  uint8_T is_Jumping;                  /* '<Root>/JumpControl' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/JumpControl' */
} DW_JumpTest_MDL_T;

/* Parameters (auto storage) */
struct P_JumpTest_MDL_T_ {
  real_T Ta;                           /* Variable: Ta
                                        * Referenced by:
                                        *   '<S5>/Ta_Gain'
                                        *   '<S5>/Step'
                                        */
  real_T alpha_comp;                   /* Variable: alpha_comp
                                        * Referenced by:
                                        *   '<S5>/alpha_Gain'
                                        *   '<S5>/alpha_comp_Gain'
                                        */
  real_T r_S1;                         /* Variable: r_S1
                                        * Referenced by:
                                        *   '<S6>/SensorAlpha'
                                        *   '<S6>/SensorAlpha1'
                                        */
  real_T r_S2;                         /* Variable: r_S2
                                        * Referenced by:
                                        *   '<S6>/SensorAlpha'
                                        *   '<S6>/SensorAlpha1'
                                        */
  boolean_T RisingEdge_vinit;          /* Mask Parameter: RisingEdge_vinit
                                        * Referenced by: '<S4>/Delay Input1'
                                        */
  real_T K_u_R_Gain;                   /* Expression: 0.0008
                                        * Referenced by: '<S1>/K_u_R'
                                        */
  real_T K_u_K_Gain;                   /* Expression: 0.3
                                        * Referenced by: '<S1>/K_u_K'
                                        */
  real_T K_Phi_Gain;                   /* Expression: 2.42
                                        * Referenced by: '<S1>/K_Phi'
                                        */
  real_T y1_poly_p2_Value;             /* Expression: y1_poly.p2
                                        * Referenced by: '<S13>/y1_poly_p2'
                                        */
  real_T y2_poly_p2_Value;             /* Expression: y2_poly.p2
                                        * Referenced by: '<S14>/y2_poly_p2'
                                        */
  real_T x1_poly_p2_Value;             /* Expression: x1_poly.p2
                                        * Referenced by: '<S11>/x1_poly_p2'
                                        */
  real_T x2_poly_p2_Value;             /* Expression: x2_poly.p2
                                        * Referenced by: '<S12>/x2_poly_p2'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T estimate_offset_Value;        /* Expression: pi/2
                                        * Referenced by: '<S6>/estimate_offset'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S5>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: -1
                                        * Referenced by: '<S5>/Step'
                                        */
  real_T w1_poly_p2_Value;             /* Expression: w1_poly.p2
                                        * Referenced by: '<S9>/w1_poly_p2'
                                        */
  real_T w2_poly_p2_Value;             /* Expression: w2_poly.p2
                                        * Referenced by: '<S10>/w2_poly_p2'
                                        */
  real_T half_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S7>/half'
                                        */
  real_T CompDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S5>/CompDelay'
                                        */
  real_T first_run_select_Threshold;   /* Expression: 0
                                        * Referenced by: '<S5>/first_run_select'
                                        */
  real_T phi_offset_Value;             /* Expression: 0.04
                                        * Referenced by: '<S3>/phi_offset'
                                        */
  real_T adc_poly_p2_Value;            /* Expression: adc_poly.p2
                                        * Referenced by: '<S8>/adc_poly_p2'
                                        */
  real_T uR_offset_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/uR_offset'
                                        */
  real_T JumpTrigger_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/JumpTrigger'
                                        */
  real_T PhiMax_Value;                 /* Expression: degtorad(20)
                                        * Referenced by: '<Root>/PhiMax'
                                        */
  real_T JumpVelocity_Value;           /* Expression: 215
                                        * Referenced by: '<Root>/JumpVelocity'
                                        */
  real_T uK_offset_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/uK_offset'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real32_T AccelerateTorque_Value;     /* Computed Parameter: AccelerateTorque_Value
                                        * Referenced by: '<Root>/AccelerateTorque'
                                        */
  real32_T ZeroTorque_Value;           /* Computed Parameter: ZeroTorque_Value
                                        * Referenced by: '<Root>/ZeroTorque'
                                        */
  real32_T y1_poly_p1_Gain;            /* Computed Parameter: y1_poly_p1_Gain
                                        * Referenced by: '<S13>/y1_poly_p1'
                                        */
  real32_T y2_poly_p1_Gain;            /* Computed Parameter: y2_poly_p1_Gain
                                        * Referenced by: '<S14>/y2_poly_p1'
                                        */
  real32_T x1_poly_p1_Gain;            /* Computed Parameter: x1_poly_p1_Gain
                                        * Referenced by: '<S11>/x1_poly_p1'
                                        */
  real32_T x2_poly_p1_Gain;            /* Computed Parameter: x2_poly_p1_Gain
                                        * Referenced by: '<S12>/x2_poly_p1'
                                        */
  real32_T w1_poly_p1_Gain;            /* Computed Parameter: w1_poly_p1_Gain
                                        * Referenced by: '<S9>/w1_poly_p1'
                                        */
  real32_T w2_poly_p1_Gain;            /* Computed Parameter: w2_poly_p1_Gain
                                        * Referenced by: '<S10>/w2_poly_p1'
                                        */
  real32_T adc_poly_p1_Gain;           /* Computed Parameter: adc_poly_p1_Gain
                                        * Referenced by: '<S8>/adc_poly_p1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_JumpTest_MDL_T {
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
extern P_JumpTest_MDL_T JumpTest_MDL_P;

/* Block signals (auto storage) */
extern B_JumpTest_MDL_T JumpTest_MDL_B;

/* Block states (auto storage) */
extern DW_JumpTest_MDL_T JumpTest_MDL_DW;

/* Model entry point functions */
extern void JumpTest_MDL_initialize(void);
extern void JumpTest_MDL_step(void);
extern void JumpTest_MDL_terminate(void);

/* Real-time Model object */
extern RT_MODEL_JumpTest_MDL_T *const JumpTest_MDL_M;

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
 * '<Root>' : 'JumpTest_MDL'
 * '<S1>'   : 'JumpTest_MDL/Controller'
 * '<S2>'   : 'JumpTest_MDL/JumpControl'
 * '<S3>'   : 'JumpTest_MDL/Measurement'
 * '<S4>'   : 'JumpTest_MDL/RisingEdge'
 * '<S5>'   : 'JumpTest_MDL/Measurement/ComplementaryFilter'
 * '<S6>'   : 'JumpTest_MDL/Measurement/PhiEstimate'
 * '<S7>'   : 'JumpTest_MDL/Measurement/WAverage'
 * '<S8>'   : 'JumpTest_MDL/Measurement/adc_Calibration'
 * '<S9>'   : 'JumpTest_MDL/Measurement/w1_Calibration'
 * '<S10>'  : 'JumpTest_MDL/Measurement/w2_Calibration'
 * '<S11>'  : 'JumpTest_MDL/Measurement/x1_Calibration'
 * '<S12>'  : 'JumpTest_MDL/Measurement/x2_Calibration'
 * '<S13>'  : 'JumpTest_MDL/Measurement/y1_Calibration'
 * '<S14>'  : 'JumpTest_MDL/Measurement/y2_Calibration'
 */
#endif                                 /* RTW_HEADER_JumpTest_MDL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

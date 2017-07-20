/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stdio.h>
#include <stdlib.h>
#include "SensorCalibration_MDL.h"
#include "SensorCalibration_MDL_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(SensorCalibration_MDL_M) == (NULL)) &&
    !rtmGetStopRequested(SensorCalibration_MDL_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(SensorCalibration_MDL_M->extModeInfo, 1,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SensorCalibration_MDL_M, true);
      }

      if (rtmGetStopRequested(SensorCalibration_MDL_M) == true) {
        rtmSetErrorStatus(SensorCalibration_MDL_M, "Simulation finished");
        break;
      }
    }

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(SensorCalibration_MDL_M->extModeInfo, 1, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SensorCalibration_MDL_M, true);
      }
    }

    SensorCalibration_MDL_step();

    /* Get model outputs here */
    rtExtModeCheckEndTrigger();
    runModel = (rtmGetErrorStatus(SensorCalibration_MDL_M) == (NULL)) &&
      !rtmGetStopRequested(SensorCalibration_MDL_M);
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(SensorCalibration_MDL_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;
  printf("**terminating the model**\n");
  fflush(stdout);

  {
    runModel = 0;
  }

  rtExtModeShutdown(1);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  SensorCalibration_MDL_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  printf("**starting the model**\n");
  fflush(stdout);
  rtmSetErrorStatus(SensorCalibration_MDL_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  /* Initialize model */
  SensorCalibration_MDL_initialize();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(SensorCalibration_MDL_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(SensorCalibration_MDL_M->extModeInfo, 1,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(SensorCalibration_MDL_M, true);
    }
  }

  rtERTExtModeStartMsg();

  /* Call RTOS Initialization function */
  myRTOSInit(0.02, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

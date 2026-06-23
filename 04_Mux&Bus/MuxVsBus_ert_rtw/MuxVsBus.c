/*
 * File: MuxVsBus.c
 *
 * Code generated for Simulink model 'MuxVsBus'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun 18 21:59:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MuxVsBus.h"

/* External inputs (root inport signals with default storage) */
ExtU_MuxVsBus_T MuxVsBus_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MuxVsBus_T MuxVsBus_Y;

/* Real-time model */
static RT_MODEL_MuxVsBus_T MuxVsBus_M_;
RT_MODEL_MuxVsBus_T *const MuxVsBus_M = &MuxVsBus_M_;

/* Model step function */
void MuxVsBus_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   */
  MuxVsBus_Y.Out1 = MuxVsBus_U.In1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In2'
   */
  MuxVsBus_Y.Out2 = MuxVsBus_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In3'
   */
  MuxVsBus_Y.Out3 = MuxVsBus_U.In3;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In4'
   */
  MuxVsBus_Y.Out4 = MuxVsBus_U.In4;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In5'
   */
  MuxVsBus_Y.Out5 = MuxVsBus_U.In5;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In6'
   */
  MuxVsBus_Y.Out6 = MuxVsBus_U.In6;

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/In7'
   */
  MuxVsBus_Y.Out7 = MuxVsBus_U.In7;

  /* Outport: '<Root>/Out8' incorporates:
   *  Inport: '<Root>/In8'
   */
  MuxVsBus_Y.Out8 = MuxVsBus_U.In8;

  /* Outport: '<Root>/Out9' incorporates:
   *  Inport: '<Root>/In9'
   */
  MuxVsBus_Y.Out9 = MuxVsBus_U.In9;

  /* Outport: '<Root>/Out10' incorporates:
   *  Inport: '<Root>/In10'
   */
  MuxVsBus_Y.Out10 = MuxVsBus_U.In10;

  /* Outport: '<Root>/Out11' incorporates:
   *  Inport: '<Root>/In11'
   */
  MuxVsBus_Y.Out11 = MuxVsBus_U.In11;

  /* Outport: '<Root>/Out12' incorporates:
   *  Inport: '<Root>/In12'
   */
  MuxVsBus_Y.Out12 = MuxVsBus_U.In12;

  /* Outport: '<Root>/Out13' incorporates:
   *  Inport: '<Root>/In13'
   */
  MuxVsBus_Y.Out13 = MuxVsBus_U.In13;

  /* Outport: '<Root>/Out14' incorporates:
   *  Inport: '<Root>/In14'
   */
  MuxVsBus_Y.Out14 = MuxVsBus_U.In14;

  /* Outport: '<Root>/Out15' incorporates:
   *  Inport: '<Root>/In15'
   */
  MuxVsBus_Y.Out15 = MuxVsBus_U.In15;

  /* Outport: '<Root>/Out16' incorporates:
   *  Inport: '<Root>/In16'
   */
  MuxVsBus_Y.Out16 = MuxVsBus_U.In16;

  /* Outport: '<Root>/Out17' incorporates:
   *  Inport: '<Root>/In21'
   *  Inport: '<Root>/In22'
   *  Inport: '<Root>/In23'
   *  Inport: '<Root>/In24'
   */
  MuxVsBus_Y.Out17[0] = MuxVsBus_U.In21;
  MuxVsBus_Y.Out17[1] = MuxVsBus_U.In22;
  MuxVsBus_Y.Out17[2] = MuxVsBus_U.In23;
  MuxVsBus_Y.Out17[3] = MuxVsBus_U.In24;
}

/* Model initialize function */
void MuxVsBus_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void MuxVsBus_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

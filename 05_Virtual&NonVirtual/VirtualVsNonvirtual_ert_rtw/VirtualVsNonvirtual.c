/*
 * File: VirtualVsNonvirtual.c
 *
 * Code generated for Simulink model 'VirtualVsNonvirtual'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun 18 22:06:58 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VirtualVsNonvirtual.h"

/* External inputs (root inport signals with default storage) */
ExtU_VirtualVsNonvirtual_T VirtualVsNonvirtual_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_VirtualVsNonvirtual_T VirtualVsNonvirtual_Y;

/* Real-time model */
static RT_MODEL_VirtualVsNonvirtual_T VirtualVsNonvirtual_M_;
RT_MODEL_VirtualVsNonvirtual_T *const VirtualVsNonvirtual_M =
  &VirtualVsNonvirtual_M_;
static void VirtualVsNonvirtual_NonVirtual(void);

/* Output and update for atomic system: '<Root>/Non-Virtual' */
static void VirtualVsNonvirtual_NonVirtual(void)
{
  /* Outport: '<Root>/Out2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  VirtualVsNonvirtual_Y.Out2 = (VirtualVsNonvirtual_U.In2 + 1.0) * 8.0;
}

/* Model step function */
void VirtualVsNonvirtual_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/In1'
   *  Sum: '<S2>/Add'
   */
  VirtualVsNonvirtual_Y.Out1 = VirtualVsNonvirtual_U.In1 + 1.0;

  /* Outputs for Atomic SubSystem: '<Root>/Non-Virtual' */
  VirtualVsNonvirtual_NonVirtual();

  /* End of Outputs for SubSystem: '<Root>/Non-Virtual' */
}

/* Model initialize function */
void VirtualVsNonvirtual_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void VirtualVsNonvirtual_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

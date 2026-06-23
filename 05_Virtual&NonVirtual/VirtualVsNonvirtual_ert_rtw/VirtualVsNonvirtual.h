/*
 * File: VirtualVsNonvirtual.h
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

#ifndef VirtualVsNonvirtual_h_
#define VirtualVsNonvirtual_h_
#ifndef VirtualVsNonvirtual_COMMON_INCLUDES_
#define VirtualVsNonvirtual_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                /* VirtualVsNonvirtual_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_VirtualVsNonvirtual_T RT_MODEL_VirtualVsNonvirtual_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_VirtualVsNonvirtual_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_VirtualVsNonvirtual_T;

/* Real-time Model Data Structure */
struct tag_RTM_VirtualVsNonvirtual_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_VirtualVsNonvirtual_T VirtualVsNonvirtual_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_VirtualVsNonvirtual_T VirtualVsNonvirtual_Y;

/* Model entry point functions */
extern void VirtualVsNonvirtual_initialize(void);
extern void VirtualVsNonvirtual_step(void);
extern void VirtualVsNonvirtual_terminate(void);

/* Real-time Model object */
extern RT_MODEL_VirtualVsNonvirtual_T *const VirtualVsNonvirtual_M;

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
 * '<Root>' : 'VirtualVsNonvirtual'
 * '<S1>'   : 'VirtualVsNonvirtual/Non-Virtual'
 * '<S2>'   : 'VirtualVsNonvirtual/Virtual'
 */
#endif                                 /* VirtualVsNonvirtual_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

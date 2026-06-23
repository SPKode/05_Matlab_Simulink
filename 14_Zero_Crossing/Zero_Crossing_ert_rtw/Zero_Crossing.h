/*
 * File: Zero_Crossing.h
 *
 * Code generated for Simulink model 'Zero_Crossing'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sat Jun 20 21:54:37 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Zero_Crossing_h_
#define Zero_Crossing_h_
#ifndef Zero_Crossing_COMMON_INCLUDES_
#define Zero_Crossing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Zero_Crossing_COMMON_INCLUDES_ */

#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Zero_Crossing_T RT_MODEL_Zero_Crossing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T HitCrossing_MODE;              /* '<Root>/Hit  Crossing' */
} DW_Zero_Crossing_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing_Input_ZCE;    /* '<Root>/Hit  Crossing' */
} PrevZCX_Zero_Crossing_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Zero_Crossing_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Output;                    /* '<Root>/Output' */
} ExtY_Zero_Crossing_T;

/* Real-time Model Data Structure */
struct tag_RTM_Zero_Crossing_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Zero_Crossing_T Zero_Crossing_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Zero_Crossing_T Zero_Crossing_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_Zero_Crossing_T Zero_Crossing_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Zero_Crossing_T Zero_Crossing_Y;

/* Model entry point functions */
extern void Zero_Crossing_initialize(void);
extern void Zero_Crossing_step(void);
extern void Zero_Crossing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Zero_Crossing_T *const Zero_Crossing_M;

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
 * '<Root>' : 'Zero_Crossing'
 */
#endif                                 /* Zero_Crossing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

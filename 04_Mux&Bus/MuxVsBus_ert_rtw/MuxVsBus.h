/*
 * File: MuxVsBus.h
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

#ifndef MuxVsBus_h_
#define MuxVsBus_h_
#ifndef MuxVsBus_COMMON_INCLUDES_
#define MuxVsBus_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MuxVsBus_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_MuxVsBus_T RT_MODEL_MuxVsBus_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
  uint8_T In2;                         /* '<Root>/In2' */
  int16_T In3;                         /* '<Root>/In3' */
  real32_T In4;                        /* '<Root>/In4' */
  boolean_T In5;                       /* '<Root>/In5' */
  uint8_T In6;                         /* '<Root>/In6' */
  int16_T In7;                         /* '<Root>/In7' */
  real32_T In8;                        /* '<Root>/In8' */
  boolean_T In9;                       /* '<Root>/In9' */
  uint8_T In10;                        /* '<Root>/In10' */
  int16_T In11;                        /* '<Root>/In11' */
  real32_T In12;                       /* '<Root>/In12' */
  boolean_T In13;                      /* '<Root>/In13' */
  boolean_T In14;                      /* '<Root>/In14' */
  boolean_T In15;                      /* '<Root>/In15' */
  boolean_T In16;                      /* '<Root>/In16' */
  boolean_T In21;                      /* '<Root>/In21' */
  boolean_T In22;                      /* '<Root>/In22' */
  boolean_T In23;                      /* '<Root>/In23' */
  boolean_T In24;                      /* '<Root>/In24' */
} ExtU_MuxVsBus_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  int16_T Out3;                        /* '<Root>/Out3' */
  real32_T Out4;                       /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  uint8_T Out6;                        /* '<Root>/Out6' */
  int16_T Out7;                        /* '<Root>/Out7' */
  real32_T Out8;                       /* '<Root>/Out8' */
  boolean_T Out9;                      /* '<Root>/Out9' */
  uint8_T Out10;                       /* '<Root>/Out10' */
  int16_T Out11;                       /* '<Root>/Out11' */
  real32_T Out12;                      /* '<Root>/Out12' */
  boolean_T Out13;                     /* '<Root>/Out13' */
  boolean_T Out14;                     /* '<Root>/Out14' */
  boolean_T Out15;                     /* '<Root>/Out15' */
  boolean_T Out16;                     /* '<Root>/Out16' */
  boolean_T Out17[4];                  /* '<Root>/Out17' */
} ExtY_MuxVsBus_T;

/* Real-time Model Data Structure */
struct tag_RTM_MuxVsBus_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_MuxVsBus_T MuxVsBus_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MuxVsBus_T MuxVsBus_Y;

/* Model entry point functions */
extern void MuxVsBus_initialize(void);
extern void MuxVsBus_step(void);
extern void MuxVsBus_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MuxVsBus_T *const MuxVsBus_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display10' : Unused code path elimination
 * Block '<Root>/Display11' : Unused code path elimination
 * Block '<Root>/Display12' : Unused code path elimination
 * Block '<Root>/Display13' : Unused code path elimination
 * Block '<Root>/Display14' : Unused code path elimination
 * Block '<Root>/Display15' : Unused code path elimination
 * Block '<Root>/Display16' : Unused code path elimination
 * Block '<Root>/Display17' : Unused code path elimination
 * Block '<Root>/Display18' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
 * Block '<Root>/Display9' : Unused code path elimination
 */

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
 * '<Root>' : 'MuxVsBus'
 */
#endif                                 /* MuxVsBus_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

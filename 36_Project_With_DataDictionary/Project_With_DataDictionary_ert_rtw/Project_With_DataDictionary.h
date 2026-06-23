/*
 * File: Project_With_DataDictionary.h
 *
 * Code generated for Simulink model 'Project_With_DataDictionary'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sat Jun 20 21:22:53 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Project_With_DataDictionary_h_
#define Project_With_DataDictionary_h_
#ifndef Project_With_DataDictionary_COMMON_INCLUDES_
#define Project_With_DataDictionary_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                        /* Project_With_DataDictionary_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Project_With_DataDict_T RT_MODEL_Project_With_DataDic_T;

/* Real-time Model Data Structure */
struct tag_RTM_Project_With_DataDict_T {
  const char_T * volatile errorStatus;
};

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint8_T A;                      /* '<Root>/A' */
extern uint8_T B;                      /* '<Root>/B' */
extern int16_T Res;                    /* '<Root>/Multiport Switch' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern uint8_T Op;                     /* Variable: Op
                                        * Referenced by: '<Root>/Constant'
                                        */

/* Model entry point functions */
extern void Project_With_DataDictionary_initialize(void);
extern void Project_With_DataDictionary_step(void);
extern void Project_With_DataDictionary_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Project_With_DataDic_T *const Project_With_DataDictionary_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'Project_With_DataDictionary'
 */
#endif                                 /* Project_With_DataDictionary_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

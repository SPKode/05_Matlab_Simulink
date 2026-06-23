/*
 * File: Project_With_DataDictionary.c
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

#include "Project_With_DataDictionary.h"
#include "rtwtypes.h"

/* Exported block signals */
uint8_T A;                             /* '<Root>/A' */
uint8_T B;                             /* '<Root>/B' */
int16_T Res;                           /* '<Root>/Multiport Switch' */

/* Exported block parameters */
uint8_T Op = 1U;                       /* Variable: Op
                                        * Referenced by: '<Root>/Constant'
                                        */

/* Real-time model */
static RT_MODEL_Project_With_DataDic_T Project_With_DataDictionary_M_;
RT_MODEL_Project_With_DataDic_T *const Project_With_DataDictionary_M =
  &Project_With_DataDictionary_M_;

/* Model step function */
void Project_With_DataDictionary_step(void)
{
  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch (Op) {
   case 1:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Inport: '<Root>/A'
     *  Inport: '<Root>/B'
     *  Sum: '<Root>/Add'
     */
    Res = (int16_T)((uint32_T)A + B);
    break;

   case 2:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Inport: '<Root>/A'
     *  Inport: '<Root>/B'
     *  Sum: '<Root>/Add1'
     */
    Res = (int16_T)(A - B);
    break;

   case 3:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Inport: '<Root>/A'
     *  Inport: '<Root>/B'
     *  Product: '<Root>/Product'
     */
    Res = (int16_T)((uint32_T)A * B);
    break;

   case 4:
    /* Product: '<Root>/Divide' incorporates:
     *  Inport: '<Root>/B'
     */
    if (B == 0) {
      /* MultiPortSwitch: '<Root>/Multiport Switch' */
      Res = MAX_int16_T;

      /* Divide by zero handler */
    } else {
      /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
       *  Inport: '<Root>/A'
       */
      Res = (int16_T)((uint32_T)A / B);
    }

    /* End of Product: '<Root>/Divide' */
    break;

   default:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    Res = 0;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
}

/* Model initialize function */
void Project_With_DataDictionary_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Project_With_DataDictionary_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

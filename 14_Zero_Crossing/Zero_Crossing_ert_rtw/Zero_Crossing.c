/*
 * File: Zero_Crossing.c
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

#include "Zero_Crossing.h"
#include "zero_crossing_types.h"
#include "rtwtypes.h"
#include "solver_zc.h"
#ifndef slZcHadEvent
#define slZcHadEvent(ev, zcsDir)       (((ev) & (zcsDir)) != 0x00 )
#endif

#ifndef slZcUnAliasEvents
#define slZcUnAliasEvents(evL, evR)    ((((slZcHadEvent((evL), (SL_ZCS_EVENT_N2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2P))) || (slZcHadEvent((evL), (SL_ZCS_EVENT_P2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2N)))) ? (SL_ZCS_EVENT_NUL) : (evR)))
#endif

/* Block states (default storage) */
DW_Zero_Crossing_T Zero_Crossing_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Zero_Crossing_T Zero_Crossing_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_Zero_Crossing_T Zero_Crossing_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Zero_Crossing_T Zero_Crossing_Y;

/* Real-time model */
static RT_MODEL_Zero_Crossing_T Zero_Crossing_M_;
RT_MODEL_Zero_Crossing_T *const Zero_Crossing_M = &Zero_Crossing_M_;
static ZCEventType rt_ZCFcn(ZCDirection zcDir, ZCSigState *prevZc, real_T
  currValue);

/* Detect zero crossings events. */
static ZCEventType rt_ZCFcn(ZCDirection zcDir, ZCSigState *prevZc, real_T
  currValue)
{
  slZcEventType zcsDir;
  slZcEventType tempEv;
  ZCEventType zcEvent = NO_ZCEVENT;    /* assume */

  /* zcEvent matrix */
  static const slZcEventType eventMatrix[4][4] = {
    /*          ZER              POS              NEG              UNK */
    { SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_Z2P, SL_ZCS_EVENT_Z2N, SL_ZCS_EVENT_NUL },/* ZER */

    { SL_ZCS_EVENT_P2Z, SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_P2N, SL_ZCS_EVENT_NUL },/* POS */

    { SL_ZCS_EVENT_N2Z, SL_ZCS_EVENT_N2P, SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_NUL },/* NEG */

    { SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_NUL, SL_ZCS_EVENT_NUL }/* UNK */
  };

  /* get prevZcEvent and prevZcSign from prevZc */
  const slZcEventType prevEv = (slZcEventType)(((uint8_T)(*prevZc)) >> 2);
  const slZcSignalSignType prevSign = (slZcSignalSignType)(((uint8_T)(*prevZc))
    & (uint8_T)0x03);

  /* get current zcSignal sign from current zcSignal value */
  const slZcSignalSignType currSign = (slZcSignalSignType)((currValue) > 0.0 ?
    SL_ZCS_SIGN_POS :
    ((currValue) < 0.0 ? SL_ZCS_SIGN_NEG : SL_ZCS_SIGN_ZERO));

  /* get current zcEvent based on prev and current zcSignal value */
  slZcEventType currEv = eventMatrix[prevSign][currSign];

  /* get slZcEventType from ZCDirection */
  switch (zcDir) {
   case ANY_ZERO_CROSSING:
    zcsDir = SL_ZCS_EVENT_ALL;
    break;

   case FALLING_ZERO_CROSSING:
    zcsDir = SL_ZCS_EVENT_ALL_DN;
    break;

   case RISING_ZERO_CROSSING:
    zcsDir = SL_ZCS_EVENT_ALL_UP;
    break;

   default:
    zcsDir = SL_ZCS_EVENT_NUL;
    break;
  }

  /* had event, check if zc happened */
  if (slZcHadEvent(currEv, zcsDir)) {
    currEv = (slZcEventType)(slZcUnAliasEvents(prevEv, currEv));
  } else {
    currEv = SL_ZCS_EVENT_NUL;
  }

  /* Update prevZc */
  tempEv = (slZcEventType)(currEv << 2);/* shift left by 2 bits */
  *prevZc = (ZCSigState)((currSign) | (tempEv));
  if ((currEv & SL_ZCS_EVENT_ALL_DN) != 0) {
    zcEvent = FALLING_ZCEVENT;
  } else if ((currEv & SL_ZCS_EVENT_ALL_UP) != 0) {
    zcEvent = RISING_ZCEVENT;
  } else {
    zcEvent = NO_ZCEVENT;
  }

  return zcEvent;
}                                      /* rt_ZCFcn */

/* Model step function */
void Zero_Crossing_step(void)
{
  ZCEventType zcEvent;

  /* HitCross: '<Root>/Hit  Crossing' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Output'
   */
  zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                     &Zero_Crossing_PrevZCX.HitCrossing_Input_ZCE,
                     (Zero_Crossing_U.Input));
  if (Zero_Crossing_DW.HitCrossing_MODE == 0) {
    if (zcEvent != NO_ZCEVENT) {
      /* Outport: '<Root>/Output' */
      Zero_Crossing_Y.Output = !Zero_Crossing_Y.Output;
      Zero_Crossing_DW.HitCrossing_MODE = 1;
    } else if (Zero_Crossing_Y.Output) {
      /* Outport: '<Root>/Output' */
      Zero_Crossing_Y.Output = !(Zero_Crossing_U.Input != 0.0);
    } else {
      /* Outport: '<Root>/Output' */
      Zero_Crossing_Y.Output = (Zero_Crossing_U.Input == 0.0);
    }
  } else {
    /* Outport: '<Root>/Output' */
    Zero_Crossing_Y.Output = ((!(Zero_Crossing_U.Input != 0.0)) &&
      Zero_Crossing_Y.Output);
    Zero_Crossing_DW.HitCrossing_MODE = 0;
  }

  /* End of HitCross: '<Root>/Hit  Crossing' */
}

/* Model initialize function */
void Zero_Crossing_initialize(void)
{
  Zero_Crossing_PrevZCX.HitCrossing_Input_ZCE = UNINITIALIZED_ZCSIG;
}

/* Model terminate function */
void Zero_Crossing_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/**********************************************************************/
/*   AUTHOR       : Yousif Mohamed Anwar                              */
/*   DESCRIPTION  : TIMERS Driver                                     */
/*   DATE         : 04 Apr 2023                                       */
/*   VERSION      : V01                                               */
/**********************************************************************/

#ifndef INCLUDE_MCAL_TIMER0_TIMER0_CONFIGURATION_H_
#define INCLUDE_MCAL_TIMER0_TIMER0_CONFIGURATION_H_



/*
 * NORMAL_MODE
 * PHASE_CORRECT_MODE
 * CTC_MODE
 * FAST_PWM_MODE
 * */
#define TIMER0_MODE CTC_MODE


//NORMAL_DIO
//TOGGLE_CTC
//CLEAR_CTC
//SET_CTC

#define CTC_OC0_PIN_ACTION NORMAL_DIO


// NORMAL_DIO
// NON_INVERTING
// INVERTING
#define FAST_PWM_OC0_PIn_ACTION INVERTING

#define OCR0_VALUE	199

/*
 * 0b000  No clock source (Timer/Counter stopped).
 * 0b001  clkI/O /(No prescaling)
 * 0b010  clkI/O /8 (From prescaler)
 * 0b011  clkI/O /64 (From prescaler)
 * 0b100  clkI/O /256 (From prescaler)
 * 0b101  clkI/O /1024 (From prescaler)
 * 0b110  External clock source on T0 pin. Clock on falling edge.
 * 0b111  External clock source on T0 pin. Clock on rising edge.
 * */
#define CLK_CONFIGURATION  0b010

#define NO_OF_OVF_CTC_MODE 5

#endif /* INCLUDE_MCAL_TIMER0_TIMER0_CONFIGURATION_H_ */

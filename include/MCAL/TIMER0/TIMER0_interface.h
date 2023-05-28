/**********************************************************************/
/*   AUTHOR       : Yousif Mohamed Anwar                              */
/*   DESCRIPTION  : TIMERS Driver                                     */
/*   DATE         : 04 Apr 2023                                       */
/*   VERSION      : V01                                               */
/**********************************************************************/
#ifndef INCLUDE_MCAL_TIMER0_TIMER0_INTERFACE_H_
#define INCLUDE_MCAL_TIMER0_TIMER0_INTERFACE_H_


void MTIMER0_voidInit(void);


void MTIMER0_voidStopTimer (void);

void MTIMER0_voidsetCallBackOVF (void (*ptrToFunc) (void));

void MTIMER0_voidSetPreloadValue (u8 A_u8PreloadValue);

void MTIMER0_voidsetCallBackCTC (void (*ptrToFunc) (void));

void MTIMER0_voidSetOCR0Value(u8 A_u8Value);


#endif /* INCLUDE_MCAL_TIMER0_TIMER0_INTERFACE_H_ */

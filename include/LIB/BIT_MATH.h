/**********************************************************************/
/*   AUTHOR       : Yousif Mohamed Anwar                              */
/*   DESCRIPTION  : BIT_MATH                                          */
/*   DATE         : 04 Apr 2023                                       */
/*   VERSION      : V01                                               */
/**********************************************************************/


/************************************************/
/* guard of file will call one time in .c      **/
/************************************************/

#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(Reg, bitnum)       (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)       (Reg &=~(1<<bitnum))
#define GET_BIT(Reg, bitnum)       ((Reg>>bitnum)& 0x01)
#define TOGGLE_BIT(Reg, bitnum)    (Reg ^=(1<<bitnum))

#define SET_BYTE(Reg,value)              ( Reg = value )

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0) Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0


#endif

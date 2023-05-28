/**********************************************************************/
/*   AUTHOR       : Yousif Mohamed Anwar                              */
/*   DESCRIPTION  : RTO Driver                                        */
/*   DATE         : 04 Apr 2023                                       */
/*   VERSION      : V01                                               */
/**********************************************************************/

/****************************************************/
/* Library Directives							    */
/****************************************************/
#define F_CPU 8000000UL
#include <util/delay.h>
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"


#include "../include/MCAL/GI/GI_interface.h"

#include "../Include/MCAL/TIMER0/TIMER0_Interface.h"
#include "../Include/MCAL/TIMER0/TIMER0_Private.h"
#include "../Include/MCAL/TIMER0/TIMER0_Configuration.h"


#include "../SERVICES/RTO_Interface.h"
#include "../SERVICES/RTO_Private.h"
#include "../SERVICES/RTO_Configuration.h"

#define NULL ((void *)0)
RTO_TCB  RTO_AstrTasks [RTO_u8_MAX_NUMBER_TASKS];

void RTO_voidInit(void)
{
	// set scheduler as call back function to be called after Tick time
	MTIMER0_voidsetCallBackCTC(&RTO_voidScheduler);
	//start OS by starting Timer
	MTIMER0_voidInit();
}

void RTO_voidInitArrayFunctions(void)
{
	u8 local_u8Counter=0;
	for (local_u8Counter=0; local_u8Counter < RTO_u8_MAX_NUMBER_TASKS; local_u8Counter++)
		{
			RTO_AstrTasks[local_u8Counter].pf=NULL;
		}
}

void RTO_voidCreateTask (u8 copy_u8priority, u16 copy_u16Periodicity, u16 copy_u16FirstDelay, void (*pf)(void))
{
	if ((copy_u8priority < RTO_u8_MAX_NUMBER_TASKS) && (pf != NULL))
	{
		RTO_AstrTasks[copy_u8priority].FirstDelay=copy_u16FirstDelay;
		RTO_AstrTasks[copy_u8priority].Periodicity=copy_u16Periodicity;
		RTO_AstrTasks[copy_u8priority].pf=pf;
	}
}

void RTO_voidScheduler (void)
{
	u8 local_u8Counter;
	for (local_u8Counter=0; local_u8Counter < RTO_u8_MAX_NUMBER_TASKS; local_u8Counter++)
	{
		if (RTO_AstrTasks[local_u8Counter].FirstDelay==0)
		{
			if (RTO_AstrTasks[local_u8Counter].pf != NULL)
			{
				RTO_AstrTasks[local_u8Counter].pf();
			}
			RTO_AstrTasks[local_u8Counter].FirstDelay= RTO_AstrTasks[local_u8Counter].Periodicity - 1;
		}
		else
		{
			RTO_AstrTasks[local_u8Counter].FirstDelay--;
		}
	}

}

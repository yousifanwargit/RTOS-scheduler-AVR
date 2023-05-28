/**********************************************************************/
/*   AUTHOR       : Yousif Mohamed Anwar                              */
/*   DESCRIPTION  : APP                                               */
/*   DATE         : 04 Apr 2023                                       */
/*   VERSION      : V01                                               */
/**********************************************************************/
#include <util/delay.h>

#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"

#include "../include/MCAL/DIO/DIO_interface.h"


#include "../Include/HAL/LED/LED_interface.h"



#include "../SERVICES/RTO_Interface.h"


#define F_CPU 8000000UL
void AppTask1(void);
void AppTask2(void);
void AppTask3(void);


void (main)(void)
{
	MDIO_voidInit();
	MGI_voidEnable();
	RTO_voidInitArrayFunctions();
	RTO_voidCreateTask(0,1000,0,&AppTask1);
	RTO_voidCreateTask(1,2000,0,&AppTask2);
	RTO_voidCreateTask(2,5000,0,&AppTask3);
	RTO_voidInit();
	while (1)
	{

	}
}

void AppTask1(void)
{
	HLED_voidToggleLed(DIO_PORTA, PIN0);
}

void AppTask2(void)
{
	HLED_voidToggleLed(DIO_PORTA, PIN1);
}

void AppTask3(void)
{
	HLED_voidToggleLed(DIO_PORTA, PIN2);
}

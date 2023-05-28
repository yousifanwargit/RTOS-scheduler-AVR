/*
 * RTO_Interface.h
 *
 *  Created on: Sep 2, 2021
 *      Author: Abdelrahman Hossam
 */

#ifndef SERVICES_RTO_INTERFACE_H_
#define SERVICES_RTO_INTERFACE_H_

void RTO_voidInit(void);

void RTO_voidCreateTask (u8 copy_u8priority, u16 copy_u16Periodicity, u16 copy_u16FirstDelay, void (*pf)(void));

void RTO_voidScheduler (void);

#endif /* SERVICES_RTO_INTERFACE_H_ */

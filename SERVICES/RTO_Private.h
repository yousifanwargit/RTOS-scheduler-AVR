/*
 * RTO_Private.h
 *
 *  Created on: Sep 2, 2021
 *      Author: Abdelrahman Hossam
 */

#ifndef SERVICES_RTO_PRIVATE_H_
#define SERVICES_RTO_PRIVATE_H_

typedef struct
{
	u16 FirstDelay;
	u16 Periodicity;
	void (*pf)(void);
}RTO_TCB;


#endif /* SERVICES_RTO_PRIVATE_H_ */

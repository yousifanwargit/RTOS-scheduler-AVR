/****************************************************/
/*   AUTHOR      : YOUSIF ANWAR                     */
/*   Description : RTO DRIVER                        */
/*   DATE        : 23 SEP 2022                      */
/*   VERSION     : V01                              */
/****************************************************/

#ifndef SERVICES_RTO_PRIVATE_H_
#define SERVICES_RTO_PRIVATE_H_

typedef struct
{
	u16 FirstDelay;
	u16 Periodicity;
	void (*pf)(void);
}RTO_TCB;


#endif /* SERVICES_RTO_PRIVATE_H_ */

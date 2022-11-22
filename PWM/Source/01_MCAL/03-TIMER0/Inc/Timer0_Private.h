/*
 * Timer0_Private.h
 */

#ifndef SOURCE_01_MCAL_03_TIMER0_INC_TIMER0_PRIVATE_H_
#define SOURCE_01_MCAL_03_TIMER0_INC_TIMER0_PRIVATE_H_

#include "Std_Types.h"

#define TIMER0_TCCR0_REG			(*(volatile u8*)0x53)
#define TIMER0_TCNT0_REG			(*(volatile u8*)0x52)
#define TIMER0_OCR0_REG				(*(volatile u8*)0x5C)
#define TIMER0_TIMSK_REG			(*(volatile u8*)0x59)
#define TIMER0_TIFR_REG				(*(volatile u8*)0x58)

#define TIMER0_MODE_NONE            		(0)
#define TIMER0_MODE_INTERVAL             	(1)
#define TIMER0_MODE_CTC          			(2)
#define TIMER0_MODE_FAST_PWM        		(3)
#define TIMER0_MODE_PWM_PHASE_CORRECT		(4)

#endif /* SOURCE_01_MCAL_03_TIMER0_INC_TIMER0_PRIVATE_H_ */

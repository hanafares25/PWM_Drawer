/*
 * EXINT_Reg.h
 *
 *  Created on: Oct 20, 2022
 *      Author: HanaF
 */

#ifndef SOURCE_01_MCAL_02_EXINT_INC_EXINT_REG_H_
#define SOURCE_01_MCAL_02_EXINT_INC_EXINT_REG_H_

#define EXT_INT_MCUCR_REG			 (*(volatile u8*)(0x55))
#define EXT_INT_MCUCSR_REG 			 (*(volatile u8*)(0x54))
#define EXT_INT_GICR_REG 			 (*(volatile u8*)(0x5B))
#define EXT_INT_GIFR_REG 			 (*(volatile u8*)(0x5A))

#endif /* SOURCE_01_MCAL_02_EXINT_INC_EXINT_REG_H_ */

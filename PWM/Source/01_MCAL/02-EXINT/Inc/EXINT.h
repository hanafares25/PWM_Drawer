/*
 * EXINT.h
 */

#ifndef SOURCE_01_MCAL_02_EXINT_INC_EXINT_H_
#define SOURCE_01_MCAL_02_EXINT_INC_EXINT_H_

#include "Std_Types.h"
#include "Bit_Math.h"
#include "EXINT_Reg.h"
#include "EXINT_Types.h"

#define INT0_EN_BIT			(6)
#define INT1_EN_BIT			(7)
#define INT2_EN_BIT			(5)


void ExtInt_vidConfigExtInt(extint_id_t intId, extint_sensectrl_t sensCtrl);
void ExtInt_vidDisableExtInt(extint_id_t intId);

#endif /* SOURCE_01_MCAL_EXTINT_INC_EXTINT_H_ */

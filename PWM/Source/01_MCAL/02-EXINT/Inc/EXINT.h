/*
 * EXINT.h
 */

#ifndef SOURCE_01_MCAL_02_EXINT_INC_EXINT_H_
#define SOURCE_01_MCAL_02_EXINT_INC_EXINT_H_

#include "Std_Types.h"
#include "Bit_Math.h"
#include "EXINT_Reg.h"
#include "EXINT_Types.h"
void Ext_Interrupt_Enable(ext_Int_t intID);
void Ext_Interrupt_Disable(ext_Int_t intID);
void Ext_Interrupt_SncControl(ext_Int_t intID, snc_mode_t mdoe);

#endif /* SOURCE_01_MCAL_02_EXINT_INC_EXINT_H_ */

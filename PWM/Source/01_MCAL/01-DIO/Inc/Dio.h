/*
 * Dio.h
 *
*  Created on: Oct 19, 2022
 *      Author: HanaF
 */
#include "../../../../Source/01_MCAL/01-DIO/Inc/Dio-reg.h"
#include "../../../../Source/01_MCAL/01-DIO/Inc/Dio-Types.h"
#ifndef SORCE_01_MCAL_01_DIO_INC_DIO_H_
#define SORCE_01_MCAL_01_DIO_INC_DIO_H_

#include "../../../../Source/00_Library/Std_Types.h"

void Dio_voidconfigChanel(dio_port_t port, dio_pin_t pin,dio_dir_t dir);
void Dio_voidwriteChanel(dio_port_t port, dio_pin_t pin,dio_level_t level);
dio_level_t Dio_udtreadChanel(dio_port_t port, dio_pin_t pin);
void Dio_voidWriteChanelGroup(dio_port_t port, u8 data, u8 mask);
void Dio_voidflipChanel(dio_port_t port, dio_pin_t pin);

#endif /* SORCE_01_MCAL_01_DIO_INC_DIO_H_ */

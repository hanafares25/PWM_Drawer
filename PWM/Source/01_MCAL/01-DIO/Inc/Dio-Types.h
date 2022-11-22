/*
 * Dio-Types.h
 *
*  Created on: Oct 19, 2022
 *      Author: HanaF
 */

#ifndef SOURCE_01_MCAL_01_DIO_INC_DIO_TYPES_H_
#define SOURCE_01_MCAL_01_DIO_INC_DIO_TYPES_H_

typedef enum
{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}dio_port_t;

typedef enum
{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
}dio_pin_t;

typedef enum
{
	DIO_INPUT,
	DIO_OUTPUT
}dio_dir_t;

typedef enum
{
	DIO_LOW,
	DIO_HIGH
}dio_level_t;

#endif /* SOURCE_01_MCAL_01_DIO_INC_DIO_TYPES_H_ */



		/*
 * main.c
 *
 *  Created on: Oct 19, 2022
 *      Author: HanaF
 */

#include "Std_Types.h"
#include "Bit_Math.h"
#include <util/delay.h>
#include "Dio.h"
#include "Timer0.h"
#include "LCD.h"
#include "EXINT.h"
#include <stdlib.h>


u8 fir_raise, fir_fall, sec_raise, high, period;
u32 freq;
f32 duty_cycle;
u8 frequency[14], duty[7];
int main() {

	Lcd_vidinit();
		Lcd_vidRowColumn(0, 0); //moves the cursor to start from first row
		Lcd_vidDisplyStr("Freq=");
		Lcd_vidRowColumn(1, 0); //moves the cursor to the second row
		Lcd_vidDisplyStr("Duty=");
		Lcd_vidRowColumn(0, 6);
		TIMER0_Init();
		TIMER0_PWM(50, 25);
		while (1) {

			Freq_Duty(fir_raise, fir_fall, sec_raise, high, period, &freq, &duty_cycle);
			ltoa(freq, frequency, 10);
			itoa((int) duty_cycle, duty, 10);
			Lcd_vidRowColumn(0, 6);
			Lcd_vidDisplyStr(frequency);
			Lcd_vidDisplyStr(" Hz");
			//Lcd_Cmd(_LCD_CURSOR_SECOND_ROW); //moves the cursor to the second row
			Lcd_vidRowColumn(1, 6);
			Lcd_vidDisplyStr(duty);
			Lcd_vidDisplyStr(" %");
		}
        return 0;

		}



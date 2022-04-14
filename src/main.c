/*******************************/
/*** Created by Ovidiu Sabau ***/
/***	   14 April 2022	 ***/
/*******************************/

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

/*----------------- Include -------------------*/
#include <avr/io.h>
#include "Btn.h"
#include "LED.h"

/*-------------- Main function ----------------*/
int main(void)
{
	init_Btn();		// Initialize button
	init_LED();		// LED initialization
	uint8_t btn_state = 0;	// Variable for button state (pressed / released)
	while (1)
	{
		btn_state = Btn_pin & (1<<Btn_bit);		// check button state
		if (btn_state > 0)	// if button is pressed
		{
			set_LED_high;	// Turn on LED
		}
		else
		{
			set_LED_low;	// Turn off LED
		}
	}
}


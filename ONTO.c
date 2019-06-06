/*
 * ONTO.c
 *
 * Created: 6/4/2019 4:24:31 PM
 * Author : HOME
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xFF;
	while (1)
	{
		PORTD = 0xF0;
		_delay_ms(220);
		PORTD = 0x0F;
		_delay_ms(220);
	}
}


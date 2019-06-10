/*
 * SSD3-ALPHABET.c
 *
 * Created: 6/10/2019 11:07:41 AM
 * Author : HOME
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
{
	DDRD=0xFF;
	while (1)
	{
		PORTD=0b10011100;
		_delay_ms(1000);
		PORTD=0b11111110;
		_delay_ms(1000);
		PORTD=0b00011100;
		_delay_ms(1000);
		PORTD=0b00011100;
		_delay_ms(1000);
		PORTD=0b10011110;
		_delay_ms(1000);
		PORTD=0b10111110;
		_delay_ms(1000);
		PORTD=0b10011110;
		_delay_ms(1000);
	}
}


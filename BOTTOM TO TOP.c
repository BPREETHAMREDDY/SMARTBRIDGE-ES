/*
 * BOTTOMTOTOPBLINKING.c
 *
 * Created: 6/4/2019 3:05:10 PM
 * Author : HOME
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA = 0xFF;
    while (1) 
    {
		PORTA = 0x80;
		_delay_ms(220);
		PORTA = 0x40;
		_delay_ms(220);
		PORTA = 0x20;
		_delay_ms(220);
		PORTA = 0x10;
		_delay_ms(220);
		PORTA = 0x08;
		_delay_ms(220);
		PORTA = 0x04;
		_delay_ms(220);
		PORTA = 0x02;
		_delay_ms(220);
		PORTA = 0x80;
		_delay_ms(220);
		PORTA = 0x01;
		_delay_ms(220);
		
    }
}


/*
 * LED4.c
 *
 * Created: 6/4/2019 2:55:10 PM
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
		PORTA = 0xFF;
		_delay_ms(220);
		PORTA = 0x00;
		_delay_ms(220);
    }
}


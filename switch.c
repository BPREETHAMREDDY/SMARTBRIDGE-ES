/*
 * GccApplication1.c
 *
 * Created: 6/7/2019 11:28:23 AM
 * Author : HOME
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif 
#include <avr/io.h>
#include <util/delay.h>




int main(void)
{
    /* Replace with your application code */
	DDRC|=(1<<PC0);
	DDRD&=~(1<<PD0);
    while (1) 
    {
		if((PIND&(1<<PD0))==0)
		{
			PORTC|=(1<<PC0);
			_delay_ms(3000);
			PORTC&=~(1<<PC0);
		}
    }
}


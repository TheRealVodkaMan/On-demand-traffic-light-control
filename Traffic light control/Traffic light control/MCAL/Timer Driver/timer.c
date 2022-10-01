/*
 * Timer.c
 *
 * Created: 13/09/2022 05:26:40
 *  Author: MH
 */ 

#include "timer.h"

void timer0_init()
{
	TCCR0 = 0x00;
	TCNT0 = 0x00;
}

void timer0Delay(unsigned int overflow)
{
	unsigned int counter = 0;
	
	timer0_init();
	
	TCCR0 set_High BIT(0);
	
	while(counter < overflow)
	{
		while((TIFR&TOV0) == 0);
		
		TIFR set_High TOV0;
		
		counter++;
	}
	
	counter = 0;
	
	TCCR0 = 0x00;
}

void waitfor0(unsigned int seconds)
{
	unsigned int oneSecond = 62500;
	
	for(unsigned int i = 0; i < seconds; i++)
	{
		timer0Delay(oneSecond);
	}
}

void msWait0(unsigned int milliseconds)
{
	unsigned int oneMillisecond = 62;
	
	for(unsigned int i = 0; i < milliseconds; i++)
	{
		timer0Delay(oneMillisecond);
	}
}
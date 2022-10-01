/*
 * app.c
 *
 * Created: 13/09/2022 21:36:04
 *  Author: MH
 */ 

#include "app.h"

uint8_t machineState = NORMAL_MODE;

void yellowBoth_blink()
{
	for(uint8_t i = 0; i < 20; i++)
	{
		LED_toggle(A, 1);
		LED_toggle(B, 1);
		msWait0(250);
	}
}

void app_startup()
{
	LED_init(C, 7);
	
	LED_init(A, 0);
	LED_init(A, 1);
	LED_init(A, 2);
	
	LED_init(B, 0);
	LED_init(B, 1);
	LED_init(B, 2);
	
	sei();
	
	MCUCR set_High BIT(0);
	MCUCR set_High BIT(1);
	
	GICR set_High BIT(6);
}

void app_loop()
{
	while (1)
	{
		LED_on(C, 7);
		
		LED_on(A, 0);
		LED_on(B, 2);
		
		waitfor0(5);
		LED_off(A, 0);
		LED_off(B, 2);
		
		yellowBoth_blink();
		
		LED_on(A, 2);
		LED_on(B, 0);
		waitfor0(5);
		
		switch (machineState)
		{
			case NORMAL_MODE:
			LED_off(C, 7);
			
			LED_off(A, 2);
			LED_off(B, 0);
			
			yellowBoth_blink();
			break;
			
			case PEDESTRIAN_MODE:
			waitfor0(5);
			LED_off(A, 2);
			LED_off(B, 0);
			
			yellowBoth_blink();
			
			machineState = NORMAL_MODE;
			break;
		}
	}
}
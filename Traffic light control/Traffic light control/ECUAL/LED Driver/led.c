/*
 * led.c
 *
 * Created: 12/09/2022 23:07:07
 *  Author: MH
 */ 
#include "led.h"

void LED_init(uint8_t port, uint8_t pin)
{
	DIO_init(port, pin, WRITEMODE);
}

void LED_on(uint8_t port, uint8_t pin)
{
	DIO_write(port, pin, High);
}

void LED_off(uint8_t port, uint8_t pin)
{
	DIO_write(port, pin, Low);
}

void LED_toggle(uint8_t port, uint8_t pin)
{
	DIO_toggle(port, pin);
}
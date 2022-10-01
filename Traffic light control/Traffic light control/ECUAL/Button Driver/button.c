/*
 * pin.c
 *
 * Created: 12/09/2022 23:53:30
 *  Author: MH
 */ 

#include "button.h"

void BUTTON_init(uint8_t port, uint8_t pin)
{
	DIO_init(port, pin, READMODE);
}

void BUTTON_read(uint8_t port, uint8_t pin, uint8_t* value)
{
	DIO_read(port, pin, value);
}
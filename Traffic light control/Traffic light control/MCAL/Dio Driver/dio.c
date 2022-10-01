/*
 * dio.c
 *
 * Created: 12/09/2022 18:54:41
 *  Author: MH
 */ 

#include "Dio.h"

void DIO_init(uint8_t port, uint8_t pin, uint8_t mode)
{
	switch(port)
	{
		case A:
			if(mode == READMODE)
			{
				DDRA set_Read BIT(pin);
			}
			else if(mode == WRITEMODE)
			{
				DDRA set_Write BIT(pin);
			}
			else
			{
				//Error handling.
			}
			break;
			
		case B:
			if(mode == READMODE)
			{
				DDRB set_Read BIT(pin);
			}
			else if(mode == WRITEMODE)
			{
				DDRB set_Write BIT(pin);
			}
			else
			{
				//Error handling.
			}
			break;
		
		case C:
			if(mode == READMODE)
			{
				DDRC set_Read BIT(pin);
			}
			else if(mode == WRITEMODE)
			{
				DDRC set_Write BIT(pin);
			}
			else
			{
				//Error handling.
			}
			break;
		
		case D:
			if(mode == READMODE)
			{
				DDRD set_Read BIT(pin);
			}
			else if(mode == WRITEMODE)
			{
				DDRD set_Write BIT(pin);
			}
			else
			{
				//Error handling.
			}
			break;
	}
}

void DIO_write(uint8_t port, uint8_t pin, uint8_t mode)
{
	switch(port)
	{
		case A:
		if(mode == Low)
		{
			PORTA set_Low BIT(pin);
		}
		else if(mode == High)
		{
			PORTA set_High BIT(pin);
		}
		else
		{
			//Error handling.
		}
		break;
		
		case B:
		if(mode == Low)
		{
			PORTB set_Low BIT(pin);
		}
		else if(mode == High)
		{
			PORTB set_High BIT(pin);
		}
		else
		{
			//Error handling.
		}
		break;
		
		case C:
		if(mode == Low)
		{
			PORTC set_Low BIT(pin);
		}
		else if(mode == High)
		{
			PORTC set_High BIT(pin);
		}
		else
		{
			//Error handling.
		}
		break;
		
		case D:
		if(mode == Low)
		{
			PORTD set_Low BIT(pin);
		}
		else if(mode == High)
		{
			PORTD set_High BIT(pin);
		}
		else
		{
			//Error handling.
		}
		break;
	}
}

void DIO_read(uint8_t port, uint8_t pin, uint8_t* value)
{
	switch(port)
	{
		case A:
			*value = (PINA&BIT(pin))>>pin;
			break;
			
		case B:
			*value = (PINB&BIT(pin))>>pin;
			break;
			
		case C:
			*value = (PINC&BIT(pin))>>pin;
			break;
			
		case D:
			*value = (PIND&BIT(pin))>>pin;
			break;
	}
}

void DIO_toggle(uint8_t port, uint8_t pin)
{
	switch(port)
	{
		case A:
			PORTA Toggle BIT(pin);
			break;
			
		case B:
			PORTB Toggle BIT(pin);
			break;
			
		case C:
			PORTC Toggle BIT(pin);
			break;
			
		case D:
			PORTD Toggle BIT(pin);
			break;
	}
}
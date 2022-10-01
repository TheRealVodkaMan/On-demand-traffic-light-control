/*
 * Registers.h
 *
 * Created: 12/09/2022 18:49:10
 *  Author: MH
 */ 

//Registers header file:
#ifndef REGISTERS_H_
#define REGISTERS_H_

//Basic macros for bit manipulation and configuration.
//--------------------------------------------------------------

//uin8_t typedef.
typedef unsigned char uint8_t;

//Modes
#define READMODE 0
#define WRITEMODE 1

//Modes
#define Low 0
#define High 1

//Registry manipulation macros.
#define All_High |=(255<<0) //Set entire registry to high.
#define All_Low &=~(255<<0) //Set entire registry to low.
#define All_Toggle ^=(255<<0)// Toggle entire registry.

//Extra for easier readability.
#define all_Write |=(255<<0)
#define all_Read &=~(255<<0)

//Bit manipulation macros.
#define set_High |=
#define set_Low &=~
#define Toggle ^=

//Extra for easier readability (specific to one bit).
#define set_Write |=
#define set_Read &=~

//For an easier function development.
#define BIT(pin) (1<<pin)

//--------------------------------------------------------------

//Status registry:
#define SREG *((volatile uint8_t*) 0x5F)

//Interrupt registers:
#define MCUCR *((volatile uint8_t*) 0x55)	//Control register.
#define GICR *((volatile uint8_t*) 0x5B)	//General interrupt control register.
#define GIFR *((volatile uint8_t*) 0x5A)	//General interrupt flag control.

//Port macros.
#define A 0		//Register A.
#define B 1		//Register B.
#define C 2		//Register C.
#define D 3		//Register D.

//Registry A:
#define PORTA *((volatile uint8_t*) 0x3B)
#define DDRA *((volatile uint8_t*) 0x3A)
#define PINA *((volatile uint8_t*) 0x39)

//Registry B:
#define PORTB *((volatile uint8_t*) 0x38)
#define DDRB *((volatile uint8_t*) 0x37)
#define PINB *((volatile uint8_t*) 0x36)

//Registry C:
#define PORTC *((volatile uint8_t*) 0x35)
#define DDRC *((volatile uint8_t*) 0x34)
#define PINC *((volatile uint8_t*) 0x33)

//Registry D:
#define PORTD *((volatile uint8_t*) 0x32)
#define DDRD *((volatile uint8_t*) 0x31)
#define PIND *((volatile uint8_t*) 0x30)

//Timers flag registry:
#define TIFR *((volatile uint8_t*) 0x58)

//Timer overflow flag bits:
#define TOV0 BIT(0)

//(8-Bit) Timer0 Registers:
#define TCCR0 *((volatile uint8_t*) 0x53)
#define TCNT0 *((volatile uint8_t*) 0x52)

#endif /* REGISTERS_H_ */
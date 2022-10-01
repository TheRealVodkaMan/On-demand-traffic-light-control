/*
 * Dio.h
 *
 * Created: 12/09/2022 18:54:22
 *  Author: MH
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Registers.h"

//True/False.
#define true 1
#define false 0

//Check functions for Pin/Port->A.
#define checkPINA(pin) ((PINA&BIT(pin))>>pin) 
#define checkPORTA(pin) ((PORTA&BIT(pin))>>pin)

//Check functions for Pin/Port->B.
#define checkPINB(pin) ((PINB&BIT(pin))>>pin)
#define checkPORTB(pin) ((PORTB&BIT(pin))>>pin)

//Check functions for Pin/Port->C.
#define checkPINC(pin) ((PINC&BIT(pin))>>pin)
#define checkPORTC(pin) ((PORTC&BIT(pin))>>pin)

//Check functions for Pin/Port->D.
#define checkPIND(pin) ((PIND&BIT(pin))>>pin)
#define checkPORTD(pin) ((PORTD&BIT(pin))>>pin)

//Pin configuration functions.
void DIO_init(uint8_t port, uint8_t pin, uint8_t mode);
void DIO_write(uint8_t port, uint8_t pin, uint8_t value);
void DIO_read(uint8_t port, uint8_t pin, uint8_t* value);
void DIO_toggle(uint8_t port, uint8_t pin);

#endif /* DIO_H_ */
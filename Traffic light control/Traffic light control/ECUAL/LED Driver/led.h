/*
 * led.h
 *
 * Created: 12/09/2022 23:06:59
 *  Author: MH
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/Dio Driver/dio.h"

void LED_init(uint8_t port, uint8_t pin);
void LED_on(uint8_t port, uint8_t pin);
void LED_off(uint8_t port, uint8_t pin);
void LED_toggle(uint8_t port, uint8_t pin);  

#endif /* LED_H_ */
/*
 * pin.h
 *
 * Created: 12/09/2022 23:53:43
 *  Author: MH
 */ 


#ifndef PIN_H_
#define PIN_H_

#include "../../MCAL/Dio Driver/dio.h"

void BUTTON_init(uint8_t port, uint8_t pin);
void BUTTON_read(uint8_t port, uint8_t pin, uint8_t* value);

#endif /* PIN_H_ */
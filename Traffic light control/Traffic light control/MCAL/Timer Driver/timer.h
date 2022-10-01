/*
 * Timer.h
 *
 * Created: 13/09/2022 05:26:30
 *  Author: MH
 */ 


#ifndef TIMER_H_
#define TIMER_H_

//Timer overflow values (calculated for 16MHz clock frequency)

#include "../../Registers.h"

//Timer initialization prototype.
void timer0_init();

//Delay function prototype.
void timer0Delay(unsigned int overflow);

//Wait function to overcome macros (Through declaration of a suitable Overflow)
void waitfor0(unsigned int seconds);

//Same concept as previous function but different functionality.
void msWait0(unsigned int milliseconds);

#endif /* TIMER_H_ */
/*
 * app.h
 *
 * Created: 13/09/2022 21:36:12
 *  Author: MH
 */ 


#ifndef APP_H_
#define APP_H_

#include "../MCAL/Timer Driver/Timer.h"
#include "../MCAL/Interrupt Driver/interrupt.h"

#include "../ECUAL/LED Driver/led.h"

#define NORMAL_MODE		0
#define PEDESTRIAN_MODE 1

uint8_t machineState;

void yellowBoth_blink();

void app_startup();

void app_loop();

#endif /* APP_H_ */
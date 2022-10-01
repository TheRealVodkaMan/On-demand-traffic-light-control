/*
 * Traffic light control.cpp
 *
 * Created: 12/09/2022 18:48:20
 * Author : MH
 */ 

#include "Application/app.h"

int main(void)
{
	app_startup();
	
	app_loop();
}

ISR(EXT_INT_0)
{
	if(checkPINA(2) == 1)
	{
		if(machineState == NORMAL_MODE)
		{
			machineState = PEDESTRIAN_MODE;
		}
	}
}
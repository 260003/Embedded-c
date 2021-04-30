/**
 * @file project_main.c
 * @author Rahul Mane
 * @brief Activities in Embedded track
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"


int main(void)
{
	uint16_t Temperature, ADCchannel=0;
	char TempType;
	while(1)
           {
		uint8_t Status;
		Status=LedActuator(); // if both heater and button is on then only go ahead to read data from sensor
		if(Status==ON)
                    {
			Temperature=ReadADC(ADCchannel); /*read data from ADC*/
    	                TempType=CreatePWM(Temperature); //Genrate PWM
			
		}
	    }
	     return 0;
}

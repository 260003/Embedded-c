#include "activity1.h"
#include "activity3.h"

#define DutyCycle(Percent) (1024*Percent/100)



void InitPWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char CreatePWM(uint16_t Temperature){
    InitPWM();/* Initialize Peripherals for PWM */
    if(Temperature<=200){
         OCR1A=DutyCycle(20.0);
        Delay(200);
        return 'w';
    }
    else if(Temperature>200 && Temperature<=500){
         OCR1A=DutyCycle(40.0);//PWM of Duty cycle 40%
        Delay(200);
        return 'x';
    }
    else if(Temperature>500 && Temperature<=700){
         OCR1A=DutyCycle(70.0);//PWM of Duty cycle 70%
        Delay(200);
        return 'y';
    }
    else{
         OCR1A=DutyCycle(95.0);//PWM of Duty cycle 95%
        Delay(200);
        return 'z';
    }
}

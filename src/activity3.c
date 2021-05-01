#include "activity1.h"
#include "activity3.h"


void InitPWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char CreatePWM(uint16_t Temperature){
    InitPWM();/* Initialize Peripherals for PWM */
    if(Temperature<=200){
         OCR1A=204.8;//PWM of Duty cycle 20% :- (20*1024/100)=204.8
        Delay(200);
        return 'w';
    }
    else if(Temperature>200 && Temperature<=500){
        OCR1A=409.6;//PWM of Duty cycle 40% :- (40*1024/100)=409.6
        Delay(200);
        return 'x';
    }
    else if(Temperature>500 && Temperature<=700){
         OCR1A=716.8;//PWM of Duty cycle 70% :-  (70*1024/100)=716.8
        Delay(200);
        return 'y';
    }
    else{
         OCR1A=972.8;//PWM of Duty cycle 95%  :- (95*1024/100)=972.8
        Delay(200);
        return 'z';
    }
}

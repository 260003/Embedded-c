#include "activity1.h"
#include "activity2.h"


void InitADC()
{
    ADMUX |= (1<<REFS0);
    ADCSRA |= (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)|(1<<ADEN);
}
uint16_t ReadADC(uint8_t channel)
{
    InitADC();
    //select ADC channel 
    ADMUX &= 0xF8;
    //start single conversion 
    channel &= 0x07;
    ADMUX &= channel;
    ADCSRA |= (1<<ADSC);
    // wait for conversion to complete
    while(ADCSRA & (1<<ADSC));
    ADCSRA|=(1<<ADIF);
    return ADC;
}
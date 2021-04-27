#include <avr/io.h>
#include <util/delay.h>

void InitADC()
{
    // Select Vref=AVcc
    ADMUX |= (1<<REFS0);
    //set prescaller to 128 and enable ADC
    ADCSRA |= (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)|(1<<ADEN);
}
uint16_t ReadADC(uint8_t channel)
{
    //select ADC channel with safety mask
    ADMUX &= 0xF8;
    //single conversion mode
    channel &= 0x07;
    ADCSRA |= (1<<ADSC);
    // wait until ADC conversion is complete
    while( ADCSRA & (1<<ADSC) );
    ADCSRA|=(1<<ADIF);
    return ADC;
}
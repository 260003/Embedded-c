#include "activity1.h"

void Delay(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}



void ChangeLed(uint8_t state)
{
	(PORTB) = (state << (PORTB0));
}



void SettingPeripherals(void)
{

	DDRB |= (1<<PORTB0);// B0 as output
        DDRD = 0x00; // PORTD as input
	PORTD |= (1<<PORTD1)|(1<<PORTD0);
        PORTD |= (1 <<PORTD0);
        PORTD |= (1 <<PORTD1);
}

uint8_t LedActuator(void)
{
    uint8_t FLAG=0;
    SettingPeripherals();
    ChangeLed(0x00);

   if((!(PIND & 1<<PD0))&&(!(PIND & 1<<PD1)))
        {

                  ChangeLed(0x01);
                  FLAG = 1;
        }
    else
        {
             ChangeLed(0x00);
             FLAG = 0;
        }
    return FLAG;
}







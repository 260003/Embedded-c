/**
 * @file project_main.c
 * @author Rahul mane
 * @brief Project to complete activities as described in Embedded track
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
   DDRB|=(1<<PB0); //Nakes first pin of PORTC as Output
   DDRD &=~(1<<PD0);//Makes firs pin of PORTD as Input
   DDRD &= ~(1<<PD1);
   PORTD|=(1<<PD0);
   PORTD|=(1<<PD1);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();
	/* Activity1 */
	activity1();
	return 0;
}

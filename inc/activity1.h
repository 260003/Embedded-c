#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_
/**
 * @file activity1.h
 * @author Rahul Mane
 * @brief Activity1
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */
/**
 * Include files
 */
/**< set microcontroller frequency as 16 MHz **/
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief Function to change status of LED
 *
 *
 */
void ChangeLed(uint8_t state);

/**
 * @brief Function to generate delay
 *
 *
 */
void Delay(uint32_t delay_time);

/**
 * @brief Function to change LED status 
 *
 * @return FLAG
 */
uint8_t LedActuator(void);




#endif /* _ACTIVITY1_H_ */

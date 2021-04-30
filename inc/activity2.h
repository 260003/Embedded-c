#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

/**
 * @file activity2.h
 * @author Rahul Mane
 * @brief Activity2 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Function to initialize ADC
 * 
 */
void InitADC();

/**
 * @brief Function to read values from a ADC
 * @param[in] channel channel number
 */
uint16_t ReadADC(uint8_t channel);

#endif /* _ACTIVITY2_H_ */
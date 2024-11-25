/*
 * stm32f411_rcc_driver.h
 *
 *  Created on: Nov 25, 2024
 *      Author: froes
 */

#ifndef STM32F411_RCC_DRIVER_H_
#define STM32F411_RCC_DRIVER_H_


#include "stm32f411.h"

/**
 * @brief  Returns the value of the peripheral clock 1 (PCLK1).
 * @note   This function calculates the PCLK1 value based on the system clock
 *         and the APB1 prescaler settings.
 * @retval uint32_t: The PCLK1 clock value in Hz.
 */
uint32_t RCC_GetPCLK1Value(void);


/**
 * @brief  Gets the value of the Peripheral Clock 2 (PCLK2).
 * @note   This function calculates the PCLK2 value based on the system clock
 *         and the APB2 prescaler settings.
 * @retval The PCLK2 value in Hz.
 */
uint32_t RCC_GetPCLK2Value(void);


/**
 * @brief  Retrieves the output clock frequency of the PLL (Phase-Locked Loop).
 * @note   This function calculates the PLL output clock based on the current
 *         PLL configuration settings.
 * @retval The PLL output clock frequency in Hz.
 */
uint32_t  RCC_GetPLLOutputClock(void);
#endif /* INC_STM32F411_RCC_DRIVER_H_ */

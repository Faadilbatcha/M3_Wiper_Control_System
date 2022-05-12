/*
 * driver.c
 * @brief
 * @version 0.1
 * Created on: May 9, 2022
 * Author Faadil Batcha K
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "driver.h"

void delay_ms(uint32_t time)
{
	for (uint32_t i = 0; i < (time*100000); i++)
	{
		
	}
}

void init_button(void)
{																			//(for GPIO																			// for clocking and making it input(here) or output
	uint32_t *pRccAhb1enr1 = (uint32_t *)0x40023830; // Initialising Reset Control Clock for GPIOA (0x40023800 + 0x30(offset))
	*pRccAhb1enr1 |= (1 << 0);						 // enable GPIOA (GPIOAEN)

	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C; //(GPIOx_PUPDR) + 0x0C(offset) for Pull up and pull down
	*pGpioPuPdReg |= (1 << 1);						 						// for setting pull down for A0
}
void init_all_led(void)
{													  						//(for GPIO D)
													  	  	  	  	  	  	// for clocking and making it input or output(here)
	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830;	  						// 0x40023800 + 0x30(offset)  (RCC), (RCC_AHB1ENR)
	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00; 						// 0x40020C00  (GPIOD) (GPIOx_MODER)

	*pRccAhb1enr |= (1 << 3); 												// enable GPIOD (GPIODEN)
	// configure it as General purpose output mode
	// GPIO port mode register, MODERy[1:0] for understanding
	*pGpiodModeReg |= (1 << (2 * LED_GREEN));  								// setting MODER12 as an output pin
	*pGpiodModeReg |= (1 << (2 * LED_ORANGE)); 								// setting MODER13 as an output pin
	*pGpiodModeReg |= (1 << (2 * LED_RED));	   								// setting MODER14 as an output pin
	*pGpiodModeReg |= (1 << (2 * LED_BLUE));   								// setting MODER15 as an output pin

	led_off(LED_GREEN);
	led_off(LED_ORANGE);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

void led_on(uint8_t led_no)							  						// here this will turn on the given LED pin
{													  						// for outputting data
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 						//(GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg |= (1 << led_no);
}

void led_off(uint8_t led_no)						  						// here this will turn off the given LED pin
{													  						// for outputting data
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 						//(GPIOx_ODR) + 0x14(offset)
	*pGpiodDataReg &= ~(1 << led_no);
}

int button_count(void)
{
	init_button();
	int count = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; // Initialising dataregister for button((GPIOx_IDR) + 0x10(offset))
	int sec = 10000000;
	while (sec--)
	{
		if ((*pGpiodDataReg1) & (1 << user_button))
		{ // check if the button is pressed or not
			delay_ms(150);
			count++;
			if (count > 5)
				count = 0;
		}
	}
	return count; // Returns no of key presses
}


/*end of Faadil Batcha's Work for Drivers, Delays and Multiple Press Identification*/
/*
 * driver.c
 *
 *  Created on: May 11, 2022
 *      Author: User
 */



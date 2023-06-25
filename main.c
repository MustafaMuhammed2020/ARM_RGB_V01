/**************************************************/
/* Author  : Mustafa Mohammed Abdou               */
/* Date    : 24 Jun , 2023                        */
/* Version : V01                                  */
/* Hint    : implementation of APP APIs           */
/**************************************************/

/** INCLUDE LIBRARIES **/
#include "SERVICE/common_macros.h"
#include "SERVICE/standard_types.h"

/** INTERFACE FILES OF LOWER LAYERS **/
#include "MCAL/GPIO/GPIO_interface.h"
#include "MCAL/GPIO/GPIO_private.h"
#include "HAL/BTN/button_interface.h"
#include "HAL/BTN/button_config.h"

#include "HAL/LED/LED_interface.h"
#include "HAL/LED/LED_config.h"

#include "APP/APP.h"
#include "HAL/LED/LED_interface.h"

/** 0x40000000, 0x400FFFFF **/
int main(void)
{
	
	APP_init() ;
	
	
	
	while(1)
	{
		APP_start();
	}
	
}


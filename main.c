/**************************************************/
/* Author  : Mustafa Mohammed Abdou               */
/* Date    : 24 Jun , 2023                        */
/* Version : V01                                  */
/* Hint    : implementation of APP APIs           */
/**************************************************/

#include"APP/APP.h"
#include"HAL/LED/LED_interface.h"

int main(void)
{
	
	APP_init() ;
	
	LED_pattern3();
	
	while(1)
	{
		

		/** APP_start(); **/
	}
	
}


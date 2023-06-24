/**************************************************/
/* Author  : Mustafa Mohammed Abdou               */
/* Date    : 24 Jun , 2023                        */
/* Version : V01                                  */
/* Hint    : Interface file of GPIO                */
/**************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


/*****************************************************************/
/* INTERFACE FILE CONTAINS ALL PROTOTYPES AND CONFIGURATIONS     */
/* RELATED TO SPECIFIC MODULE                                    */
/*****************************************************************/

/***** MACRO FOR EACH PORT ACTS AS PORT ID  ***********/
#define GPIO_PORTA         0
#define GPIO_PORTB         1
#define GPIO_PORTC         2
#define GPIO_PORTD         3
#define GPIO_PORTE         4
#define GPIO_PORTF         5

/*********** MACRO FOR EACH PIN ACTS AS PIN ID **********/
#define GPIO_PIN0          0
#define GPIO_PIN1          1
#define GPIO_PIN2          2
#define GPIO_PIN3          3
#define GPIO_PIN4          4
#define GPIO_PIN5          5
#define GPIO_PIN6          6
#define GPIO_PIN7          7


/********** MACROS FOR PIN DIRECTIONS ******************/
#define GPIO_PIN_OUTPUT    1
#define GPIO_PIN_INPUT     0


/********** MACROS FOR PORT DIRECTIONS *****************/
#define GPIO_PORT_OUTPUT   0xFF
#define GPIO_PORT_INPUT    0x00


/********* MACROS FOR OUTPUT PIN VALUES ***************/
#define GPIO_PIN_HIGH      1
#define GPIO_PIN_LOW       0


/*********** MACROS FOR OUTPUT PORT DIRECTIONS *********/
#define GPIO_PORT_HIGH     0xFF
#define GPIO_PORT_LOW      0x00


/** TYPE DEFINITION FOR GPIO FUNCTIONS' ERROR STATUS **/
typedef enum { GPIO_SUCCEED = 0  , GPIO_FAILURE } enu_GPIO_error_status_t ;
	

/***********************************************************************/
/* DESCRIBTION  : FUNCTION TO SET THE DIRECTION OF SPECIFIC PIN        */
/* INPUT        : PORT , PINID , DIRECTION                             */
/* RETURNS      : enu_GPIO_error_status_t                              */
/***********************************************************************/
enu_GPIO_error_status_t GPIO_setpindir(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t u8_a_pindir);


/***********************************************************************/
/* DESCRIBTION  : FUNCTION TO SET THE VALUE OF SPECIFIC PIN            */
/* INPUT        : PORT , PINID , DIRECTION                             */
/* RETURNS      : enu_GPIO_error_status_t                               */
/***********************************************************************/
enu_GPIO_error_status_t GPIO_setpinvalue(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t u8_a_pinval);


/******************************************************************/
/* DESCRIBTION  : FUNCTION TO GET THE VALUE OF SPECIFIC PIN       */
/* INPUT   : PORTID , PINID , POINTER TO SET THE VALUE IN IT      */
/* RETURNS : PinRead_t                                            */
/******************************************************************/
enu_GPIO_error_status_t GPIO_readpin(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t* u8_a_retval);


#endif

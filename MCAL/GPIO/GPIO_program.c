/**************************************************/
/* Author  : Mustafa Mohammed Abdou               */
/* Date    : 3 April , 2023                       */
/* Version : V01                                  */
/* Hint    : Program file of GPIO                  */
/**************************************************/

/** INCLUDE LIBRARIES **/
#include "../../SERVICE/common_macros.h"
#include "../../SERVICE/standard_types.h"

/** INCLUDE DRIVER FILES **/
#include "GPIO_interface.h"
#include "GPIO_private.h"


/***********************************************************************/
/* DESCRIBTION  : FUNCTION TO SET THE DIRECTION OF SPECIFIC PIN        */
/* INPUT        : PORT , PINID , DIRECTION                             */
/* RETURNS      : enu_GPIO_error_status_t                               */
/***********************************************************************/
enu_GPIO_error_status_t GPIO_setpindir(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t u8_a_pindir)
{
	enu_GPIO_error_status_t enu_l_setpindir_state = GPIO_SUCCEED ; /** LOCAL VARIABLE TO RETURN THE STATUS OF DIRECTION **/
	
	switch(u8_a_pindir)            /** SWITCH CASE ON THE DIRECTION VALUE **/
	{
		case GPIO_PIN_INPUT:        /** INPUT CASE  **/
		{
			switch(u8_a_portid)    /** SWITCH CASE ON THE PORT ID **/
			{
				case GPIO_PORTA:
				clear_bit(GPIOA_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTA AS INPUT PIN **/
				break ;
				
				case GPIO_PORTB:
				clear_bit(GPIOB_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTB AS INPUT PIN **/
				break ;
				
				case GPIO_PORTC:
				clear_bit(GPIOC_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTC AS INPUT PIN **/
				break ;
				
				case GPIO_PORTD:
				clear_bit(GPIOD_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTD AS INPUT PIN **/
				break ;
				
				case GPIO_PORTE:
				clear_bit(GPIOE_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTE AS INPUT PIN **/
				break ;
				
				case GPIO_PORTF:
				clear_bit(GPIOF_DIR , u8_a_pinid);           /** CONFIGURE THIS PIN IN PORTF AS INPUT PIN **/
				break ;
				
				default: 
				enu_l_setpindir_state = GPIO_FAILURE ;   /** RETURN AS DIR NOT VALID ERRORS **/
				break ;
			}
			
			break ; /** BREAK OF INPUT CASE **/
		}
		
		
		case GPIO_PIN_OUTPUT:              /** OUTPUT CASE  **/
		{
			switch(u8_a_portid)           /** SWITCH CASE ON THE PORT ID */
			{
				case GPIO_PORTA:
				set_bit(GPIOA_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTA AS OUTPUT PIN **/
				break ;
				
				case GPIO_PORTB:
				set_bit(GPIOB_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTB AS OUTPUT PIN **/
				break ;
				
				case GPIO_PORTC:
				set_bit(GPIOC_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTC AS OUTPUT PIN **/
				break ;
				
				case GPIO_PORTD:
				set_bit(GPIOD_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTD AS OUTPUT PIN **/
				break ;
				
				case GPIO_PORTE:
				set_bit(GPIOE_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTE AS OUTPUT PIN **/
				break ;
				
				case GPIO_PORTF:
				set_bit(GPIOF_DIR , u8_a_pinid);             /** CONFIGURE THIS PIN IN PORTF AS OUTPUT PIN **/
				break ;
				
				default:  
				enu_l_setpindir_state = GPIO_FAILURE ; /** RETURN AS DIR NOT VALID ERRORS **/
				break ;
			}
			
			break ; /** BREAK OF OUTPUT CASE **/
		}
		
		 
		default:  /** DIRECTION ISN'T INPUT OR OUTPUT */
		
		enu_l_setpindir_state = GPIO_FAILURE ; /** RETURN AS DIR NOT VALID ERRORS **/
		
		break ; 
	} 
	
	return enu_l_setpindir_state ; /** RETURN THE STATE OF FUNCTION **/
}



/***********************************************************************/
/* DESCRIBTION  : FUNCTION TO SET THE VALUE OF SPECIFIC PIN            */
/* INPUT        : PORT , PINID , DIRECTION                             */
/* RETURNS      : enu_GPIO_error_status_t                               */
/***********************************************************************/
enu_GPIO_error_status_t GPIO_setpinvalue(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t u8_a_pinval)
{
	
	enu_GPIO_error_status_t enu_l_setpinval_state = GPIO_SUCCEED ;  /** LOCAL VARIABLE TO RETURN THE STATUS OF VALUE **/ 
	
	switch(u8_a_pinval)
	{
		case GPIO_PIN_LOW:            /** IN CASE PIN VALUE IS LOW  **/
		{
			switch(u8_a_portid)     /** SWITCH CASE ON THE PORT ID **/
			{
				case GPIO_PORTA:
				clear_bit(GPIOA_DATA , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				case GPIO_PORTB:
				clear_bit(GPIOB_DATA , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				case GPIO_PORTC:
				clear_bit(GPIOC_DATA , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				case GPIO_PORTD:
				clear_bit(GPIOD_DATA , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				case GPIO_PORTE:
				clear_bit(GPIOE_DATA , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				case GPIO_PORTF:
				clear_bit(u8_a_pinid , u8_a_pinid);       /** SET THIS PIN AS LOW **/
				break ;
				
				default:
				enu_l_setpinval_state = GPIO_FAILURE ;  /** RETURN VALUE AS NOT VALID **/
				break;
			}
			
			break ;  /** BREAK OF GPIO_PIN_LOW CASE **/
		}
		
		
		case GPIO_PIN_HIGH:        /** IN CASE PIN VALUE IS HIGH **/
		{
			switch(u8_a_portid)   /** SWITCH CASE ON THE PORT ID **/
			{
				case GPIO_PORTA:
				set_bit(GPIOA_DATA , u8_a_pinid);         /** SET THIS PIN AS HIGH  **/
				break ;
				
				case GPIO_PORTB:
				set_bit(GPIOB_DATA , u8_a_pinid);         /** SET THIS PIN AS HIGH  **/
				break ;
				
				case GPIO_PORTC:
				set_bit(GPIOC_DATA , u8_a_pinid);         /** SET THIS PIN AS HIGH  **/
				break ;
				
				case GPIO_PORTD:
				set_bit(GPIOD_DATA , u8_a_pinid);         /** SET THIS PIN AS HIGH  **/
				break ;
				
				case GPIO_PORTE:
				set_bit(GPIOE_DATA , u8_a_pinid);         /** SET THIS PIN AS HIGH  **/
				break ;
				
				case GPIO_PORTF:
				set_bit(GPIOF_DATA , u8_a_pinid);    /**  SET THIS PIN AS HIGH  **/
				break ;
				
				default:
				enu_l_setpinval_state = GPIO_FAILURE ;  /** RETURN VALUE AS NOT VALID **/
				break ;
			}
			
			break ;   /** BREAK OF GPIO_PIN_HIGH CASE **/
		}
		
		
		default :
		enu_l_setpinval_state = GPIO_FAILURE ;  /** RETURN VALUE AS NOT VALID **/
		break ;
	} 
	
	return enu_l_setpinval_state ;    /** RETURN THE FINAL STATE OF THE FUNCTION **/
}



/******************************************************************/
/* DESCRIBTION  : FUNCTION TO GET THE VALUE OF SPECIFIC PIN       */
/* INPUT   : PORTID , PINID , POINTER TO SET THE VALUE IN IT      */
/* RETURNS : PinRead_t                                            */
/******************************************************************/
enu_GPIO_error_status_t GPIO_readpin(uint8_t u8_a_portid , uint8_t u8_a_pinid , uint8_t* u8_a_retval)
{
	enu_GPIO_error_status_t enu_l_readpin_state = GPIO_SUCCEED ;  /** LOCAL VARIABLE TO HOLD THE FUNCTION ERROR STATE **/
	
	switch(u8_a_portid)      /** SWITCH CASE ON PORT ID **/
	{
		case GPIO_PORTA:     
		*u8_a_retval = get_bit(GPIOA_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		case GPIO_PORTB:      
		*u8_a_retval = get_bit(GPIOB_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		case GPIO_PORTC:    
		*u8_a_retval = get_bit(GPIOC_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		case GPIO_PORTD:      
		*u8_a_retval = get_bit(GPIOD_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		case GPIO_PORTE:      
		*u8_a_retval = get_bit(GPIOE_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		case GPIO_PORTF:      
		*u8_a_retval = get_bit(GPIOF_DATA , u8_a_pinid);   /** GET THE VALUE OF THE BIT **/
		break ;
		
		default:
		enu_l_readpin_state = GPIO_FAILURE ;         /**      READ IS NOT VALID    **/
		break ;
	} 
	
	return enu_l_readpin_state ;          /** RETURN THE FINAL STATE OF THE FUNCTION **/	
}


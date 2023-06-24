/**************************************************/
/* Author  : Mustafa Mohammed Abdou               */
/* Date    : 3 April , 2023                       */
/* Version : V01                                  */
/* Hint    : Private file of GPIO                  */
/**************************************************/


/* HEADER FILE GUARD */
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H


/****************************************************/
/* PRIVATE FILE CONTAINS THE PRIVATE DATA           */
/* RELATED TO EACH MODULE TO BE ACCESSED ONLY       */
/* BY THE MODULE ITSELF                             */
/****************************************************/



/** GPIO APB base addresses **/
#define GPIOA_base   0x40004000
#define GPIOB_base   0x40005000
#define GPIOC_base   0x40006000
#define GPIOD_base   0x40007000
#define GPIOE_base   0x40024000
#define GPIOF_base   0x40025000

/*************** PORTA registers ********************/
#define GPIOA_DATA   (*((volatile uint32_t *) (GPIOA_base)))
#define GPIOA_DIR    (*((volatile uint32_t *) (GPIOA_base + 0x400)))
#define GPIOA_PUR    (*((volatile uint32_t *) (GPIOA_base + 0x510)))
#define GPIOA_PDR    (*((volatile uint32_t *) (GPIOA_base + 0x514)))


/*************** PORTB registers ********************/
#define GPIOB_DATA   (*((volatile uint32_t *) (GPIOB_base)))
#define GPIOB_DIR    (*((volatile uint32_t *) (GPIOB_base + 0x400)))
#define GPIOB_PUR    (*((volatile uint32_t *) (GPIOB_base + 0x510)))
#define GPIOB_PDR    (*((volatile uint32_t *) (GPIOB_base + 0x514)))


/*************** PORTC registers ********************/
#define GPIOC_DATA   (*((volatile uint32_t *) (GPIOC_base)))
#define GPIOC_DIR    (*((volatile uint32_t *) (GPIOC_base + 0x400)))
#define GPIOC_PUR    (*((volatile uint32_t *) (GPIOC_base + 0x510)))
#define GPIOC_PDR    (*((volatile uint32_t *) (GPIOC_base + 0x514)))


/*************** PORTD registers ********************/
#define GPIOD_DATA   (*((volatile uint32_t *) (GPIOD_base)))
#define GPIOD_DIR    (*((volatile uint32_t *) (GPIOD_base + 0x400)))
#define GPIOD_PUR    (*((volatile uint32_t *) (GPIOD_base + 0x510)))
#define GPIOD_PDR    (*((volatile uint32_t *) (GPIOD_base + 0x514)))


/*************** PORTE registers ********************/
#define GPIOE_DATA   (*((volatile uint32_t *) (GPIOE_base)))
#define GPIOE_DIR    (*((volatile uint32_t *) (GPIOE_base + 0x400)))
#define GPIOE_PUR    (*((volatile uint32_t *) (GPIOE_base + 0x510)))
#define GPIOE_PDR    (*((volatile uint32_t *) (GPIOE_base + 0x514)))


/*************** PORTF registers ********************/
#define GPIOF_DATA   (*((volatile uint32_t *) (GPIOF_base)))
#define GPIOF_DIR    (*((volatile uint32_t *) (GPIOF_base + 0x400)))
#define GPIOF_PUR    (*((volatile uint32_t *) (GPIOF_base + 0x510)))
#define GPIOF_PDR    (*((volatile uint32_t *) (GPIOF_base + 0x514)))



#endif


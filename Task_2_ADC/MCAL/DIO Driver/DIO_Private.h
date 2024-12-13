/********************************************************
 * DIO_Private.h ******************************************
 ******************************************
 * Created: 2023-07-12 7:00:12 PM
 *  Author: Abdelrahman Ellithy
 */ 

#ifndef DIO_H_
#define DIO_H_


/************************************************************************/
/* define macros                                                                     */
/************************************************************************/
/*          Definition For Group A 									    */
/************************************************************************/
#define PORTA  	 *((volatile u8*)0x3B)
#define DDRA     *((volatile u8*)0x3A)
#define PINA     *((volatile u8*)0x39)
/************************************************************************/
/*          Definition For Group B									    */
/************************************************************************/
#define PORTB   (*(volatile u8*)0x38)
#define DDRB    (*(volatile u8*)0x37)
#define PINB    (*(volatile u8*)0x36)
/************************************************************************/
/*          Definition For Group C									   */
/************************************************************************/
#define PORTC   (*(volatile u8*)0x35)
#define DDRC    (*(volatile u8*)0x34)
#define PINC    (*(volatile u8*)0x33)
/************************************************************************/
/*          Definition For Group D									   */
/************************************************************************/
#define PORTD   (*(volatile u8*)0x32)
#define DDRD    (*(volatile u8*)0x31)
#define PIND    (*(volatile u8*)0x30)

/*PULL UP */
#define  SFIOR   (*(volatile u8*)0x50)


#endif /* DIO_H_ */
/* 
 * File:   LCD.h
 * Author: Microside Technology
 *
 * Created on 25 de noviembre de 2020, 01:51 PM
 */

#ifndef LCD_H
#define	LCD_H

#define RS LATB0                    /*PIN 0 of PORTB is assigned for register select Pin of LCD*/
#define EN LATB1                    /*PIN 1 of PORTB is assigned for enable Pin of LCD */
#define ldata LATB                  /*PORTB(PB4-PB7) is assigned for LCD Data Output*/ 
#define LCD_Port TRISB              /*define macros for PORTB Direction Register*/

#define _XTAL_FREQ 48000000

void LCD_Init(); /*Initialize LCD*/
void LCD_Command(unsigned char); /*Send command to LCD*/
void LCD_Char(unsigned char x); /*Send data to LCD*/
void LCD_String(const char *); /*Display data string on LCD*/
void LCD_String_xy(char, char, const char *);
void LCD_Clear(); /*Clear LCD Screen*/


#endif	/* LCD_H */


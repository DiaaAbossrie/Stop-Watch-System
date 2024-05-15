/*
 * gpio.h
 *
 *  Created on: Sep 12, 2023
 *      Author: Diaa Abossrie
 */

#ifndef GPIO_H_
#define GPIO_H_
#define REFRESH_RATE_MS 3 /* The desired refresh rate in milliseconds */
#include <avr/io.h> /* Include AVR I/O header file */
#include <util/delay.h> /* Include delay header file */


/* Function to configure a specific pin on a specific port as input or output */
void directPin(unsigned char port, unsigned char num, unsigned char type);

/* Function to set a specific pin on a specific port to logic high */
void setPin(unsigned char port, unsigned char num);

/* Function to clear a specific pin on a specific port (set to logic low) */
void clearPin(unsigned char port, unsigned char num);

/* Macro to display stopwatch time on seven-segment display */
#define stopwatchDisplay(i_seconds,i_minutes,i_hours) {\
    /* Display seconds units */\
    PORTC = (PORTC & 0xF0) | ( ((i_seconds )% 10) & 0x0F);\
    setPin('a', 0);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 0);\
\
    /* Display seconds tens */\
    PORTC = (PORTC & 0xF0) | ( ((i_seconds) / 10) & 0x0F);\
    setPin('a', 1);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 1);\
\
    /* Display minutes units */\
    PORTC = (PORTC & 0xF0) | ( ((i_minutes)% 10) & 0x0F);\
    setPin('a', 2);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 2);\
\
    /* Display minutes tens */\
    PORTC = (PORTC & 0xF0) | ( ((i_minutes) / 10) & 0x0F);\
    setPin('a', 3);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 3);\
\
    /* Display hours units */\
    PORTC = (PORTC & 0xF0) | ( ((i_hours) % 10) & 0x0F);\
    setPin('a', 4);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 4);\
\
    /* Display hours tens */\
    PORTC = (PORTC & 0xF0) | ( ((i_hours) / 10) & 0x0F);\
    setPin('a', 5);\
    _delay_ms(REFRESH_RATE_MS);\
    clearPin('a', 5);\
}

#endif /* GPIO_H_ */

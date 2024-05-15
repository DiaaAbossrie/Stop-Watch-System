/*
 * gpio.c
 *
 *  Created on: Sep 12, 2023
 *      Author: Diaa Abossrie
 */
#include "gpio.h" /* Include GPIO header file */
#include <avr/io.h> /* Include AVR I/O header file */
#include <util/delay.h> /* Include delay header file */

/* Function to configure a specific pin on a specific port as input or output */
void directPin(unsigned char port, unsigned char num, unsigned char type){
    switch(port){
        case 'a':
        case 'A':
            if(type){
                DDRA |= 1<<num; /* Set pin as output */
            } else {
                DDRA &= ~(1<<num); /* Set pin as input */
            }
            break;
        case 'b':
        case 'B':
            if(type){
                DDRB |= 1<<num; /* Set pin as output */
            } else {
                DDRB &= ~(1<<num); /* Set pin as input */
            }
            break;
        case 'c':
        case 'C':
            if(type){
                DDRC |= 1<<num; /* Set pin as output */
            } else {
                DDRC &= ~(1<<num); /* Set pin as input */
            }
            break;
        case 'd':
        case 'D':
            if(type){
                DDRD |= 1<<num; /* Set pin as output */
            } else {
                DDRD &= ~(1<<num); /* Set pin as input */
            }
            break;
    }
}

/* Function to set a specific pin on a specific port to logic high */
void setPin(unsigned char port, unsigned char num){
    switch(port){
        case 'a':
        case 'A':
            PORTA |= 1<<num; /* Set pin to logic high */
            break;
        case 'b':
        case 'B':
            PORTB |= 1<<num; /* Set pin to logic high */
            break;
        case 'c':
        case 'C':
            PORTC |= 1<<num; /* Set pin to logic high */
            break;
        case 'd':
        case 'D':
            PORTD |= 1<<num; /* Set pin to logic high */
            break;
    }
}

/* Function to clear a specific pin on a specific port (set to logic low) */
void clearPin(unsigned char port, unsigned char num){
    switch(port){
        case 'a':
        case 'A':
            PORTA &= ~(1<<num); /* Set pin to logic low */
            break;
        case 'b':
        case 'B':
            PORTB &= ~(1<<num); /* Set pin to logic low */
            break;
        case 'c':
        case 'C':
            PORTC &= ~(1<<num); /* Set pin to logic low */
            break;
        case 'd':
        case 'D':
            PORTD &= ~(1<<num); /* Set pin to logic low */
            break;
    }
}



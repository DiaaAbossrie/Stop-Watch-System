/*
 * externalInterrupts.c
 *
 * Created on: Sep 13, 2023
 * Author: Diaa Abossrie
 */
#include "commonMacros.h"
#include "externalInterrupts.h" /* Include External Interrupts header file */
#include <avr/io.h> /* Include AVR I/O header file */

/* Function to initialize external interrupt 0 with specified mode (rising/falling edge) */
void int0_init(unsigned char mode){
    switch (mode){
        case 'r':
        case 'R':
            /* Set INT0 to trigger on rising edge */
            SET_PIN(MCUCR,ISC01);
            SET_PIN(MCUCR,ISC00);
            break;
        case 'f':
        case 'F':
            /* Set INT0 to trigger on falling edge */
            SET_PIN(MCUCR,ISC01);
            CLEAR_PIN(MCUCR,ISC00);
            break;
    }
    SET_PIN(GICR,INT0);     /* Enable external interrupt 0 */
    SET_PIN(GIFR,INTF0);    /* Clear any pending INT0 interrupt flags */
}

/* Function to initialize external interrupt 1 with specified mode (rising/falling edge) */
void int1_init(unsigned char mode){
    switch (mode){
        case 'r':
        case 'R':
            /* Set INT1 to trigger on rising edge */
            SET_PIN(MCUCR,ISC10);
            SET_PIN(MCUCR,ISC11);
            break;
        case 'f':
        case 'F':
            /* Set INT1 to trigger on falling edge */
            SET_PIN(MCUCR,ISC11);
            CLEAR_PIN(MCUCR,ISC10);
            break;
    }
    SET_PIN(GICR,INT1);     /* Enable external interrupt 1 */
    SET_PIN(GIFR,INTF1);    /* Clear any pending INT1 interrupt flags */
}

/* Function to initialize external interrupt 2 with specified mode (rising/falling edge) */
void int2_init(unsigned char mode){
    switch (mode){
        case 'r':
        case 'R':
            /* Set INT2 to trigger on rising edge */
            SET_PIN(MCUCSR,ISC2);
            break;
        case 'f':
        case 'F':
            /* Set INT2 to trigger on falling edge */
            CLEAR_PIN(MCUCSR,ISC2);
            break;
    }
    SET_PIN(GICR,INT2);     /* Enable external interrupt 2 */
    SET_PIN(GIFR,INTF2);    /* Clear any pending INT2 interrupt flags */
}

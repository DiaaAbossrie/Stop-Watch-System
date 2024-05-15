/*
 * main.c
 *
 *  Created on: Sep 12, 2023
 *      Author: Diaa Abossrie
 */

/* Include necessary libraries */
#include <util/delay.h>
#include <avr/interrupt.h>
#include "commonMacros.h"
#include "gpio.h"           /* Include GPIO header file */
#include "timer1.h"         /* Include Timer1 header file */
#include "externalInterrupts.h" /* Include External Interrupts header file */

volatile unsigned long seconds = 0; /* Variable to keep track of elapsed seconds */

ISR(TIMER1_COMPA_vect){ /* Timer1 Compare Match A interrupt service routine */
    if(seconds < 359999){ /* Check if seconds haven't reached the max value */
        seconds++;
    } else {
        seconds = 0; /* Reset seconds to 0 if it reaches the max value */
    }
}

ISR(INT0_vect){ /* External Interrupt 0 service routine */
    seconds = 0; /* Reset seconds when triggered */
}

ISR(INT1_vect){ /* External Interrupt 1 service routine */
    timer1_clk_stop(); /* Stop Timer1 when triggered */
}

ISR(INT2_vect){ /* External Interrupt 2 service routine */
    timer1_clk_continue(); /* Continue Timer1 when triggered */
}

void main(void){
	unsigned long i_hours = 0, i_minutes = 0, i_seconds = 0;
    /* Set the first 4 pins in port C as output */
    DDRC |= 0x0F;
    /* Set the initial value of the first 4 pins in Port C to low */
    PORTC &= 0xF0;
    /* Set the first 6 pins in port A as output */
    DDRA |= 0x7F;
    /* Set the initial value of the first 6 pins in port A to low */
    PORTA &= 0x80;

    directPin('D', 2, 0);
    directPin('D', 3, 0);
    directPin('B', 2, 0);

    setPin('D', 2); /* Enable internal pull-up resistor on PD2 */
    setPin('B', 2); /* Enable internal pull-up resistor on PB2 */
    /* Disable pull-up disable */
    CLEAR_PIN(SFIOR,PUD);

    /* Enable the global interrupt bit (i-bit) */
    SET_PIN(SREG,7);

    int0_init('f'); /* Initialize external interrupt 0 (falling edge trigger) */
    int1_init('r'); /* Initialize external interrupt 1 (rising edge trigger) */
    int2_init('f'); /* Initialize external interrupt 2 (falling edge trigger) */

    timer1A_CTC_init(15625); /* Enable Timer1 in CTC mode */


    for(;;){ /* Infinite loop */
        i_hours = seconds / 3600; /* Calculate hours */
        i_minutes = (seconds % 3600) / 60; /* Calculate minutes */
        i_seconds = seconds % 60; /* Calculate seconds */
    	stopwatchDisplay(i_seconds,i_minutes,i_hours); /* Display time on stopwatch */
    }
}

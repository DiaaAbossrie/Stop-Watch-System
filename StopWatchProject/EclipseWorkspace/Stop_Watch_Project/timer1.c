/*
 * timer1.c
 *
 *  Created on: Sep 12, 2023
 *      Author: Diaa Abossrie
 */
#include "commonMacros.h"
#include "ATmega32_Reg.h"
//#include <avr/io.h>
#include "timer1.h" /* Include Timer1 header file */

/* Function to initialize Timer1 in CTC mode */
void timer1A_CTC_init(unsigned short compare_value){
	/*TCNT1 = 0;
	OCR1A = compare_value;*/
    TCNT1_REG.TwoBytes = 0; /* Reset Timer1 counter */
    OCR1A_REG.TwoBytes = compare_value; /* Set the value to compare with the counter for a specified interval */
    //SET_PIN(TIMSK,OCIE1A); /* Enable Timer1 Output Compare A (OCIE1A) interrupt */
    TIMSK_REG.Bits.OCIE1A = 1;
    //SET_PIN(TIFR,OCF1A); /* Clear any pending Timer1 Output Compare A (OCF1A) interrupt flag */
    TIFR_REG.Bits.OCFIA = 1;
    //SET_PIN(TCCR1A,FOC1A); /* Set Force Output Compare (FOC) bit for channel A (not relevant in CTC mode) */
    TCCR1A_REG.Bits.FOC1A = 1;

    /* Set Waveform Generation Mode to CTC, set pre-scaler to divide clock by 64 */
    //SET_PIN(TCCR1B,CS10);
    //SET_PIN(TCCR1B,CS11);
    //SET_PIN(TCCR1B,WGM12);

    TCCR1B_REG.Bits.CS10 = 1;
    TCCR1B_REG.Bits.CS11 = 1;
    TCCR1B_REG.Bits.WGM12 = 1;
}

/* Function to stop Timer1 clock */
void timer1_clk_stop(void){
    /* Clear bits for the clock source, effectively stopping the timer */
    //CLEAR_PIN(TCCR1B,CS10);
    //CLEAR_PIN(TCCR1B,CS11);
    //CLEAR_PIN(TCCR1B,CS12);
	TCCR1B_REG.Bits.CS10 = 0;
	TCCR1B_REG.Bits.CS11 = 0;
	TCCR1B_REG.Bits.CS12 = 0;
}

/* Function to continue Timer1 clock */
void timer1_clk_continue(void){
    /* Set prescaler bits to start the timer again */
    //SET_PIN(TCCR1B,CS10);
    //SET_PIN(TCCR1B,CS11);
	TCCR1B_REG.Bits.CS10 = 1;
	TCCR1B_REG.Bits.CS11 = 1;
}

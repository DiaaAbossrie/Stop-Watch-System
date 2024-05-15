/*
 * timer1.h
 *
 * Created on: Sep 12, 2023
 * Author: Diaa Abossrie
 */

#ifndef TIMER1_H_
#define TIMER1_H_

/* Function to initialize Timer1 in CTC mode */
void timer1A_CTC_init(unsigned short compare_value);

/* Function to stop Timer1 clock */
void timer1_clk_stop(void);

/* Function to continue Timer1 clock */
void timer1_clk_continue(void);

#endif /* TIMER1_H_ */

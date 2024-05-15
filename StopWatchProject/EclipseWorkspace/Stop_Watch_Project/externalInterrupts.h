/*
 * externalInterrupts.h
 *
 *  Created on: Sep 13, 2023
 *      Author: Diaa Abossrie
 */

#ifndef EXTERNALINTERRUPTS_H_
#define EXTERNALINTERRUPTS_H_

/* Function to initialize external interrupt 0 with specified mode (rising/falling edge) */
void int0_init(unsigned char mode);

/* Function to initialize external interrupt 1 with specified mode (rising/falling edge) */
void int1_init(unsigned char mode);

/* Function to initialize external interrupt 2 with specified mode (rising/falling edge) */
void int2_init(unsigned char mode);

#endif /* EXTERNALINTERRUPTS_H_ */

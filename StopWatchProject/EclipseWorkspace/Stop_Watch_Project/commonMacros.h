/*
 * commonMacros.h
 *
 * Created on: Sep 12, 2023
 * Author: Diaa Abossrie
 */

#ifndef COMMONMACROS_H_
#define COMMONMACROS_H_

/*
 * SET_PIN macro sets a specific bit in a register.
 * It takes two arguments: REG (the register) and PIN_NUM (the pin number).
 * It uses bitwise OR to set the desired bit.
 */
#define SET_PIN(REG, PIN_NUM) ((REG) |= (1<<(PIN_NUM)))

/*
 * CLEAR_PIN macro clears a specific bit in a register.
 * It takes two arguments: REG (the register) and PIN_NUM (the pin number).
 * It uses bitwise AND with negation to clear the desired bit.
 */
#define CLEAR_PIN(REG, PIN_NUM) ((REG) &= ~(1<<(PIN_NUM)))

#endif /* COMMONMACROS_H_ */

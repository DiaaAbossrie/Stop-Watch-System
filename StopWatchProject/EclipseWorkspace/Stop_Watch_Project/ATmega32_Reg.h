/*
 *  File Name: ATmega32_Reg.h
 *  Description: Registers for ATmega32 MCU
 *  Author: Diaa Abossrie
 */

#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

#include "std_types.h"

/* GPIO */
typedef union{
	uint8 Byte;
	struct {
		uint8 Bit0 : 1;
		uint8 Bit1 : 1;
		uint8 Bit2 : 1;
		uint8 Bit3 : 1;
		uint8 Bit4 : 1;
		uint8 Bit5 : 1;
		uint8 Bit6 : 1;
		uint8 Bit7 : 1;
	}Bits;
}GPIO_type;

/* TIMERS */
typedef union{
	uint8 Byte;
	struct {
		uint8 CS00 : 1;
		uint8 CS01 : 1;
		uint8 CS02 : 1;
		uint8 WGM01 : 1;
		uint8 COM00 : 1;
		uint8 COM01 : 1;
		uint8 WGM00 : 1;
		uint8 FOC0 : 1;
	}Bits;
}Timer0_TCCR0_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 TOIE0 : 1;
		uint8 OCIE0 : 1;
		uint8 TOIE1 : 1;
		uint8 OCIE1B : 1;
		uint8 OCIE1A : 1;
		uint8 TICIE1 : 1;
		uint8 TOIE2 : 1;
		uint8 OCIE2 : 1;
	}Bits;
}TIMERS_TIMSK_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 TOV0 : 1;
		uint8 OCF0 : 1;
		uint8 TOV1 : 1;
		uint8 OCF1B : 1;
		uint8 OCFIA : 1;
		uint8 ICF1 : 1;
		uint8 TOV2 : 1;
		uint8 OCF2 : 1;
	}Bits;
}TIMERS_TIFR_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 WGM10 : 1;
		uint8 WGM11 : 1;
		uint8 FOC1B : 1;
		uint8 FOC1A : 1;
		uint8 COM1B0 : 1;
		uint8 COM1B1 : 1;
		uint8 COM1A0 : 1;
		uint8 COM1A1 : 1;
	}Bits;
}TIMER1_TCCR1A_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 CS10 : 1;
		uint8 CS11 : 1;
		uint8 CS12 : 1;
		uint8 WGM12 : 1;
		uint8 WGM13 : 1;
		uint8  : 1;
		uint8 ICES1 : 1;
		uint8 ICNC1 : 1;
	}Bits;
}TIMER1_TCCR1B_type;

typedef union{
	uint16 TwoBytes;
	struct {
		uint16 TCNT1L : 8;
		uint16 TCNT1H : 8;
	}Bytes;
}TIMER1_TCNT1_type;

typedef union{
	uint16 TwoBytes;
	struct {
		uint16 OCR1AL : 8;
		uint16 OCR1AH : 8;
	}Bytes;
}TIMER1_OCR1A_type;

typedef union{
	uint16 TwoBytes;
	struct {
		uint16 OCR1BL : 8;
		uint16 OCR1BH : 8;
	}Bytes;
}TIMER1_OCR1B_type;

typedef union{
	uint16 TwoBytes;
	struct {
		uint16 ICR1L : 8;
		uint16 ICR1H : 8;
	}Bytes;
}TIMER1_ICR1_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 CS20 : 1;
		uint8 CS21 : 1;
		uint8 CS22 : 1;
		uint8 WGM21 : 1;
		uint8 COM20 : 1;
		uint8 COM21 : 1;
		uint8 WGM20 : 1;
		uint8 FOC2 : 1;
	}Bits;
}TIMER2_TCCR2_type;

typedef union{
	uint8 Byte;
	struct {
		uint8 TCR2UB : 1;
		uint8 OCR2UB : 1;
		uint8 TCN2UB : 1;
		uint8 AS2 : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
	}Bits;
}TIMER2_ASSR_type;

/* SEPCIAL FUNCTION IO REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 PSR10 : 1;
		uint8 PSR2 : 1;
		uint8 PUD : 1;
		uint8 ACME : 1;
		uint8  : 1;
		uint8 ADTS0 : 1;
		uint8 ADTS1 : 1;
		uint8 ADTS2 : 1;
	}Bits;
}SFIOR_type;

/* WATCHDOG TIMER CONTROL REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 WDP0 : 1;
		uint8 WDP1 : 1;
		uint8 WDP2 : 1;
		uint8 WDE : 1;
		uint8 WDTOE : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
	}Bits;
}WDTCR_type;

/* MCU CONTROL REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 ISC00 : 1;
		uint8 ISC01 : 1;
		uint8 ISC10 : 1;
		uint8 ISC11 : 1;
		uint8 SM0 : 1;
		uint8 SM1 : 1;
		uint8 SM2 : 1;
		uint8 SE : 1;
	}Bits;
}MCUCR_type;

/* MCU CONTROL AND STATUS REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 PORF : 1;
		uint8 EXTRF : 1;
		uint8 BORF : 1;
		uint8 WDRF : 1;
		uint8 JTRF : 1;
		uint8  : 1;
		uint8 ISC2 : 1;
		uint8 JTD : 1;
	}Bits;
}MCUCSR_type;

/* GENERAL INTERRUPT CONTROL REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 IVCE : 1;
		uint8 IVSEL : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
		uint8 INT2 : 1;
		uint8 INT0 : 1;
		uint8 INT1 : 1;
	}Bits;
}GICR_type;

/* GENERAL INTERRUPT FLAG */
typedef union{
	uint8 Byte;
	struct {
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
		uint8  : 1;
		uint8 INTF2 : 1;
		uint8 INTF1: 1;
		uint8 INTF0 : 1;
	}Bits;
}GIFR_type;

/* STATUS REGISTER */
typedef union{
	uint8 Byte;
	struct {
		uint8 C_bit : 1;
		uint8 Z_bit : 1;
		uint8 N_bit : 1;
		uint8 V_bit : 1;
		uint8 S_bit : 1;
		uint8 H_bit : 1;
		uint8 T_bit : 1;
		uint8 I_bit : 1;
	}Bits;
}SREG_type;

/*-------------------------------------------*/

#define SREG_REG (*(volatile SREG_type *) 0x5F)
#define OCR0_REG (*(volatile uint8 *) 0x5E)
#define GICR_REG (*(volatile GICR_type *) 0x5B)
#define GIFR_REG (*(volatile GIFR_type *) 0x5A)
#define TIMSK_REG (*(volatile TIMERS_TIMSK_type *) 0x59)
#define TIFR_REG (*(volatile TIMERS_TIFR_type *) 0x58)
#define MCUCR_REG (*(volatile MCUCR_type *) 0x55)
#define MCUCSR_REG (*(volatile MCUCSR_type *) 0x54)
#define TCCR0_REG (*(volatile TIMER0_TCCR0_type *) 0x53)
#define TCNT0_REG (*(volatile TIMER0_TCNT0_type *) 0x52)
#define SFIOR_REG (*(volatile SFIOR_type *) 0x50)
#define TCCR1A_REG (*(volatile TIMER1_TCCR1A_type *) 0x4F)
#define TCCR1B_REG (*(volatile TIMER1_TCCR1B_type *) 0x4E)
#define TCNT1_REG (*(volatile TIMER1_TCNT1_type *) 0x4C)
#define OCR1A_REG (*(volatile TIMER1_OCR1A_type *) 0x4A)
#define OCR1B_REG (*(volatile TIMER1_OCR1B_type *) 0x48)
#define ICR1_REG (*(volatile TIMER1_ICR1_type *) 0x46)
#define TCCR2_REG (*(volatile TIMER2_TCCR2_type *) 0x45)
#define TCNT2_REG (*(volatile uint8 *) 0x44)
#define OCR2_REG (*(volatile uint8 *) 0x43)
#define ASSR_REG (*(volatile TIMER2_ASSR_type *) 0x42)
#define WDTCR_REG (*(volatile WDTCR_type *) 0x41)
#define PORTA_REG (*(volatile GPIO_type *) 0x3B)
#define DDRA_REG (*(volatile GPIO_type *) 0x3A)
#define PINA_REG (*(volatile  GPIO_type *) 0x39)
#define PORTB_REG (*(volatile GPIO_type *) 0x38)
#define DDRB_REG (*(volatile GPIO_type *) 0x37)
#define PINB_REG (*(volatile  GPIO_type *) 0x36)
#define PORTC_REG (*(volatile GPIO_type *) 0x35)
#define DDRC_REG (*(volatile GPIO_type *) 0x34)
#define PINC_REG (*(volatile  GPIO_type *) 0x33)
#define PORTD_REG (*(volatile GPIO_type *) 0x32)
#define DDRD_REG (*(volatile GPIO_type *) 0x31)
#define PIND_REG (*(volatile  GPIO_type *) 0x30)

#endif /* ATMEGA32_REG_H_ */

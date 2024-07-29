/*
 * 2LED_ALTERNET_BLINK.c
 * Attiny10/13/25/45/85
 * Created: 09/06/2023 20:35:17
 * Author : kailash
 */ 

//Attiny10/13/25/45/85


#define F_CPU 1000000UL					// 1MHz

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB = (1 << PB0) | (1 << PB2);		//Led on PB0 & PB2
	PORTB = (1 << PB0);
	while(1) {
		PORTB ^= (1 << PB0) | (1 << PB2);
		_delay_ms(500);
	}
}

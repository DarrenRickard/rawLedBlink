#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// set PORTB7 as an output
	
	DDRB = DDRB | (1 << DDB7);

	// loop
	
	while(1)
	{
		PORTB = PORTB | (1 << PORTB7);
		_delay_ms(1000);
		PORTB = PORTB & ~(1 << PORTB7);
		_delay_ms(1000);
        PORTB = PORTB | (1 << PORTB7);
		_delay_ms(300);
		PORTB = PORTB & ~(1 << PORTB7);
		_delay_ms(300);
	}
}
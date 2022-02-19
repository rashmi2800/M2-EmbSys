#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{                       // led on port c pin 5 ATMEGA8A
    DDRC |= 1 << PINC5; // define the pin as output
    while (1)
    {
        _delay_ms(1000);     // startig delay
        PORTC ^= 1 << PINC5; // Toggle the output
        _delay_ms(1000);
    }
    return 0;
}
#include <avr/io.h>
#include <avr/pgmspace.h>

#include <stdint.h>


void main(void) {
    uint64_t foo;

    PORTA = 0xFF;

    for(foo = 0;foo < (int)1E5;++foo);

    PORTA = (uint8_t) 0xFF & foo;
}

#include <msp430g2553.h>




int main (void) {

// Watchdog setup
WDTCTL = WDTPW + WDTHOLD; // stop using the watchdog

// LED initial setup
P1DIR |= BIT0 + BIT6; // ENABLE GREEN AND RED LED

// Button setup
P1DIR &= ~BIT3; // button is an input
P1OUT |= BIT3; // pull-up resistor
P1REN |= BIT3; // resistor enabled

while (1) {

if (P1IN & BIT3) {
P1OUT &= ~BIT6; // Green off
P1OUT |= BIT0; // Red on
} else {
P1OUT &= ~BIT0; // Red off
P1OUT |= BIT6; // Green on
}

}
return;
}

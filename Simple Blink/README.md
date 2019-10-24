# Simple Blink
The goal of this part of the lab was to blink an LED at specified rate. The specified rate should be at 50% of the duty cycle so it speds half of its time on and half of its time off. This was done by utilizing an infite loop and toggling the bit controling the LED with an xor operation and a delay.

## Processors Used
* MSP430G2553
* MSP430FR6989

## Changes In Code For Different Processors
The G2553 and the FR6989 have very similar code and are done with the same process, however they have different pin assignments which must be changed whens translating code from one board to the other. The other difference is that for the FR6989 you must disable the power-on default high impedence mode. 

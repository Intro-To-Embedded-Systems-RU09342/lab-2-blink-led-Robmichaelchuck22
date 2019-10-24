# Multiple Blink
The objective of this lab was to now make two LEDs blink but at different rates. This was accomplished by using two if statement nested inside of an infinite loop with a integer counter. The first if statement would execute if the integer being counted equaled zero after being mod by three and this contained the toggle for the first LED. The second if statement was the same except it was being mod by four and contained the toggle for the second LED.


# Processors Used
* MSP430G2553
* MSP430FR6989

##Changes In Code for Different Boards
The G2553 and the FR6989 have very similar code and are done with the same process, however they have different pin assignments which must be changed whens translating code from one board to the other. The other difference is that for the FR6989 you must disable the power-on default high impedence mode.

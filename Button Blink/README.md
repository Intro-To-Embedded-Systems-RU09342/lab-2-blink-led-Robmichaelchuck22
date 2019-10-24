# Button Blink
The objective of this section of the lab was to use the button as a switch to changed the state of the LED. Upon pressing the button the LED would go from off to flasing at a desired rate or from off to on with no toggle. This is done by using an while loop that waits for the button to be pressed. When the pressed the LED is toggled or set on.

# Processors Used
* MSP430G2553
* MSP430FR6989

# Changes in Code for Different Processors
The G2553 and the FR6989 have very similar code and are done with similar processes, however they have different pin assignments which must be changed whens translating code from one board to the other. The other difference is that for the FR6989 you must disable the power-on default high impedence mode. Also for this section of the Lab the G2553 sets both LED's on upon the button press and the FR6989 toggles one LED upon the button press.

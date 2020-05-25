#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;

// Initialisation of SW 1
	P1DIR &= ~BIT2;
	P1REN = BIT2;
	P1OUT = BIT2;

// Initialisation of SW 2
	P2DIR &= ~BIT6;
	P2REN = BIT6;
	P2OUT = BIT6;

// Initialisation and LOW signal of LEDs
	P4DIR |= BIT0;
	P4OUT &= ~BIT0;
	P1DIR |= BIT0;
	P1OUT &= ~BIT0;
	
// Button pressed?
	while (1)
	{
	    if (!(P1IN & BIT2))
	    {
	        P1OUT ^= BIT0;
	    }
	    else
	    {
	        P1OUT &= ~BIT0;
	    }
	    if(!(P2IN & BIT6))
	    {
	        P4OUT ^= BIT0;
	    }
	    else
	    {
	        P4OUT &= ~BIT0;
	    }
	}
//	return 0;
}

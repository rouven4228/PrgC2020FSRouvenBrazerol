// Module: bit operations supporting the handling of register manipulations on microcontrollers


//this module's header
#include "bitOperation.h"


void SetBitNof8( unsigned char* target, unsigned char bitNumber)
{
	*target = (*target | (1 << bitNumber ));
}


void clearBitNof8(unsigned char* target, unsigned char bitNumber )
{
	*target = (*target &~(1 << bitNumber));
}

void FlipBitNof8( unsigned char* target, unsigned char bitNumber )
{
	*target = (*target ^ (1 << bitNumber));
}



// returns 1 if bit is set, 0 otherwise
unsigned char CheckBitNof8( unsigned char target, unsigned char bitNumber )
{
	return( target & (1 << bitNumber )) >> bitNumber;
	/*
	unsigned char BitIsSet = 0;
	if( ( target & ( 1 << bitNumber) ) >> bitNumber)
	{
		BitIsSet = 1;
	}
	else
	{
		BitIsSet = 0;
	}
	return BitIsSet;
	*/
}


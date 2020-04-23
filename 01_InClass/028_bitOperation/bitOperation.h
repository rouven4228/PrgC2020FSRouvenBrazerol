// Module: bit operations supporting the handling
// of register manipulations on microcontrollers


/* 
SetBitN( target, bitNumber )
ClearBitN( target, bitNumber )
FlipBitN( target, bitnumber )
unsigned char CheckBitN( target, bitNumber)
*/


#ifndef _H_BIT_OPERATION_H
#define _H_BIT_OPERATION_H

// function prototypes
void SetBitNof8( unsigned char* target, unsigned char bitNumber );
void clearBitNof8(unsigned char* target, unsigned char bitNumber );
void FlipBitNof8( unsigned char* target, unsigned char bitNumber );
unsigned char CheckBitNof8( unsigned char target, unsigned char bitNumber );

#endif // _H_BIT_OPERATION_H

// Exercise 2 from chapter 12
// This program determines wether the computer it is run at performs an arithmetic or logical right shift.

#include<stdio.h>

int main( void )
{
    int num = -1;

    num >>= 1;

    if( num == -1 )
	printf( "This system performs an arithmetic right shift.\n" );

    else
	printf( "This system performs a logical right shift.\n" );

    return 0;
}

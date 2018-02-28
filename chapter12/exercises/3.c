// Exercise 3 from chapter 12
// This function determines the number of bits used to store an integer value at the system it is executed.

#include<stdio.h>

int int_size( void )
{
    unsigned int num = ~0;
    int size = 0;

    while( num != 0 )
    {
	size++;
	num >>= 1;
    }

    return size;
}

int main( void )
{
    printf( "%i\n", int_size() );

    return 0;
}

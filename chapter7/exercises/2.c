// Exercise 2 from chapter 7
// This program initializes an array and prints its elements.

#include<stdio.h>

int main( void )
{

    int values[10];
    int index;

    for( index = 0; index < 10; ++index )
    {

	values[index] = 0;

    }

    for( index = 0; index < 10; ++index )
	printf( "values[%i] = %i\n", index, values[index] );

    return 0;

}

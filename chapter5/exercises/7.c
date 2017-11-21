// Exercise 7 from chapter 5
// This program gets a value in dollars and cents from the user and displays it.

#include<stdio.h>

int main( void )
{

    int dollars, cents, count;

    for( count = 1; count <= 10; ++count )
    {

	printf( "Enter dollars: " );
	scanf( "%i", &dollars );
	printf( "Enter cents: " );
	scanf( "%i", &cents );
	printf( "$%i.%.2i\n\n", dollars, cents );//%.2i makes the cents be expressed with at least two numbers

    }

    return 0;

}

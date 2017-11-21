// Exercise 8 from chapter 5
// This programs calculates and displays n triangular numbers, with n received from the user.

#include<stdio.h>

int main( void )
{

    int n, number, triangularNumber, counter;
    int iterations;

    printf( "How many triangular numbers do you want to calculate?\n" );
    scanf( "%i", &iterations );

    for( counter = 1; counter <= iterations; ++counter )
    {

	printf( "What triangular number do you want? " );
	scanf( "%i", &number );

	triangularNumber = 0;

	for( n = 1; n <= number; ++n )
	    triangularNumber += n;

	printf( "Triangular number %i is %i\n\n", number, triangularNumber );

    }

    return 0;

}

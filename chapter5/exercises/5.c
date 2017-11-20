// Exercise 5 from chapter 5
// This program generates and displays the first 10 powers of 2.

#include<stdio.h>

int main( void )
{

    int n;
    int two_to_the_n;

    printf( "TABLE OF POWERS OF TWO\n\n" );
    printf( " n    2 to the n\n");
    printf( "--- --------------\n" );

    two_to_the_n = 1;

    for( n = 0; n <= 10; ++n )
    {

	printf( "%2i      %4i\n", n, two_to_the_n );
	two_to_the_n*=2;

    }

    return 0;
    
}

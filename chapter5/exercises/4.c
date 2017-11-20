// Exercise 4 from chapter 5
// This program generates and displays the first 10 factorials.

#include<stdio.h>

int main( void )
{

    int factorial = 1;

    printf( " N      F\n" );
    printf( "------------\n" );
    
    for( int index = 1; index <= 10; index++ )
    {

	factorial = 1;
	
	for( int n = index; n > 1; n-- )
	{

	    factorial = factorial * n;

	}

	printf( "%2i | %7i\n", index, factorial );

    }

    return 0;

}

// Exercise 3 from chapter 5
// This program generates and displays every fifth triangular number between 5 and 50.

#include<stdio.h>

int main( void )
{

    int n;

    printf( " N    T\n" );
    printf( "---------\n" );

    for( n = 5; n <= 50; n = n + 5 )
    {

	printf( "%2i | %4i\n", n, ( n * ( n + 1 ) / 2 ) );

    }

    return 0;
    
}

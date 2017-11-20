// Exercise 2 from chapter 5
// This program generates and displays a table of values e and n², with n ranging from 1 to 10.

#include<stdio.h>

int main( void )
{

    int n;

    printf( " N    N²\n" );
    printf( "--------\n" );

    for( n = 1; n <= 10; n++ )
    {

	printf( "%2i | %3i\n", n, ( n * n ) );

    }

    return 0;

}




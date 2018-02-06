// Exercise 2 from chapter 8
/*
This program is a rewrite of program 5.5. It uses a separate function to calculate triangular number instead of
calculating them on the main function.
*/

#include<stdio.h>

int calculateTriangularNumber( int n )
{

    int i, triangularNumber = 0;

    for( i = 1; i <= n; ++i )
	triangularNumber += i;

    return triangularNumber;

}

int main( void )
{

    int number;
    int calculateTriangularNumber( int n );

    printf( "What triangular number do you want? " );
    scanf( "%i", &number );

    printf( "Triangular number %i is %i\n\n", number, calculateTriangularNumber( number ) );

    return 0;

}

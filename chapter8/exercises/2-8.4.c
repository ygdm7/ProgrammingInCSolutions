// Exercise 2 from chapter 8
// This program is a rewrite of program 8.4 that returns a triangular number on calculateTriangularNumber function.

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

    calculateTriangularNumber( 10 );
    calculateTriangularNumber( 20 );
    calculateTriangularNumber( 50 );

    return 0;

}

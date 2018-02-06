// Exercise 6 from chapter 8
// This program is a rewrite of program 8.8. It uses double precision values.

#include<stdio.h>

double absoluteValue( double x )
{

    if( x < 0 )
	x = -x;

    return x;

}

// Function to compute the square root of a number

double squareRoot( double x )
{

    const double epsilon = .00001;
    double guess = 1.0;

    while( absoluteValue( guess * guess - x ) >= epsilon )
	guess = ( x / guess + guess ) / 2.0;

    return guess;

}

int main( void )
{

    printf( "squareRoot( 2.0 ) = %f\n", squareRoot( 2.0 ) );
    printf( "squareRoot( 144.0 ) = %f\n", squareRoot( 144.0 ) );
    printf( "squareRoot( 17.5 ) = %f\n", squareRoot( 17.5 ) );

    return 0;

}

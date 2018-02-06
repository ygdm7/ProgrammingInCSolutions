// Exercise 5 from chapter 8
// This program is a rewrite of program 8.8. It uses a ratio as criteria for termination of the while loop.

#include<stdio.h>

float absoluteValue( float x )
{

    if( x < 0 )
	x = -x;

    return x;

}

// Function to compute the square root of a number

float squareRoot( float x )
{

    const float epsilon = .00001;
    float guess = 1.0;
    double ratio = 0;

    while( absoluteValue( ratio - 1 ) >= epsilon )
    {

	guess = ( x / guess + guess ) / 2.0;
	ratio = ( guess * guess ) / x;

    }

    return guess;

}

int main( void )
{

    printf( "squareRoot( 2.0 ) = %f\n", squareRoot( 2.0 ) );
    printf( "squareRoot( 144.0 ) = %f\n", squareRoot( 144.0 ) );
    printf( "squareRoot( 17.5 ) = %f\n", squareRoot( 17.5 ) );

    return 0;

}

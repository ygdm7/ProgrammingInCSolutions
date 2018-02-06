// Exercise 8 from chapter 8
// This program solves quadratic equations with discriminants equal or bigger than zero.

#include<stdio.h>

double absoluteValue( double x )
{

    if( x < 0 )
	x = -x;

    return x;

}

double squareRoot( double x )
{

    const double epsilon = .00001;
    double guess = 1.0;
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

    double a, b, c, disc, x1, x2;
    double squareRoot( double x );

    printf( "Enter the values of a, b and c, separated by blank spaces:\n" );
    scanf( "%lg %lg %lg", &a, &b, &c );

    disc = b * b - 4 * a * c;

    if( disc < 0 )
    {
	
	printf( "The roots of this equation are imaginary numbers. Calculating them is not supported.\n" );
	return 1;

    }

    else
    {

	x1 = ( -b + squareRoot( disc ) ) / ( 2 * a );
	x2 = ( -b - squareRoot( disc ) ) / ( 2 * a );

    }

    printf( "The roots are %lg and %lg.\n", x1, x2 );

    return 0;

}

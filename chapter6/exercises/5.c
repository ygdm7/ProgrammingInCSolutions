// Exercise 5 from chapter 6
// This program reverse the digits of a number

#include<stdio.h>

int main( void )
{

    int number, right_digit;
    _Bool isNegative = 0;

    printf( "Enter your number.\n" );
    scanf( "%i", &number );

    if( number < 0 )
    {

	isNegative = 1;
	number = number * ( -1 );

    }

    do
    {

	right_digit = number % 10;
	printf( "%i", right_digit );
	number = number / 10;

    }
    while( number != 0 );

    if( isNegative )
    {

	printf( "-\n" );

    }

    else
    {

	printf( "\n" );

    }

    return 0;

}

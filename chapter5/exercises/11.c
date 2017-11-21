// Exercise 11 from chapter 5
// This program sums the digits of an integer number and shows the result at the terminal.

#include<stdio.h>

int main( void )
{

    int number;
    int sum;

    sum = 0;

    printf( "Enter a number to sum its digits:\n" );
    scanf( "%i", &number );

    while( number > 0 )
    {

	sum = sum + number % 10;
	number = number / 10;

    }

    printf( "The sum is %i.\n", sum );

}

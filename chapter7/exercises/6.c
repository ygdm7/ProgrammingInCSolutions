// Exercise 6 from chapter 7
// Program to generate the first 15 Fibonacci numbers.

#include<stdio.h>

int main( void )
{

    int num1 = 0;
    int num2 = 1;
    int num3;

    printf( "0\n1\n" );

    for( int i = 2; i < 15; ++i )
    {

	num3 = num1 + num2;

	printf( "%i\n", num3 );

	num1 = num2;
	num2 = num3;

    }

    return 0;

}

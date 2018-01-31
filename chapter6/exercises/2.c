// Exercise 2 from chapter 6
// This program receives two integers from the user and test if the first is evenly divisible by the second.

#include<stdio.h>

int main( void )
{

    int num1, num2;

    printf( "Enter two integer numbers separated by a blank space:\n" );
    scanf( "%i %i", &num1, &num2 );

    if( !( num1 % num2 ) )
    {

	printf( "%i is evenly divisible by %i.\n", num1, num2 );

    }

    else
    {

	printf( "%i is not evenly divisible by %i.\n", num1, num2 );

    }

    return 0;

}

// Exercise 3 from chapter 6
// This program receives two integers from the user and shows the result of dividing the first by the second.

#include<stdio.h>

int main( void )
{

    int num1, num2;

    printf( "Enter two integer numbers separated by a blank space:\n" );
    scanf( "%i %i", &num1, &num2 );

    if( num2 == 0 )
    {

	printf( "Division by zero not supported.\n" );

    }

    else
    {

	printf( "%i / %i = %.3f .\n", num1, num2, ( (double)num1 / num2 ) );

    }

    return 0;
    
}

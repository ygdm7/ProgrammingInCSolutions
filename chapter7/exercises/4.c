// Exercise 4 from chapter 7
// This program calculate the average of 10 floating point numbers.

#include<stdio.h>

int main( void )
{

    double numArray[10];
    double sum = 0;
    int i;

    for( i = 0; i < 10; i++ )
    {

	printf( "Enter a number(%i of 10):\n", i );
	scanf( "%lg", &numArray[i] );

    }

    for( i = 0; i < 10; i++ )
    {

	sum += numArray[i];

    }

    printf( "The average of the ten numbers is %lg\n", ( ( double )sum / 10 ) );

    return 0;

}

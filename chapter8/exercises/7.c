// Exercise 7 from chapter 8
// This program raises an integer no a positive integer power.

#include<stdio.h>

long int x_to_the_n( int x, int n )
{

    long int result = x;
    
    for( int i = 1; i < n; i++ )
	result *= x;

    return result;

}

int main( void )
{

    int x, n;
    long int x_to_the_n( int x, int n );

    printf( "Enter the number x and the power n separated by a blank space:\n" );
    scanf( "%i %i", &x, &n );

    printf( "%i^%i = %li\n", x, n, x_to_the_n( x, n ) );

    return 0;

}

// Exercise 6 from chapter 4
// This program evaluates a polynomial and shows the result at the terminal.

#include<stdio.h>

int main( void )
{

  double x = 2.55;
  double y = 0.0;

  y = 3 * ( x * x * x ) - 5 * ( x * x ) + 6;

  printf( "y = %g.\n", y );

  return 0;

}

// Exercise 7 from chapter 4
// This program evaluates an expression and shows the result at the terminal in exponential form/scientific notation.

#include<stdio.h>

int main( void )
{

  double x = 0;

  x = ( 3.31e8 * 2.01e7 ) / ( 7.16e6 + 2.01e8 );

  printf( "The result is %e.\n", x );

  return 0;

}

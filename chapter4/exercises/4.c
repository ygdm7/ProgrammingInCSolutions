// Exercise 4 from chapter 4
// This program converts 27°F to °C and shows the result at the terminal.

#include<stdio.h>

int main( void )
{

  double C = 0.0;// variable that stores the temperature in °C
  double F = 27.0;// variable that stores the temperature in °F

  C = ( F - 32.0 ) / 1.8;// formula to convert °F to °C

  printf( "27°F is equivalent to %g°C.\n", C );

  return 0;

}

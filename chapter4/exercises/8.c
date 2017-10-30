// Exercise 8 from chapter 4
// This program finds the next largest even multiple of three values and shows the result at the terminal.

#include<stdio.h>

int main( void )
{

  int i1 = 365;
  double i2 = 12.258;
  int i3 = 996;
  int j1 = 7;
  int j2 = 23;
  int j3 = 4;
  int r1 = 0;
  int r2 = 0;
  int r3 = 0;

  r1 = i1 + j1 - i1 % j1;
  r2 = i2 + j2 - (int)i2 % j2;// type cast necessary for i2 because % operator only works with integer values
  r3 = i3 + j3 - i3 % j3;

  printf( "The next multiple for i = %i and j = %i is %i.\n", i1, j1, r1 );
  printf( "The next multiple for i = %g and j = %i is %i.\n", i2, j2, r2 );
  printf( "The next multiple for i = %i and j = %i is %i.\n", i3, j3, r3 );
  
  return 0;

}

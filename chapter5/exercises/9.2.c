// Exercise 9 from chapter 5
// This program is a rewrite of program 5.2, replacing for statements with while statements.
/* Program to calculate the 200th triangular number
   Introduction of the for statement
*/

#include<stdio.h>

int main( void )
{

  int n, triangularNumber;

  triangularNumber = 0;

  n = 1;

  while( n <= 200 )
  {

      triangularNumber = triangularNumber + n;
      n = n + 1;

  }

  printf( "The 200th triangular number is %i\n", triangularNumber );

  return 0;

}

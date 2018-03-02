// Exercise 3 from chapter 13
// This program defines and test a macro to find the minimum value between two numbers.

#define MIN(v1,v2) ( ( ( v1 ) > ( v2 ) ) ? ( v2 ) : ( v1 ) )

#include<stdio.h>

int main( void )
{
    int v1 = 0, v2 = 1;

    printf( "%i\n", MIN(v1,v2) );

    return 0;
}

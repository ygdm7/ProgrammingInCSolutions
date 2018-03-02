// Exercise 4 from chapter 13
// This program defines and test a macro to find the maximum value between three numbers.

#define MAX3(v1,v2,v3) ( ( ( ( v1 ) > ( v2 ) ) && ( ( v1 ) > ( v3 ) ) ) ? ( v1 ) : \
			 ( ( ( ( v2 ) > ( v1 ) ) && ( ( v2 ) > ( v3 ) ) ) ? ( v2 ) : ( v3 ) ) )

#include<stdio.h>

int main( void )
{
    int v1 = 1, v2 = 0, v3 = 58;

    printf( "%i\n", MAX3(v1,v2,v3) );

    return 0;
}

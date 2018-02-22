// Exercise 8 from chapter 11
// This function sorts an array of 3 integers into ascending order using pointers.

#include<stdio.h>

void sort3( int *a )
{
    int temp;

    if( *a > *( a + 2 ) ) // [0] > [2]
    {
	temp = *a;
	*a = *( a + 2 );
	*( a + 2 ) = temp;
    }    

    if( *( a + 1 ) > *( a + 2 ) ) // [1] > [2]
    {
	temp = *( a + 1 );
	*( a + 1 )  = *( a + 2 );
	*( a + 2 ) = temp;
    }    
    
    if( *a > *( a + 1 ) ) // [0] > [1]
    {
	temp = *a;
	*a = *( a + 1 );
	*( a + 1 ) = temp;
    }
}

int main( void )
{
    int a[] = { 1, 3, 2 };

    for( int i = 0; i < 3; i++ )
	printf( "%i\n", a[i] );

    sort3( a );

    for( int i = 0; i < 3; i++ )
	printf( "%i\n", a[i] );

    return 0;
}

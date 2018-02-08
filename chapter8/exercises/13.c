// Exercise 13 from chapter 8
// This program is a rewrite of program 8.12. It sorts arrays in ascending or descending order.

#include<stdio.h>

void sort( int a[], int n, _Bool order )
{

    int i, j, temp;

    if( order == 0 ) // ascending
    {

	for( i = 0; i < n - 1; ++i )
	    for( j = i + 1; j < n; ++j )
		if( a[i] > a[j] )
		{

		    temp = a[i];
		    a[i] = a[j];
		    a[j] = temp;

		}

    }

    if( order == 1 ) // descending
    {

	for( i = 0; i < n - 1; ++i )
	    for( j = i + 1; j < n; ++j )
		if( a[i] < a[j] )
		{

		    temp = a[i];
		    a[i] = a[j];
		    a[j] = temp;

		}

    }

}

int main( void )
{

    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
    void sort( int a[], int n, _Bool order );

    printf( "The array before the sort:\n" );

    for( i = 0; i < 16; ++i )
	printf( "%i ", array[i] );

    sort( array, 16, 1 );

    printf( "\n\nThe array after the sort:\n" );

    for( i = 0; i < 16; ++i )
	printf( "%i ", array[i] );

    printf( "\n" );

    return 0;

}

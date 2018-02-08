// Exercise 12, letter b from chapter 8
/* 
This program is a rewrite of exercise 12, letter a from chapter 8. It transposes matrices of arbitrary dimensions.
*/

#include<stdio.h>

void transposeMatrix( int rows, int columns, double m1[rows][columns], double m2[columns][rows] )
{

    for( int i = 0; i < rows; i++ )
	for( int j = 0; j < columns; j++ )
	    m2[j][i] = m1[i][j];

}

int main( void )
{

    double m1[4][5] =
    {
	{ 1, 2, 3, 4, 5 },
	{ 1, 2, 3, 4, 5 },
	{ 1, 2, 3, 4, 5 },
	{ 1, 2, 3, 4, 5 }
    };
    double m2[5][4];

    transposeMatrix( 4, 5, m1, m2 );

    for( int i = 0; i < 4; i++ )
    {

	for( int j = 0; j < 5; j++ )
	    printf( "%lg ", m1[i][j] );

	printf( "\n" );

    }

    for( int i = 0; i < 5; i++ )
    {

	for( int j = 0; j < 4; j++ )
	    printf( "%lg ", m2[i][j] );
	printf( "\n" );

    }

    return 0;

}

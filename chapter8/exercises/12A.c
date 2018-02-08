// Exercise 12, letter a from chapter 8
// This program transposes matrices.

#include<stdio.h>

void transposeMatrix( double m1[4][5], double m2[5][4] )
{

    for( int i = 0; i < 4; i++ )
	for( int j = 0; j < 5; j++ )
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
    void transposeMatrix( double m1[4][5], double m2[5][4] );

    transposeMatrix( m1, m2 );

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

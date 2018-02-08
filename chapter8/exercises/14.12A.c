// Exercise 14 from chapter 8
/*
This function is a rewrite of transposeMatrix from exercise 12, letter a from chapter 8. It uses global variables
instead of arguments.
*/

void transposeMatrix( void )
{

    for( int i = 0; i < 4; i++ )
	for( int j = 0; j < 5; j++ )
	    gM2[j][i] = gM1[i][j];

}

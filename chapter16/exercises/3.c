// Exercise 3 from chapter 16
// This program copy one file to another replacing lowercase characters with uppercase ones.

#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    char inName[64], outName[64];
    char try = 'y';
    FILE *in = NULL, *out = NULL;
    int c;

    while( try == 'y' )
    {
	printf( "Enter the name of the file to be copied:\n" );
	scanf( "%63s", inName );

	if( ( in = fopen( inName, "r" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", inName );
	    try = 0;

	    while( try != 'y' && try != 'n' )
	    {
		printf( "Try again?(y/n)\n" );
		scanf( "\n%c", &try );

		if( try != 'y' && try != 'n' )
		    fprintf( stderr, "Invalid input. Please enter y or n.\n" );

		else if( try == 'n' )
		{
		    printf( "Exiting...\n" );
		    exit( EXIT_FAILURE );
		}
	    }
		
	}

	else
	    try = 'n';
    }

    try = 'y';

    while( try == 'y' )
    {
	printf( "Enter the name of the output file:\n" );
	scanf( "%63s", outName );

	if( ( out = fopen( outName, "w" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", outName );
	    try = 0;

	    while( try != 'y' && try != 'n' )
	    {
		printf( "Try again?(y/n)\n" );
		scanf( "\n%c", &try );

		if( try != 'y' && try != 'n' )
		    printf( "Invalid input. Please enter y or n.\n" );

		else if( try == 'n' )
		{
		    printf( "Exiting...\n" );
		    exit( EXIT_FAILURE );
		}
	    }
		
	}

	else
	    try = 'n';
    }

    while( ( c = getc( in ) ) != EOF )
    {
	if( c >= 'a' && c <= 'z' )
	    c = c - 'a' + 'A';

	putc( c, out );
    }

    fclose( in );
    fclose( out );

    printf( "Copy and conversion complete.\n" );

    exit( EXIT_SUCCESS );
}

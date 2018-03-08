// Exercise 5 from chapter 16
// This program writes given columns m thorugh n of each line of a given file to stdout.

#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    char fName[64], try = 'y';
    int m, n, c = 1, count = 0;
    FILE *f = NULL;

    while( try == 'y' )
    {
	printf( "Enter the name of the file:\n" );
	scanf( "%63s", fName );

	if( ( f = fopen( fName, "r" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", fName );
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

    printf( "Enter the positions for the beginning and ending columns, separated by one blank space:\n" );
    scanf( "%i %i", &m, &n );
    
    while( ( c = getc( f ) ) != EOF )
    {
	if( c == '\n' )
	{
	    printf( "\n" );
	    count = -1;
	}
	    
	if( count >= m && count <= n )
	    putc( c, stdout );

	count++;
    }

    fclose( f );

    exit( EXIT_SUCCESS );
}

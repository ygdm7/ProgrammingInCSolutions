// Exercise 6 from chapter 16
// This program displays the content of a file 20 lines at a time.

#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    int i;
    char fileName[64], string[100], try = 'y', input = 'y';
    FILE * f = NULL;

    while( try == 'y' )
    {
	printf( "Enter the name of the file:\n" );
	scanf( "%63s", fileName );

	if( ( f = fopen( fileName, "r" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", fileName );
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

    printf( "\n" );

    while( input != 'q' )
    {	
	for( i = 0; i < 20; i++ )
	{
	    if( fgets( string, 100, f ) )
		fputs( string, stdout );

	    else
	    {
		printf( "End of file reached. Exiting...\n" );
		exit( EXIT_SUCCESS );
	    }
	}
	printf( "\n*****************************************************************************\n" );
	printf( "Insert q to exit or any other character to display 20 more lines of the file.\n" );
	scanf( "\n%c", &input );
	printf( "*****************************************************************************\n\n" );
    }

    printf( "Exiting...\n" );
    exit( EXIT_SUCCESS );
}

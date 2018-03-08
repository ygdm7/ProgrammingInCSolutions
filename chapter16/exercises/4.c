// Exercise 4 from chapter 16
// This program merges lines alternately from two files and writes the results to stdout.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main( void )
{
    char fileName1[64], fileName2[64], string1[100], string2[100], *c1, *c2;
    char try = 'y';
    FILE *f1 = NULL, *f2 = NULL;

    while( try == 'y' )
    {
	printf( "Enter the name of the first file:\n" );
	scanf( "%63s", fileName1 );

	if( ( f1 = fopen( fileName1, "r" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", fileName1 );
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
	printf( "Enter the name of the second file:\n" );
	scanf( "%63s", fileName2 );

	if( ( f2 = fopen( fileName2, "r" ) ) == NULL )
	{
	    fprintf( stderr, "File %s could not be opened.\n", fileName2 );
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

    while( c1 != NULL || c2 != NULL )
    {
	if( ( c1 = fgets( string1, 99, f1 ) ) != NULL )
	    fputs( string1, stdout );

	if( ( c2 = fgets( string2, 99, f2 ) ) != NULL )
	    fputs( string2, stdout );	
    }

    fclose( f1 );
    fclose( f2 );

    exit( EXIT_SUCCESS );
}

// Program 10.8

#include<stdio.h>
#include<stdbool.h>

/*****  Insert alphabetic function here  *****/

/*****  Insert readLine function here  *****/

/*****  Insert countWords function here *****/

int main( void )
{

    char text[81];
    int totalWords = 0;
    
    int countWords( const char string[] );
    void readLine( char buffer[] );

    bool endOfText = false;

    printf( "Type in your text.\n" );
    printf( "When you are done, press 'RETURN'.\n\n" );

    while( ! endOfText )
    {

	readLine( text );

	if( text[0] == '\0' )
	    endOfText = true;

	else
	    totalWords += countWords( text );

    }

    printf( "\nThere are %i words in the above text.\n", totalWords );

    return 0;

}

// Exercise 4 from chapter 10
// This function extracts a portion of a character string.

#include<stdio.h>
#include<string.h>

void substring( char source[], int start, int count, char result[] )
{
    int i = start;
    int p = 0;
    
//    for( i = start, p = 0; i < start + count || source[i] != '\0'; i++, p++ ) doesn't work. Why?
    while( i < start + count )
    {
	if( source[i] )
	{
	    result[p] = source[i];
	    i++;
	    p++;
	}

	else
	    break;
    }

    result[p] = '\0';
}

/* main function for test purposes
int main( void )
{
    char s1[7] = "abc123";
    char s2[7];

    substring( s1, 0, 3, s2 );
    puts( s2 );

    return 0;
}
*/

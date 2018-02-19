// Exercise 9 from chapter 10
/*
This is a rewrite of replaceString from exercise 8 from chapter 10. It returns a true value if the replacement
succeed and a false value if it doesn't.
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool replaceString( char source[], char s1[], char s2[] )
{
    int pos;

    pos = findString( source, s1 );
    removeString( source, pos, strlen( s1 ) );
    insertString( source, s2, pos );

    if( pos == -1 )
	return false;

    else
	return true;
}

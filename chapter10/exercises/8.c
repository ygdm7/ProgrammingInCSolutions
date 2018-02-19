// Exercise 8 from chapter 10
// This function replaces a specific part of a string with another string.

#include<stdio.h>
#include<string.h>

void replaceString( char source[], char s1[], char s2[] )
{
    int pos;

    pos = findString( source, s1 );
    removeString( source, pos, strlen( s1 ) );
    insertString( source, s2, pos );
}

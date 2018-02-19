// Exercise 7 from chapter 10
// This function inserts a string into another string.

#include<stdio.h>
#include<string.h>

void insertString( char source[], char insert[], int pos )
// source array has to have a size big enough to hold both source and insert characters plus the null character
{
    int i, j;

    for( i = strlen( source ); i >= pos; i-- ) // move characters forward as many positions as the size of insert
	source[i + strlen( insert )] = source[i];

    for( i = 0, j = pos; i < strlen( insert ); i++, j++ ) // places insert string inside source string
	source [j] = insert[i];
}

// Exercise 10 from chapter 10
// This function sorts a dictionary array os structs into alphabetical order.

#include<stdio.h>
#include<string.h>

struct entry
{
    char word[15];
    char definition[50];
};

int compareStrings( const char s1[], const char s2[] )
{

    int i = 0, answer;

    while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
	++i;

    if( s1[i] < s2[i] )
	answer = -1; /* s1 < s2 */

    else if( s1[i] == s2[i] )
	answer = 0; /* s1 == s2 */

    else
	answer = 1; /* s1 > s2 */

    return answer;

}

void dictionarySort( struct entry dictionary[100] )
{
    int test, i, j;
    struct entry temp;

    for( i = 0; i < 9; i++ )
    {
	for( j = i + 1; j < 10; j++ )
	{
	    test = compareStrings( dictionary[i].word, dictionary[j].word );

	    if( test == 1 )
	    {
		strcpy( temp.word, dictionary[j].word );
		strcpy( temp.definition, dictionary[j].definition );
		strcpy( dictionary[j].word, dictionary[i].word );
		strcpy( dictionary[j].definition, dictionary[i].definition );
		strcpy( dictionary[i].word, temp.word );
		strcpy( dictionary[i].definition, temp.definition );
	    }
	}
    }
}

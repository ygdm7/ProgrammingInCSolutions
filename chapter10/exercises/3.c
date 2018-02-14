// Exercise 3 from chapter 10
/*
This is a rewrite of the function countWords from example 10.7. It supports counting words with apostrophes and
numbers as separate words.
*/

int countWords( const char string[] )
{

    int i, wordCount = 0;
    char c;

    bool lookingForWord = true, alphabetic( const char c );

    for( i = 0; string[i] != '\0'; ++i )
    {
	
	c = string[i]; // make expressions shorter
	c2 = string[i + 1];
    
	if( alphabetic( c ) || c == '\'' )
	{

	    if( lookingForWord )
	    {

		++wordCount;
		lookingForWord = false;

	    }

	}

	else if(
	    ( c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || // string[i] is an integer number
	      c == '5' || c == '6' || c == '7' || c == '8' || c == '9' )
	    ||
	    ( ( c == '-' || c == ',' || c == '.' ) // string[i] is a negative sign, a comma or a period
	      &&
	      ( c2 == '0' || c2 == '1' || c2 == '2' || c2 == '3' || c2 == '4' || // string[i +1] is a number
		c2 == '5' || c2 == '6' || c2 == '7' || c2 == '8' || c2 == '9' ) )
	    )
	{

	    if( lookingForWord )
	    {

		++wordCount;
		lookingForWord = false;

	}

	else
	    lookingForWord = true;

    }

    return wordCount;

}

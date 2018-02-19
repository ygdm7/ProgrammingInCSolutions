// Exercise 5 from chapter 10
// This function determines if one string exists inside another string.

int findString( char string[], char sub[] )
{
    int i = 0, j = 0, count = 0;

    while( string[i] )
    {
	if( string[i] == sub[0] )
	{
	    while( sub[j] )
	    {
		if( string[i + j] == sub[j] )
		    count++;

		else
		{
		    j = 0;
		    break;
		}

		j++;

		if( sub[j] == '\0' )
		    return i;
	    }
	}

	i++;
    }

    return -1;
}

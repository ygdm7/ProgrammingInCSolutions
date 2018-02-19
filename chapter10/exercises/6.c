// Exercise 6 from chapter 10
// This function removes a specified part of a string.

void removeString( char source[], int start, int numChar )
{
    int i = start;
    
    while( source[i + numChar] )
    {
	source[i] = source[i + numChar];
	i++;
    }

    source[i] = '\0';
}

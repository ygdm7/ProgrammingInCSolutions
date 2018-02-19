// Exercise 13 from chapter 10
// This function converts lowercase strings to uppercase strings.

void uppercase( char str[] )
{
    int i = 0;
    
    while( str[i] )
    {
	if( str[i] >= 'a' && str[i] <= 'z' ) // checks if the character is lowercase
	    str[i] = str[i] - 'a' + 'A';
	
	i++;
    }
}

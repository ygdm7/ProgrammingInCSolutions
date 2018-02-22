// Exercise 10 from chapter 11
// This is a rewrite of compareStrings from program 10.10. It uses character pointers instead of arrays.

int compareStrings( const char *s1, const char *s2 )
{
    while( *s1 == *s2 && *s1 != '\0' )
    {
	s1++;
	s2++;
    }

    if( *s1 < *s2 )
	return -1;

    else if( *s1 == *s2 )
	return 0;

    else
	return 1;
}

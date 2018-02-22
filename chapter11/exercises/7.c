// Exercise 7 from chapter 11
// This function sorts an array using pointers.

void sort( int *a, int n )
{
    int temp;
    int *firstA, *c;
    
    for( firstA = a; a < firstA + n - 1; a++ )
	for( c = a + 1; c < firstA + n; c++ )
	    if( *a > *c )
	    {
		temp = *a;
		*a = *c;
		*c = temp;
	    }
}

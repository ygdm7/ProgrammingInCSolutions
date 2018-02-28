// Exercise 6 from chapter 12
// This function search for a given bit pattern inside a given unsigned int.

int int_size( void )
{
    unsigned int num = ~0;
    int size = 0;

    while( num != 0 )
    {
	size++;
	num >>= 1;
    }

    return size;
}

int bitpat_search( unsigned int source, unsigned int pattern, int n )
{
    unsigned int temp = source;
    unsigned int operand = 0;
    int size = int_size();

    pattern <<= size - n;
    operand = ~operand;
    operand >>= size - n;
    operand <<= size - n;

    for( int i = 0; i <= size - n; i++ )
    {
	temp = source & operand;

	if( temp == pattern )
	    return i;

	else
	{
	    pattern >>= 1;
	    operand >>= 1;
	}
    }

    return -1;
}

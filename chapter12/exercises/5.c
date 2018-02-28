// Exercise 5 from chapter 12
/*
bit_test verify whether a bit in a given position is 0 or 1 inside a given unsigned int. bit_set returns the result
of turning a bit in a given position to 1 inside a given number.
*/

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

int bit_test( unsigned int number, int position )
{
    number <<= position;
    number >>= int_size() - 1;

    if( number )
	return 1;

    else
	return 0;
}

unsigned int bit_set( unsigned int number, int position )
{
    unsigned int operand = 1;

    operand <<= ( int_size() - 1 ) - position;

    return ( number | operand );
}

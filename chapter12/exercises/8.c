// Exercise 8 from chapter 12
// This function sets a specified set of bits to a particular value.

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

void bitpat_set( unsigned int *pt, unsigned int value, int start, int size )
{
    unsigned int operand = 0;
    int intSize = int_size();

    if( start + size > intSize - 1 )
    {
	printf( "Invalid start or size.\n" );
	return;
    }

    operand = ~operand;
    operand >>= intSize - ( 1 + size );    
    operand <<= intSize - ( start + size );
    *pt = *pt & operand;

    operand >>= intSize - ( start + size );
    value = value & operand;
    value <<= intSize - ( start + size );

    *pt = *pt | value;
}

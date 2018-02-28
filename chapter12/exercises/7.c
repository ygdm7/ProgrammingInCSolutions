// Exercise 7 from chapter 12
// This function extracts a given number of bits starting at a given position of a given unsigned int.

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

unsigned int bitpat_get( unsigned int source, int start, int count )
{
    unsigned int operand = 0;
    int size = int_size();
    
    operand = ~operand;
    operand >>= size - count;
    operand <<= size - ( start + count );
    operand = source & operand;
    operand >>= size - ( start + count );

    return operand;
}

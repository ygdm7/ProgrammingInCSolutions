// Exercise 4 from chapter 12
// This is a rewrite of rotate from program 12.4. It obtains the number of bits used to store an int variable.

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

// Function to rotate an unsigned int left or right

unsigned int rotate( unsigned int value, int n )
{
    unsigned int result, bits;
    int size = int_size();

    // scale down the shift count to a defined range

    if( n > 0 )
	n = n % size;

    else
	n = -( -n % size );

    if( n == 0 )
	result = value;

    else if( n > 0 ) // left rotate
    {
	bits = value >> ( size - n );
	result = value << n | bits;
    }

    else // right rotate
    {
	n = -n;
	bits = value << ( size - n );
	result = value >> n | bits;
    }

    return result;
}

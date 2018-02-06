// Exercise 9 from chapter 8
// This function returns the least common multiple of two positive integers.

int gcd( int u, int v )
{

    int temp;

    while( v != 0 )
    {

	temp = u % v;
	u = v;
	v = temp;

    }

    return u;

}

int lcm( int u, int v )
{

    if( u < 0 )
    {

	printf( "%i < 0. Arguments must be equal or bigger than zero.\n", u );
	return -1;

    }

    else if( v < 0 )
    {

	printf( "%i < 0. Arguments must be equal or bigger than zero.\n", v );
	return -1;

    }

    else
    {

	return ( u * v / gcd( u, v ) );

    }

}

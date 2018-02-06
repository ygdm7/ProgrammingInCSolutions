// Exercise 10 from chapter 8
// This function determines if an argument is a prime number.

_Bool prime( int num )
{

    int numArray[num + 1];
    int i;
    _Bool isPrime = 0;

    for( i = 2; i <= num; i++ )
	numArray[i] = 0;

    i = 2;

    while( i <= num )
    {

	if( i == num && numArray[num] == 0 )
	    isPrime = 1;
	
	for( int j = 0; i * j <= 150; j++ )
	    numArray[i * j] = 1;

	i++;

    }

    if( isPrime )
	return 1;

    else
	return 0;

}

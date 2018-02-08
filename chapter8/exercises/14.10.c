// Exercise 14 from chapter 8
/*
This is a rerite of the prime function from exercise 10 from chapter 8. It uses global variables instead of
arguments.
*/

_Bool prime( void )
{

    int numArray[gNum + 1];
    int i;
    _Bool isPrime = 0;

    for( i = 2; i <= gNum; i++ )
	numArray[i] = 0;

    i = 2;

    while( i <= gNum )
    {

	if( i == gNum && numArray[gNum] == 0 )
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

// Exercise 14 from chapter 8
/*
This function is a rewrite of arraySum from exercise 11 from chapter 8. It uses global variables instead of
arguments.
*/

int arraySum( void )
{

    int sum = 0;

    for( int i = 0; i < gNumberOfElements; i++ )
	sum += gArray[i];

    return sum;

}

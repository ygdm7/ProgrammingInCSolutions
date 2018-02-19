// Exercise 11 from chapter 10
// This function is a rewrite of strToInt from program 10.11. It deals correctly with negative numbers.

int strToInt( const char string[] )
{

    int i, intValue, result = 0, isNegative = 0;

    if( string[0] == '-' )
	isNegative = 1;

    for( i = isNegative; string[i] >= '0' && string[i] <= '9'; ++i )
    {

	intValue = string[i] - '0';
	result = result * 10 + intValue;

    }

    if( isNegative )
	result *= -1;

    return result;

}

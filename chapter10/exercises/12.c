// Exercise 12 from chapter 10
// This function converts a string containing numbers to floating point values.

double strToFloat( const char string[] )
{

    int i, div = 1, value, isNegative = 0, decimal = 0;
    double result = 0;

    if( string[0] == '-' )
	isNegative = 1;

    for( i = isNegative; string[i] >= '0' && string[i] <= '9'; ++i )
    {
	value = string[i] - '0';
	
	if( decimal )
	{
	    div *= 10;
	    result += (double)value / div;
	}

	else
	{
	    value = string[i] - '0';
	    result = result * 10 + value;
	}
	
	if( string[i + 1] == '.' )
	{
	    i++;
	    decimal = 1;
	}
    }

    if( isNegative )
	result *= -1.0;
    
    return result;

}

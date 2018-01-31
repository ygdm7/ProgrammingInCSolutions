// Exercise 4 from chapter 6
/* This program receives an indefinite quantity of numbers followed by operators and execute the operations on the
   respective numbers.
*/

#include<stdio.h>

int main( void )
{

    double number;
    double accumulator = 0;
    char operator = 'i';

    while( operator != 'E' )
    {

	printf( "Enter a number and an operator separated by a blank space:\n" );
	printf( "Supported operators:\n" );
	printf( "+ Sum\n" );
	printf( "- Subtraction\n" );
	printf( "* Multiplication\n" );
	printf( "/ Division\n" );
	printf( "S Set Accumulator value\n" );
	printf( "E End program\n" );

	scanf( "%lg %c", &number, &operator );

	switch( operator )
	{

	case '+':
	    accumulator += number;
	    printf( "= %g\n\n", accumulator );
	    break;

	case '-':
	    accumulator -= number;
	    printf( "= %g\n\n", accumulator );
	    break;

	case '*':
	    accumulator *= number;
	    printf( "= %g\n\n", accumulator );
	    break;

	case '/':

	    if( number == 0 )
	    {

		printf( "Division by zero not supported.\n\n" );

	    }
	    
	    else
	    {

		accumulator /= number;
		printf( "= %g\n\n", accumulator );

	    }

	    break;

	case 'S':
	    accumulator = number;
	    printf( "= %g\n\n", accumulator );
	    break;

	case 'E':
	    printf( "= %g\n", accumulator );
	    printf( "End of Calculations.\n\n" );
	    break;

	default:
	    printf( "Unknown operator.\n\n" );
	    break;

	}

    }

    return 0;

}

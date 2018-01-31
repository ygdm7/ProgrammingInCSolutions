// Exercise 6 from chapter 6
// This program gets an integer and displays each digit of the number in English.

#include<stdio.h>

int main( void )
{

    int number = 1;
    int digit = 11;
    int div = 1;
    int zeroes = 0;

    printf( "Enter a number to be displayed:\n" );
    scanf( "%i", &number );

    if( number == 0 )
    {

	printf( "zero\n" );

	return 0; // ends the program

    }

    while( number > 0 )
    {

	if( ( number / div ) < 10 )
	{

	    digit = number / div;	   

	    switch( digit )
	    {

	    case 0:
		printf( "zero " );
		break;

	    case 1:
		printf( "one " );
		break;

	    case 2:
		printf( "two " );
		break;

	    case 3:
		printf( "three " );
		break;

	    case 4:
		printf( "four " );
		break;

	    case 5:
		printf( "five " );
		break;

	    case 6:
		printf( "six " );
		break;

	    case 7:
		printf( "seven " );
		break;

	    case 8:
		printf( "eight " );
		break;

	    case 9:
		printf( "nine " );
		break;

	    default:
		printf( "Unknown value.\n" );
		break;

	    }

	    if( number % div == 0)
	    {

		for( int i = 0; i < zeroes; i ++ )
		    printf( "zero " );

	    }

	    else
	    {

		zeroes = 0;

	    }

	    number -= digit * div;
	    div = 1;

	}

	else
	{

	    div *= 10;
	    zeroes++;

	}
		

    }

    printf( "\n" );

    return 0;

}

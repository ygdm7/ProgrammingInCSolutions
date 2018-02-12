// Exercise 4 from chapter 9
// This program displays the day of the week on which a date falls.

#include<stdio.h>

struct date
{

    int day;
    int month;
    int year;

};

int getN( struct date d )
{

    int n, f, g;

    if( d.month <= 2 )
    {
	
	f = d.year - 1;
	g = d.month + 13;

    }

    else
    {
	
	f = d.year;
	g = d.month + 1;

    }

    n = 1461 * f / 4 + 153 * g / 5 + d.day;

    return n;

}

int main( void )
{

    int getN( struct date d );
    
    struct date d;
    int n, day;

    printf( "Enter the day, the month and the year separated by blank spaces:\n" );
    scanf( "%i %i %i", &d.day, &d.month, &d.year );

    n = getN( d );
    day = ( n - 621049 ) % 7;

    printf( "%i/%i/%i falls on ", d.day, d.month, d.year );

    switch( day )
    {

    case 0:
	printf( "Sunday.\n" );
	break;

    case 1:
	printf( "Monday.\n" );
	break;

    case 2:
	printf( "Tuesday.\n" );
	break;

    case 3:
	printf( "Wednesday.\n" );
	break;

    case 4:
	printf( "Thursday.\n" );
	break;

    case 5:
	printf( "Friday.\n" );
	break;

    case 6:
	printf( "Saturday.\n" );
	break;

    default:
	printf( "ERROR\n" );
	return 1;

    }

    return 0;

}

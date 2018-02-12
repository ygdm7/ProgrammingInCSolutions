// Exercise 2 from chapter 9
/*
This program receives two dates from the user and shows the number of elapsed days between them, given the dates
are after March 1, 1900.
*/

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
    
    struct date d1, d2;
    int n1, n2;




    printf( "Enter the day, the month and the year of the most recent date, separated by white spaces:\n" );
    scanf( "%i %i %i", &d1.day, &d1.month, &d1.year );

    printf( "Enter the day, the month and the year of the older date, separated by white spaces:\n" );
    scanf( "%i %i %i", &d2.day, &d2.month, &d2.year );

    n1 = getN( d1 );
    n2 = getN( d2 );

    printf( "The number of days between %i/%i/%i and %i/%i/%i is %i.\n",
	    d2.day, d2.month, d2.year, d1.day, d1.month, d1.year, ( n1 - n2 ) );

    return 0;

}

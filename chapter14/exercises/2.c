// Exercise 2 from chapter 14
// This function takes an enum month and returns a pointer to a character string containing the name of the month.

#include<stdio.h>

enum month { january = 1, february, march, april, may, june, july,
	     august, september, october, november, december };

char *monthName( enum month aMonth )
{   
    switch( aMonth )
    {
    case january:
	return &"January";
	break;
    case february:
	return &"February";
	break;
    case march:
	return &"March";
	break;
    case april:
	return &"April";
	break;
    case may:
	return &"May";
	break;
    case june:
	return &"June";
	break;
    case july:
	return &"July";
	break;
    case august:
	return &"August";
	break;
    case september:
	return &"September";
	break;
    case october:
	return &"October";
	break;
    case november:
	return &"November";
	break;
    case december:
	return &"December";
	break;
    }

    return 0;
}

int main( void )
{
    enum month aMonth = december;

    printf( "%s\n", monthName( aMonth ) );

    return 0;
}

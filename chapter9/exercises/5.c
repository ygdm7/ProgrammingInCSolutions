// Exercise 5 from chapter 9
//

#include<stdio.h>
#include<stdbool.h>

struct date
{

    int month;
    int day;
    int year;

};

struct time
{

    int hour;
    int minutes;
    int seconds;

};

struct dateAndTime
{

    struct date sdate;
    struct time stime;

};

int numberOfDays( struct date d )
{

    int days;
    bool isLeapYear( struct date d );
    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if( isLeapYear( d ) && d.month == 2 )
	days = 29;

    else
	days = daysPerMonth[d.month - 1];

    return days;

}

bool isLeapYear( struct date d )
{

    bool leapYearFlag;

    if( ( d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 )
	leapYearFlag = true; // It's a leap year

    else
	leapYearFlag = false; // Not a leap year

    return leapYearFlag;

}

struct time timeUpdate( struct time now )
{
    
    ++now.seconds;

    if( now.seconds == 60 ) // next minute
    {

	now.seconds = 0;
	++now.minutes;

	if( now.minutes == 60 ) // next hour
	{

	    now.minutes = 0;
	    ++now.hour;

	    if( now.hour == 24 ) // midnight
		now.hour = 0;

	}

    }

    return now;

}

struct date dateUpdate( struct date today )
{

    struct date tomorrow;
    int numberOfDays( struct date d );

    if( today.day != numberOfDays( today ) )
    {

	tomorrow.day = today.day + 1;
	tomorrow.month = today.month;
	tomorrow.year = today.year;

    }

    else if( today.month == 12 ) // end of the year
    {

	tomorrow.day = 1;
	tomorrow.month = 1;
	tomorrow.year = today.year + 1;

    }

    else // end of month
    {

	tomorrow.day = 1;
	tomorrow.month = today.month + 1;
	tomorrow.year = today.year;

    }

    return tomorrow;

}

struct dateAndTime clockKeeper( struct dateAndTime DTNow)
{

    struct dateAndTime DTUpdated1;
    
    DTUpdated1.stime = timeUpdate( DTNow.stime );
    DTUpdated1.sdate = DTNow.sdate;
    
    if( DTNow.stime.hour == 23 && DTUpdated1.stime.hour == 0 )
	DTUpdated1.sdate = dateUpdate( DTUpdated1.sdate );

    return DTUpdated1;

}

int main( void )
{

    struct dateAndTime t1 = { { 2, 1, 2004 }, { 23, 59, 59 } };
    struct dateAndTime t2;

    t2 = clockKeeper( t1 );

    printf( "%i/%i/%i %i:%i:%i.\n", t2.sdate.month, t2.sdate.day, t2.sdate.year, t2.stime.hour, t2.stime.minutes, t2.stime.seconds );

    return 0;

}

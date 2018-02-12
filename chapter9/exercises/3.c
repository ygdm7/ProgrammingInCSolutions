// Exercise 3 from chapter 9
// This function shows the time elapsed between two provided times.

struct time elapsed_time( struct time t1, struct time t2 )
{

    struct time result;

    if( t2.seconds >= t1.seconds )
	result.seconds = t2.seconds - t1.seconds;

    else
	result.seconds = 60 - t1.seconds + t2.seconds;

    if( t2.minutes >= t1.minutes )
	result.minutes = t2.minutes - t1.minutes;

    else
	result.minutes = 60 - t1.minutes + t2.minutes;

    if( t2.hours >= t1.hours )
	result.hours = t2.hours - t1.hours;

    else
	result.hours = 24 - t1.hours + t2.hours;

    return result;

}

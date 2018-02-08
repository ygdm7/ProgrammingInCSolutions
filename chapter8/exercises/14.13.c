// Exercise 14 from chapter 8
/*
This function is a rewrite of sort from exercise 13 from chapter 8. It uses global variables instead of arguments.
*/

void sort( int a[], int n, _Bool order )
{

    int i, j, temp;

    if( gOrder == 0 ) // ascending
    {

	for( i = 0; i < gN - 1; ++i )
	    for( j = i + 1; j < aN; ++j )
		if( gA[i] > gA[j] )
		{

		    temp = gA[i];
		    gA[i] = gA[j];
		    gA[j] = temp;

		}

    }

    if( gOrder == 1 ) // descending
    {

	for( i = 0; i < gN - 1; ++i )
	    for( j = i + 1; j < gN; ++j )
		if( gA[i] < gA[j] )
		{

		    temp = gA[i];
		    gA[i] = gA[j];
		    gA[j] = temp;

		}

    }

}

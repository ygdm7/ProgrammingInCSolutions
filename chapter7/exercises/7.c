// Exercise 7 from chapter 7
/*
This program is an implementation of the Sieve of Erastosthenes used to find prime numbers. This algorithm executes
less operations than the others shown before, producing the same results.
*/

#include<stdio.h>

int main( void )
{

// BEGIN STEP 1    
    
    int numArray[151];
    int i;

    for( i = 2; i <= 150; i++ )
	numArray[i] = 0;

// END STEP 1
// BEGIN STEP 2    

    i = 2;

// END STEP 2
// BEGIN STEP 3    
    
    while( i <= 150 )
    {

// END STEP 3
// BEGIN STEP 4	

	if( numArray[i] == 0 )
	    printf( "%i ", i ); // Print the prime number

// END STEP 4	
// BEGIN STEP 5
	
	for( int j = 0; i * j <= 150; j++ )
	    numArray[i * j] = 1;

// END STEP 5
// BEGIN STEP 6	
	
	i++;

// END STEP 6	

    }
    
    return 0;

}

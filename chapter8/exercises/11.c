// Exercise 11 from chapter 8
// This function return the sum of an integer array.

int arraySum( int array[], int numberOfElements )
{

    int sum = 0;

    for( int i = 0; i < numberOfElements; i++ )
	sum += array[i];

    return sum;

}

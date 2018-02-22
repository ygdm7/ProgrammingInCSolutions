// Exercise 12 from chapter 11
// Every printf call is valid and produces the same output as others from the same set.

#include<stdio.h>

int main( void )
{
    char *message = "Programming in C is fun\n";
    char message2[] = "You said it\n";
    char *format = "x = %i\n";
    int x = 100;

    printf( "SET 1\n" );
    /*** set 1 ***/
    printf( "Programming in C is fun\n" );
    printf( "%s", "Programming in C is fun\n" );
    printf( "%s", message );
    printf( message );

    printf( "SET 2\n" );
    /*** set 2 ***/
    printf( "You said it\n" );
    printf( "%s", message2 );
    printf( message2 );
    printf( "%s", &message2[0] );

    printf( "SET 3\n" );
    /*** set 3 ***/
    printf( "said it\n" );
    printf( message2 + 4 );
    printf( "%s", message2 + 4 );
    printf( "%s", &message2[4] );

    printf( "SET 4\n" );
    /*** set 4 ***/
    printf( "x = %i\n", x );
    printf( format, x );

    return 0;
}

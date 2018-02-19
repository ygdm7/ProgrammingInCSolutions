// Exercise 14 from chapter 10
// This function converts integer numbers to character strings.

#include<stdio.h>

void intToStr( int num, char str[50] )
{
    int i = 0, j = 0, right_digit;
    char str2[50];
    
    while( num != 0 )
    {
	right_digit = num % 10;
	num /= 10;
	str2[i] = '0' + right_digit;
	i++;
    }

    i--;

    while( i >= 0 )
    {
	str[j] = str2[i];
	i--;
	j++;
    }

    str[j] = '\0';
}

int main( void )
{
    int n = 543;
    char s[50];

    intToStr( n, s );

    printf( "%s\n", s );

    return 0;
}

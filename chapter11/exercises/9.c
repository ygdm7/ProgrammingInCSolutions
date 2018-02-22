// Exercise 9 from chapter 11
// This is a rewrite of readLine from program 10.6. It uses pointers to access the buffer array.

void readLine( char *b )
{

    char character;

    do
    {

	character = getchar();
	*b = character;
	b++;

    }
    while( character != '\n' );

    *b = '\0';

}

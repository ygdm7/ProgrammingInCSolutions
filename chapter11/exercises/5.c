// Exercise 5 from chapter 11
// This program defines and displays the elements of a doubly linked list.

#include<stdio.h>

struct doublyEntry
{
    int value;
    struct doublyEntry *next;
    struct doublyEntry *previous;
};

int main( void )
{
    struct doublyEntry d1, d2, d3, *p;

    d1.value = 1;
    d1.next = &d2;
    d1.previous = 0;
    
    d2.value = 2;
    d2.next = &d3;
    d2.previous = &d1;

    d3.value = 3;
    d3.next = 0;
    d3.previous = &d2;

    for( p = &d1; p != 0; p = p->next )
	printf( "%i\n", p->value );

    return 0;
}

// Exercise 4 from chapter 11
// This function remove an entry from a linked list.

/*
It is not recommended to remove the provided entry because that entry doesn't have a pointer to the previous entry.
This removal would break the list, making impossible to access elements after the removed entry.
*/

#include<stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void removeEntry( struct entry *element )
{
    element->next = element->next->next;
}

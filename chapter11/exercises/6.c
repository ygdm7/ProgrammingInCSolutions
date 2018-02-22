// Exercise 6 from chapter 11
// These functions insert and remove entries from a doubly linked list.

/*
removeEntry can now remove an exact element of the list because the doublyEntry struct have pointers to the next and
the previous list elements, making it possible to link them before removing the middle entry.
*/

struct doublyEntry
{
    int value;
    struct doublyEntry *next;
    struct doublyEntry *previous;
};

void insertEntry( struct doublyEntry *insert, struct doublyEntry *element )
{
    insert->next = element->next;
    insert->next->previous = insert;
    insert->previous = element;
    element->next = insert;
}

void removeEntry( struct doublyEntry *element )
{
    if( element->next != 0 )
	element->next->previous = element->previous;

    if( element->previous != 0 )
	element->previous->next = element->next;
}

// Exercise 2 from chapter 11
// This function inserts a new entry struct into a linked list, after a given entry.

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry( struct entry *insert, struct entry *element )
{
    insert->next = element->next;
    element->next = insert;
}

#ifndef _LINKED_LIST
#define _LINKED_LIST
// my implementation of a linked list


// TODO: 
// figure out how to have different types for the same struct 
// write the functions for adding a element to the end of the list 
// write the functions for removimg a certain element with a certain index
// see if you can print the structure with the index;

enum types {INT,STRING,CHAR,BOOL};

typedef struct linkedList{
    // data?
    enum types *type;
    struct linkedList *head;
    struct linkedList *node;
    struct linkedList *tail;
}linkedList;


linkedList* initList(struct linkedList *list, enum types *type);




#endif

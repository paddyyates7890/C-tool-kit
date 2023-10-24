#ifndef _LINKED_LIST
#define _LINKED_LIST
// my implementation of a linked list


// TODO: 
// think about index it should start at null
// pop or remove 
// add 
// init
// test - test indexes too probably need a get function to get a certain index.
enum types {INT,STRING,CHAR,BOOL};

union data {
    int i_data;
    char *s_data;
    char c_data;
    double d_data;
    float f_data;
};

typedef struct linkedList{
    int index;
    union data node_data;
    enum types *type;
    struct linkedList *head;
    struct linkedList *tail;
}linkedList;


linkedList* initList(struct linkedList *list, enum types *type, union data node_data);
linkedList* addNode(struct linkedList *parent, struct linkedList child);
linkedList* popNode(struct linkedList *list);


#endif

#include "linkedList.h"

linkedList* createList(enum types *type, union data node_data){
    struct linkedList *new_list;

    new_list->index = 0;
    new_list->type = type;
    new_list->node_data = node_data;

    return new_list;
}

linkedList* initNode(struct linkedList *head, struct linkedList *list, enum types *type, union data node_data){
    list->type = type;
    list->node_data = node_data;
    list->index = (head->index + 1);
    return list;
}

linkedList* addNode(struct linkedList *node, struct linkedList *child){
    // TODO 
}


#include "linkedList.h"

linkedList* initList(struct linkedList *list, enum types *type, union data node_data){
    list->type = type;
    list->node_data = node_data;
    return list;
}



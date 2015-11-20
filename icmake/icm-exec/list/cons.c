#include "list.ih"

void listcons(ListVariable *list)
{
    list->type = e_list;
    list->data = l_new();
}

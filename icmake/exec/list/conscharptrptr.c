#include "list.ih"

void listcons_charPtrPtr(ListVariable *list, char **args)
{
    list->type = e_list;
    list->data = l_new();

    while (*args)
        list_add_charPtr(list, *args++);
}

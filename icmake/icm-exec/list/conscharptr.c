#include "list.ih"

void listcons_charPtr(ListVariable *list, char const *arg)
{
    list->type = e_list;
    list->data = l_new();
    list_add_charPtr(list, arg);
}

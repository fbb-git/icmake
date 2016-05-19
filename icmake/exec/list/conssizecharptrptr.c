#include "list.ih"

void listcons_size_charPtrPtr(ListVariable *list, unsigned argc, char **argv)
{
    list->type = e_list;
    list->data = l_new();

    for (; argc--; )
        list_add_charPtr(list, *++argv);
}

#include "list.ih"

ListVariable const *listcons_charPtrPtr(char **args)
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = l_newList();

    while (*args)
        list_add_charPtr(&ret, *args++);
    
    return &ret;
}

#include "list.ih"

ListVariable *listcons_size_charPtrPtr(size_t argc, char **argv)
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = l_newList();

    for (; argc--; )
        list_add_charPtr(&ret, *++argv);
    
    return &ret;
}

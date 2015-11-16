#include "list.ih"

ListVariable *listcons()
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = l_newList();

    return &ret;
}

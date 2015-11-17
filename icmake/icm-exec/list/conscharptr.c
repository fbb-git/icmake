#include "list.ih"

ListVariable const *listcons_charPtr(char const *arg)
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = l_newList();
    list_add_charPtr(&ret, arg);

    return &ret;
}

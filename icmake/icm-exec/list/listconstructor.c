#include "list.ih"

ListVariable *listConstructor()
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = newlist();

    return &ret;
}

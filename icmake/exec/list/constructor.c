#include "list.ih"

LISTVAR_ *listConstructor()
{
    static LISTVAR_ ret = {e_list, {0}};

    ret.vu.i = newlist();

    return &ret;
}

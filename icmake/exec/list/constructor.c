#include "list.ih"

LISTVAR_ listConstructor()
{
    LISTVAR_ ret = {e_list};

    ret.vu.i = newlist();

    return ret;
}

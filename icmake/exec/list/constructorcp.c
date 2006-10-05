#include "list.ih"

LISTVAR_ listConstructor_cP(char const *arg)
{
    LISTVAR_ ret = {e_list};

    ret.vu.i = newlist();
    listAdd_cP(&ret, arg);
    
    return ret;
}

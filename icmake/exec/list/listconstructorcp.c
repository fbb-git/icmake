#include "list.ih"

LISTVAR_ *listConstructor_cP(char const *arg)
{
    static LISTVAR_ ret = {e_list, {0}};

    ret.vu.i = newlist();
    listAdd_cP(&ret, arg);
    
    return &ret;
}

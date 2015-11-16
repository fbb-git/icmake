#include "list.ih"

ListVariable *listConstructor_cP(char const *arg)
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = newlist();
    listAdd_cP(&ret, arg);
    
    return &ret;
}

#include "list.ih"

ListVariable *listConstructor_s_cPP(size_t argc, char **argv)
{
    static ListVariable ret = {e_list, {0}};

    ret.vu.i = newlist();

    for (; argc--; )
        listAdd_cP(&ret, *++argv);
    
    return &ret;
}

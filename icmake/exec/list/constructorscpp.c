#include "list.ih"

LISTVAR_ listConstructor_s_cPP(size_t argc, char **argv)
{
    LISTVAR_ ret = {e_list};

    ret.vu.i = newlist();

    for (; argc--; )
        listAdd_cP(&ret, *++argv);
    
    return ret;
}

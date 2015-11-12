#include "parser.ih"

int p_functionIdx()
{
    register int idx = symtab_findFun();

    if (idx == -1)
        util_semantic("Function '%s' not defined", util_string());

    return idx;    
}

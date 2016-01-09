#include "builtin.ih"

/*
    Performs set-addition of the rhs list or string to the lhs list,
    returns a new list
*/

void b_listMerge()
{
    Variable *source = stack_top() - 1;

    listcopycons(eb_releaseReg(), stack_top());

    if (var_type(source) == e_str)
        list_mergeStr(&gb_reg, string_charp(source));
    else
        list_mergeList(&gb_reg, source);
}

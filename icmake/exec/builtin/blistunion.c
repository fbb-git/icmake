#include "builtin.ih"

/*
    Returns the set-union of the lhs list and the rhs list or string
*/

void b_listUnion()
{
    Variable *source = stack_top() - 1;

    listcons(eb_releaseReg());
    list_unionList(&gb_reg, stack_top());

    if (var_type(source) == e_str)
        list_unionStr(&gb_reg, string_charp(source));
    else
        list_unionList(&gb_reg, source);
}

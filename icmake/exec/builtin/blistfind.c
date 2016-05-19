/*
    This function returns the first index of an element in the lhs list which
is equal to either the rhs string
    -1 is returned if such an element was not found.
*/

#include "builtin.ih"

void b_listFind(void)
{
    Variable *target = stack_top() - 1;

    intcons_int(
        eb_releaseReg(),
        (int)list_contains(stack_top(), string_charp(target))
    );
}

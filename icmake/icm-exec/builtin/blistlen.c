/*
    This function determines the size of the last pushed list variable and
    sets {\em reg.vu.intval} to this size.
*/

#include "builtin.ih"

void b_listlen()
{
    Variable *base = stack_top();

    gb_reg = *intcons_int(
                var_type(base) == e_str ? 
                    (int)strlen(string_charp(base))
                :
                    (int)list_size(base)
        );
}

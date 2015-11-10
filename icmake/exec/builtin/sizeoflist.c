/*
\funcref{fun\_builtin_sizeOfList}{void fun\_builtin_sizeOfList ()}
    {}
    {}
    {}
    {funsizeo.c}
    {

        This function determines the size of the last pushed list variable and
        sets {\em reg.vu.intval} to this size.

    }
*/

#include "builtin.ih"

void builtin_sizeOfList()
{
    VAR_ *base = top();

    reg = *intConstructor_i(
                typeValue(base) == e_str ? 
                    (int)strlen(stringStr(base))
                :
                    (int)listSize(base)
        );
}

/*
\fucref{fun\_element}{void fun\_element ()}
    {}
    {}
    {xstrdup(), newvar()}
    {}
    {funeleme.c}
    {

        This function is called when an {\em op\_element} opcode is enountered.
        The last pushed value is interpreted as a list, the one but last pushed
        value as an index.

        The return register {\em reg} is set to a string variable, holding a
        duplicate of the listelement {\em index}. If index is larger than the
        size of the element, {\em reg} holds a null-string.

    }
*/

#include "builtin.ih"

void fun_element ()
{
    size_t idx = intValue(top());

    reg = *stringConstructor_cP
            (
                idx < listSize(top() - 1) ? 
                    listAt(top() - 1, idx)
                : 
                    ""
            );
}

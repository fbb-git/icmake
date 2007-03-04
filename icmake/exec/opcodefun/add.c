/*
\funcref{fun\_add}{void fun\_add ()}
    {}
    {}
    {pop(), xstrdup(), copylist(), addtolist(), discard()}
    {}
    {funadd.c}
    {

        Function {\em fun\_add()} processes opcode {\em op\_add}. Two variables
        are popped and added. Depending on their type, two integer values are
        added, two strings are concatenated, or two lists are merged.

        The result of the addition is stored in a temporary variable, which is
        then pushed.

        The two popped variables are discarded after use.

    }
*/

#include "opcodefun.ih"

void fun_add()
{
    VAR_ rval = *copyCons(top());   /* make a copy              */
    pop();                          /* remove the r-operand     */

    add(top(), &rval);              /* add the rval to the top  */
    destructor(&rval);              /* remove the local var     */
}

/*
\funcref{fun\_sub}{void fun\_sub ()}
    {}
    {}
    {pop(), copylist(), delfromlist(), discard()}
    {}
    {funsub.c}
    {

        Function {\em fun\_sub()} processes opcode {\em op\_sub}. Two variables
        are popped and subtracted. Depending on their type, two integer values
        are subtracted or a difference between two lists is computed.

        The result of the subtraction is stored in a temporary variable, which
        is then pushed.

        The two popped variables are discarded after use.
    }
*/

#include "opcodefun.ih"

void fun_sub ()
{
    VAR_ rval = *copyCons(top());    /* make a copy              */
    pop();                          /* remove the r-operand     */

    subtract(top(), &rval);         /* subtract the rval to the top  */
    destructor(&rval);              /* remove the local var     */
}

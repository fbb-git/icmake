/*
    Function {\em fun\_sub()} processes opcode {\em op\_sub}. Two variables
    are popped and subtracted. Depending on their type, two integer values
    are subtracted or a difference between two lists is computed.

    The result of the subtraction is stored in a temporary variable, which
    is then pushed.

    The two popped variables are discarded after use.
*/

#include "opcodefun.ih"

void o_sub ()
{
    Variable rval = *copycons(stack_top()); /* make a copy              */
    stack_pop();                            /* remove the r-operand     */

    virtual_sub(stack_top(), &rval); /* subtract the rval to the top  */
    destructor(&rval);              /* remove the local var     */
}

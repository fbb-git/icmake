/* 
    This function is called when an {\em op\_builtin_element} opcode is
    enountered.  The last pushed value is interpreted as a list, the one but
    last pushed value as an index.

    The return register {\em reg} is set to a string variable, holding a
    duplicate of the listbuiltin_element {\em index}. If index is larger than
    the size of the b_element, {\em reg} holds a null-string.
*/

#include "builtin.ih"

void b_element()
{
    unsigned idx = int_value(stack_top());

    stringcons_charPtr(
        eb_releaseReg(),
        idx < list_size(stack_top() - 1) ? 
            list_at(stack_top() - 1, idx)
        : 
            ""
    );
}

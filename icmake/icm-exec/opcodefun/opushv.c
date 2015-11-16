/*
    This function is executed when an {\em op\_push\_var} opcode is read in
    the binary makefile. Follwing the opcode a variable index is expected.
    This variable is pushed onto the stack.
*/

/*#define msg
*/

#include "opcodefun.ih"

void o_push_var()
{
    stack_push(o_getDest());    /* A global var's address is returned, push() will  */
                        /* increment its count. Since it's a var,           */
                        /* getDest()'s return variable shouldn't be         */
                        /* destroyed                                        */
}


/*
\funcref{fun\_push\_var}{void fun\_push\_var ()}
    {}
    {}
    {push(), getint16(), getdest(), initvar()}
    {}
    {funpushv.c}
    {

        This function is executed when an {\em op\_push\_var} opcode is read in
        the binary makefile. Follwing the opcode a variable index is expected.
        This variable is pushed onto the stack.

    }
*/

#include "opcodefun.ih"

void fun_push_var()
{
    push(getdest());    /* A global var's address is returned, push() will  */
                        /* increment its count. Since it's a var,           */
                        /* getDest()'s return variable shouldn't be         */
                        /* destroyed                                        */
}


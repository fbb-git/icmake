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

#include "icm-exec.h"

void fun_push_var ()
{
    register VAR_
        *dest;

    dest = getdest ();
    push (*dest);
    if ( dest->type & (e_str | e_list) )
        dest->vu.i->count++;
}

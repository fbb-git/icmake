/*
\funcref{fun\_older}{void fun\_older ()}
    {}
    {}
    {pop(), older(), discard()}
    {fun\_younger()}
    {funolder.c}
    {
        This function is executed when an {\em op\_older} opcode is found in
        the binary makefile. Two variables are popped and their {\em vu.str}
        fields are used as file names to compare two files. The result of the
        comparison is pushed as an {\em e\_int} variable.

        Note that the right operand of the {\em older} operator is popped
        first since the left operand is expected to be pushed first.
    }
*/

#include "icm-exec.h"

void fun_older ()
{
    VAR_
        rval,
        lval,
        tmp;

    tmp.type = e_int;

    rval = pop ();
    lval = pop ();
    tmp.vu.intval = older (lval.vu.i->ls.str, rval.vu.i->ls.str);

    discard (rval);
    discard (lval);

    push (tmp);
}

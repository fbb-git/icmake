/*
\funcref{istrue}{void istrue ()}
    {}
    {0: the last pushed variable yields `false'; otherwise: the last pushed
     variable yields `true'}
    {pop(), discard()}
    {fun\_jmp\_true(), fun\_jmp\_false()}
    {istrue.c}
    {

        This function pops the last pushed variable and determines if that
    variable should yield true. If the variable is of type {\em e\_int},
    then the integer representation is returned. If the variable is of
    type {\em e\_str}, then the first character in the string (this may
    be a zero-byte) is returned. If the variable is of type {\em
    e\_list}, the list size is returned.

        The popped variable is discarded.

    }
*/

#include "opcodefun.ih"

int istrue()
{
    int ret = logical(top());
    pop();

    return ret;
}

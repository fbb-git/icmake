/*
\funcref{fun\_strlen}{void fun\_strlen ()}
    {}
    {}
    {strlen()}
    {}
    {funstrlen.c}
    {
        Function {\em fun\_strlen()} returns the length of a string
    }
*/

#include "builtin.ih"

void fun_strlen()
{
    reg = *intConstructor_i((int)strlen(stringStr(top())));
}

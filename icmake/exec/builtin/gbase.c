/*
\funcref{fun\_g\_base}{void fun\_g\_base ()}
    {}
    {}
    {newvar(), get\_base ()}
    {fun\_g\_path(), fun\_g\_ext()}
    {fungbase.c}
    {

        The last pushed string is taken as a file name. The base name is
        returned.

    }
*/

#include "builtin.ih"

void fun_g_base ()
{
    reg = *stringConstructor_cP(get_base(stringStr(top())));
}

/*
\funcref{fun\_g\_path}{void fun\_g\_path ()}
    {}
    {}
    {newvar(), get\_path ()}
    {fun\_g\_ext(), fun\_g\_base()}
    {fungpath.c}
    {

        The last pushed string is taken as a file name. The path is
        returned.

    }
*/

#include "builtin.ih"

void fun_g_path ()
{
    reg = *stringConstructor_cP(get_path(stringStr(top())));
}

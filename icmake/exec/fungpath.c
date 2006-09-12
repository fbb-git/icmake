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

#include "icm-exec.h"

void fun_g_path ()
{
    reg = newvar (e_str);
    reg.vu.i->ls.str = get_path (stack [sp].vu.i->ls.str);
}

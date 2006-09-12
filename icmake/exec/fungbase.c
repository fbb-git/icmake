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

#include "icm-exec.h"

void fun_g_base ()
{
    reg = newvar (e_str);
    reg.vu.i->ls.str = get_base (stack [sp].vu.i->ls.str);
}

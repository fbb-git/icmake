/*
\funcref{fun\_g\_ext}{void fun\_g\_ext ()}
    {}
    {}
    {newvar(), get\_ext ()}
    {fun\_g\_path(), fun\_g\_base()}
    {fungext.c}
    {

        The last pushed string is taken as a file name. The extension is
        returned.

    }
*/

#include "icm-exec.h"

void fun_g_ext ()
{
    reg = newvar (e_str);
    reg.vu.i->ls.str = get_ext (stack [sp].vu.i->ls.str);
}

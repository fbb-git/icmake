/*
\funcref{fun\_c\_path}{void fun\_c\_path ()}
    {}
    {}
    {change\_path(), newvar()}
    {fun\_c\_base(), fun\_c\_ext()}
    {funcpath.c}
    {

        The last pushed string is taken as a file name. The pathname is
        converted to the one but last pushed string. A new {\em e\_str}
        variable is created holding the new string and is returned via {\em
        reg}.

    }
*/

#include "icm-exec.h"

void fun_c_path ()
{
    reg = newvar (e_str);

    reg.vu.i->ls.str =
        change_path (stack [sp].vu.i->ls.str, stack [sp - 1].vu.i->ls.str);
}

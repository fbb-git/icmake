/*
\funcref{fun\_c\_ext}{void fun\_c\_ext ()}
    {}
    {}
    {change\_ext(), newvar()}
    {fun\_c\_path(), fun\_c\_name()}
    {funcext.c}
    {

        The last pushed string is taken as a file name. The extension is
        converted to the one but last pushed string. A new {\em e\_str}
        variable is created holding the new string and is returned via {\em
        reg}.

    }
*/

#include "builtin.ih"

void fun_c_ext ()
{
    reg = *stringConstructor_cP(
                change_ext(stringStr(top()), stringStr(top() - 1))
                            );
}

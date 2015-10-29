/*
\funcref{fun\_c\_base}{void fun\_c\_base ()}
    {}
    {}
    {newvar(), change\_base()}
    {fun\_c\_path(), fun\_c\_ext()}
    {funcbase.c}
    {

        The last pushed string is taken as a file name. The basename is
        converted to the one but last pushed string. A new {\em e\_str}
        variable is created holding the new string and is returned via {\em
        reg}.

    }
*/

#include "builtin.ih"

void fun_c_base()
{
    reg = *stringConstructor_cP(
            change_base(stringStr(top()), stringStr(top() - 1))
                            );
}

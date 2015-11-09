/*
\funcref{fun\_exists}{void fun\_rss_exists()}
    {}
    {}
    {rss_exists()}
    {}
    {funexist.c}
    {

        Function {\em fun\_rss_exists()} checks if a file with the name of the
        last pushed string exists. If so, {\em reg.vu.intval} is set to 1.
        Else, the return register indicates 0.

    }
*/

#include "builtin.ih"

void fun_rss_exists()
{
    reg = *intConstructor_i(rss_exists(stringStr(top())));
}

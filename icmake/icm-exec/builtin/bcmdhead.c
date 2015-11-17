/*
\funcref{fun\_cmd\_head}{void fun\_cmd\_head ()}
    {}
    {}
    {eb_setString()}
    {fun\_arg\_tail(), fun\_arg\_head(), fun\_cmd\_tail()}
    {funcmdte.c}
    {

        This function is called when an {\em op\_cmd\_head} opcode is read in
        the binary makefile. The {\em gb_cmdHead} variable is set to a duplicate
        of the string in the last pushed variable. The last pushed variable is
        then discarded.

    }
*/

#include "builtin.ih"

void b_cmdHead()
{
    gb_cmdHead = eb_setString(gb_cmdHead);
}

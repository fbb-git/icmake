/*
\funcref{fun\_cmd\_tail}{void fun\_cmd\_tail ()}
    {}
    {}
    {eb_setString()}
    {fun\_arg\_tail(), fun\_arg\_head()}
    {funcmdte.c}
    {

        This function is called when an {\em op\_cmd\_tail} opcode is read in
        the binary makefile. The {\em gb_cmdTail} variable is set to a duplicate
        of the string in the last pushed variable. The last pushed variable is
        then discarded.

    }
*/

#include "builtin.ih"

void b_cmdTail()
{
    gb_cmdTail = eb_setString(gb_cmdTail);
}

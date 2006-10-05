/*
\funcref{fun\_cmd\_tail}{void fun\_cmd\_tail ()}
    {}
    {}
    {setstring()}
    {fun\_arg\_tail(), fun\_arg\_head()}
    {funcmdte.c}
    {

        This function is called when an {\em op\_cmd\_tail} opcode is read in
        the binary makefile. The {\em cmdtail} variable is set to a duplicate
        of the string in the last pushed variable. The last pushed variable is
        then discarded.

    }
*/

#include "builtin.ih"

void fun_cmd_tail()
{
    cmdtail = setstring(cmdtail);
}

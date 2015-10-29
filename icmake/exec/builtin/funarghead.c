/*
\funcref{fun\_arg\_head}{void fun\_arg\_head ()}
    {}
    {}
    {setstring()}
    {fun\_arg\_tail(), fun\_cmd\_tail()}
    {funarghe.c}
    {

        This function is called when an {\em op\_arg\_head} opcode is read in
        the binary makefile. The {\em arghead} variable is set to a duplicate
        of the string in the last pushed variable. The last pushed variable is
        then discarded.

    }
*/

#include "builtin.ih"

void fun_arg_head ()
{
    arghead = setstring (arghead);
}

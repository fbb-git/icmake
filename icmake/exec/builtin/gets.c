/*
\funcref{fun\_gets}{void fun\_gets ()}
    {}
    {}
    {}
    {fun\_getch()}
    {fungets.c}
    {

        This function reads in a string and returns it in the {\em reg} return
        register as an {\em e\_str} value.

    }
*/

#include "builtin.ih"

void fun_gets ()
{
    char *dest = getLine(stdin);

    if (!dest)
    {
        reg = *listConstructor();
        return;
    }
    
    reg = *stringConstructor_cP(dest);
    free(dest);
}








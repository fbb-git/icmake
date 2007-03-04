/*
\funcref{fun\_system}{void fun\_system ()}
    {}
    {}
    {}
    {fun\_exec()}
    {funsyste.c}
    {

        This function expects a system string as last pushed {\em e\_str}
        value. The string is executed through a {\em system()} call (if this
        fails, an error is issued).

    }
*/

#include "builtin.ih"

void fun_system ()
{
    int  mode = intValue(top());            /* get mode arg */
    char const *cmd = stringStr(top() - 1); /* get cmd string */

    if (echo)                               /* re-echo if requested */
        puts (cmd);

    fflush (stdout);

    {
        int ret;                            /* system() return */
    
        ret = system(cmd);                  /* do system call */

        if (ret && P_CHECKMODE(mode))       /* terminate upon failure? */
            error ("system - failure of system call (status %d)", ret);

        reg = *intConstructor_i(ret);        
    }
}

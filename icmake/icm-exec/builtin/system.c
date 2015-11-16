/*
\funcref{fun\_system}{void fun\_system ()}
    {}
    {}
    {}
    {fun\_builtin_exec()}
    {funsyste.c}
    {

        This function expects a system string as last pushed {\em e\_str}
        value. The string is builtin_executed through a {\em system()} call (if this
        fails, an error is issued).

    }
*/

#include "builtin.ih"

void builtin_system()
{
    int  mode = intValue(top());            /* get mode arg */
    char const *cmd = stringStr(top() - 1); /* get cmd string */

    if (echo)                               /* re-builtin_echo if requested */
        puts(cmd);

    fflush(stdout);

    int ret = system(cmd);                  /* do system call */

    if (ret && rss_checkMode(mode))       /* terminate upon failure? */
        rss_error ("system - failure of system call (status %d)", ret);

    reg = *intConstructor_i(ret);        
}

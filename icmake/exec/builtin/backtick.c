/*
\funcref{fun\_backtick}{void fun\_backtick ()}
    {}
    {}
    {}
    {fun\_exec()}
    {funsyste.c}
    {

        This function expects a  string as last pushed {\em e\_str}
        value. The string is executed through a {\em system()} call (if this
        fails, an error is issued) and the standard output produced by the
        call is returned as a list, one element for each line. If the list
        contains zero elements the command has failed. A command not producing
        any output will at least result in a list having one (empty) string.
    }
*/

#include "builtin.ih"

void fun_backtick()
{
    char const *cmd = stringStr(top());     /* get cmd string */
    FILE *fpipe = popen(cmd, "r");           /* and open a pipe */

    if (echo)                               /* re-echo if requested */
        printf("`%s`\n", cmd);

    reg = *listConstructor();

    if (!fpipe)                          /* command failed */
        return;                         /* then empty list return */

    {
        char *line;

        while ((line = getLine(fpipe)))
            listAdd_swallow_cP(&reg, line);
    }

    pclose(fpipe);
}

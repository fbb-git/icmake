/*
    This function expects a  string as last pushed {\em e\_str}
    value. The string is builtin_executed through a {\em system()} call (if this
    fails, an error is issued) and the standard output produced by the
    call is returned as a list, one builtin_element for each line. If the list
    contains zero builtin_elements the command has failed. A command not
    producing any output will at least result in a list having one (empty)
    string. 
*/

#include "builtin.ih"

void builtin_backtick()
{
    char const *cmd = string_charp(stack_top());     /* get cmd string */
    FILE *fpipe = popen(cmd, "r");           /* and open a pipe */

    if (gb_echo)                               /* re-echo if requested */
        printf("`%s`\n", cmd);

    gb_reg = *listcons();

    if (!fpipe)                          /* command failed */
        return;                         /* then empty list return */

    char *line;

    while ((line = eb_getLine(fpipe)))
        list_add_grab_charPtr(&gb_reg, line);

    pclose(fpipe);
}







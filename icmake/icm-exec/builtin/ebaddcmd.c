/*

    Function {\em eb_addCmd()} expects a pointer to an array of {\em char
    $*$}'s as first argument. This pointer may be {\em NULL}. The {\em
    argv}-like array is expanded to hold a reference to {\em string}.

    The reallocated array {\em cmd} is returned. The last field in the
    array is {\em NULL} to indicate the ending of the list.

    {\bf Note that} a reference to {\em string} itself is not added to the
    list: a duplicate is made.

*/

#include "builtin.ih"

char **eb_addCmd(char **cmd, char *string)
{
    register int
        size = 0;

    if (cmd)
        for (size = 0; cmd[size]; ++size)
            ;

    cmd = rss_realloc(cmd, (size + 2) * sizeof(char *));
    cmd [size] = rss_strdup(string);
    cmd [size + 1] = NULL;

    return cmd;
}

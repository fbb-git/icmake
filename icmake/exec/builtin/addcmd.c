/*
\funcref{addcmd}{char $**$addcmd (\params)}
    {
        {char} {**cmd} {{\em argv}-like array of strings}
        {char} {*string} {string to add to {\em cmd}}
    }
    {resized {\em cmd} to which reference to {\em string} is added}
    {xrealloc()}
    {}
    {addcmd.c}
    {

        Function {\em addcmd()} expects a pointer to an array of {\em char $*$}'s as
        first argument. This pointer may be {\em NULL}. The {\em argv}-like
        array is expanded to hold a reference to {\em string}.

        The reallocated array {\em cmd} is returned. The last field in the
        array is {\em NULL} to indicate the ending of the list.

        {\bf Note that} a reference to {\em string} itself is not added to the
        list: a duplicate is made.

    }
*/

#include "builtin.ih"

char **addcmd (cmd, string)
char **cmd, *string;
{
    register int
        i,
        size = 0;

    if (cmd)
        for (i = 0; cmd [i]; i++)
            size++;

    cmd = xrealloc (cmd, (size + 2) * sizeof (char *));
    cmd [size] = xstrdup (string);
    cmd [size + 1] = NULL;

    return (cmd);
}

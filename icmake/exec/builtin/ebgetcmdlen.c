/*
\funcref{eb_getCmdLen}{int eb_getCmdLen (\params)}
    {
        {char} {**cmd} {{\em argv}-like array}
    }
    {length of command line corresponding to {\em cmd}}
    {}
    {eb_addCmd()}
    {getcmdle.c}
    {

        The length of the command, as represented by {\em cmd}, is returned.
        See {\em eb_addCmd()} for a description of the {\em cmd} array.

    }
*/

#include "builtin.ih"

int eb_getCmdLen (cmd)
char **cmd;
{
    register int
        i,
        len;

    len = 0;
    for (i = 0; cmd [i]; i++)
    {
        len += strlen (cmd [i]);
        len++;
    }

    return (len);
}

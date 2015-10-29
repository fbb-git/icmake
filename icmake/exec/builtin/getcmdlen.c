/*
\funcref{getcmdlen}{int getcmdlen (\params)}
    {
        {char} {**cmd} {{\em argv}-like array}
    }
    {length of command line corresponding to {\em cmd}}
    {}
    {addcmd()}
    {getcmdle.c}
    {

        The length of the command, as represented by {\em cmd}, is returned.
        See {\em addcmd()} for a description of the {\em cmd} array.

    }
*/

#include "builtin.ih"

int getcmdlen (cmd)
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

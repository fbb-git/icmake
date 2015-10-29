/*                          Y O U N G E R  . C

    % 1 name
\funcref {younger}
    % 2 declaration
{int \fname (\params\ )}
    % 3 arguments
{
    {char *}{lval}{name of a file}
    {char *}{rval}{name of a file}
}
    % 4 return value

{
 1: the file \Var{lval} is younger than \Var{rval} or \Var{lval} does't exist.
    \Var{rval} exists.
 0: the reversed condition: the file \Var{lval} is older or as old as
    \Var{rval} (\Var{lval} exists), or \Var{rval} doesn't exist
}
    % 5 functions used
{}
    % 6 see also
{}
    % 7 source file
{younger.c}
    % 8 description
{See the return value description}
*/

#include "rss.ih"

int younger(char const *lval, char const *rval)
{
    struct stat
        lbuf,
        rbuf;

    if (stat(lval, &lbuf))
        lbuf.st_mtime = 0;
    if (stat(rval, &rbuf))
        rbuf.st_mtime = 0;

   return (lbuf.st_mtime > rbuf.st_mtime);
}

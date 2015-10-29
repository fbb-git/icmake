/*                              O L D E R . C

    % 1 name
\funcref {older}
    % 2 declaration
{int \fname (\params\ )}
    % 3 arguments
{
    {char *}{lval}{name of a file}
    {char *}{rval}{name of a file}
}
    % 4 return value
{
 1: the file \Var{lval} is older than \Var{rval} or \Var{rval} does't exist.
    \Var{lval} exists.
 0: the reversed condition: the file \Var{lval} is younger or as old as
    \Var{rval} (\Var{rval} exists), or \Var{lval} doesn't exist
}
    % 5 functions used
{}
    % 6 see also
{}
    % 7 source file
{older.c}
    % 8 description
{See the return value description}
*/

#include "rss.ih"

int older(char const *lval, char const *rval)
{
    struct stat
        lbuf,
        rbuf;

    if (stat(lval, &lbuf))
        lbuf.st_mtime = 0;
    if (stat(rval, &rbuf))
        rbuf.st_mtime = 0;

   return (lbuf.st_mtime < rbuf.st_mtime);
}

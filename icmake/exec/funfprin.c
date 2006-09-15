/*
\funcref{fun\_fprintf}{void fun\_fprintf ()}
    {}
    {}
    {fprintf(), xrealloc()}
    {fun\_exec()}
    {funfprin.c}
    {

        This function prints the arguments to a {\em fprint()} statement,
        pushed onto the stack previously. The number of arguments to print is
        the last pushed value.

        The arguments are: the number of arguments (a hidden parameter), a
        filename, and then the remaining arguments to print.

    }

*/

#include "icm-exec.h"

void fun_fprintf ()
{
    register int
        i,
        nargs;
    int
        newelement;
    register char
        *filename,
        *space,
        *string;
    FILE
        *outf;

    nargs = stack [sp].vu.intval;
    filename = stack [sp - 1].vu.i->ls.str;

    if (! (outf = fopen (filename, "a")) )
        error ("failure to open file \"%s\"", filename);

    for (i = 2; i <= nargs; i += newelement)
    {
        string = getarg (i, &newelement);
        if (stack [sp - i].type & e_list && *string)
            space = " ";
        else
            space = nullstring;
        fprintf (outf, "%s%s", string, space);
        xrealloc (string, 0);
    }

    fclose (outf);

    reg.type = e_int;               /* Set return type to # args printed */
    reg.vu.intval = nargs - 1;
}

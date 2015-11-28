/*
    This function prints the arguments to a {\em fprint()} statement,
    pushed onto the stack previously. The number of arguments to print is
    the last pushed value.

    The arguments are: the number of arguments (a hidden parameter), a
    filename, and then the remaining arguments to print.
*/

#include "builtin.ih"

void b_fprintf()
{
    char const *filename = string_charp(stack_top() - 1);
    FILE *outf;

    if (! (outf = fopen(filename, "a")) )
        rss_fatal(0, 0, "failure to open file \"%s\"", filename);

    intcons_int(eb_releaseReg(), eb_formattedFprintf(outf, 2));

    fclose(outf);
}









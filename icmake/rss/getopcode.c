/*
\funcref{rss_getOpcode}{OPCODE\_ rss_getOpcode (\params)}
    {
        {FILE} {*f} {binary {\em icmake} file}
    }
    {read opcode, or --1 when reading failed}
    {}
    {rss_getString()}
    {getopcod.c}
    {
        Function {\em rss_getOpcode()} attempts to read an opcode from file {\em
        f}. This file must be opened in read/binary mode (see the constant {\em
        "r"} in file {\em icm.h}).

        When the reading operation fails, --1 is returned.
    }

Example:
{\footnotesize
    \begin{verbatim}
        // file 'infile' is assumed to be opened
        OPCODE_
            op;

        if ( (op = rss_getOpcode (f)) == -1 )
            rss_error ("invalid binary makefile");
        process (op);
    \end{verbatim}
} % end footnotesize
*/

#include "rss.ih"

OPCODE_ rss_getOpcode (FILE *f)
{
    char
        op = 0;

    if (! fread (&op, sizeof (char), 1, f) )
        op = (char) -1;

    return ( (OPCODE_) op );
}

/*
\funcref{getopcode}{OPCODE\_ getopcode (\params)}
    {
        {FILE} {*f} {binary {\em icmake} file}
    }
    {read opcode, or --1 when reading failed}
    {}
    {getstring()}
    {getopcod.c}
    {
        Function {\em getopcode()} attempts to read an opcode from file {\em
        f}. This file must be opened in read/binary mode (see the constant {\em
        READBINARY} in file {\em icm.h}).

        When the reading operation fails, --1 is returned.
    }

Example:
{\footnotesize
    \begin{verbatim}
        // file 'infile' is assumed to be opened
        OPCODE_
            op;

        if ( (op = getopcode (f)) == -1 )
            error ("invalid binary makefile");
        process (op);
    \end{verbatim}
} % end footnotesize
*/

#include "rss.ih"

OPCODE_ getopcode (FILE *f)
{
    char
        op = 0;

    if (! fread (&op, sizeof (char), 1, f) )
        op = (char) -1;

    return ( (OPCODE_) op );
}

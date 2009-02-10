/*
\funcref{getstring}{char $*$getstring (\params)}
    {
        {FILE} {*f} {binary file to read from}
        {INT32} {stringsec} {offset of string section within file}
        {UNS16} {stringofs} {offset of string within string section}
    }
    {pointer to read string, or --1 when reading failed}
    {}
    {getopcode()}
    {getstrin.c}
    {
        Function {\em getstring()} can be used to retrieve a string from the
        binary makefile. The string is identified by the offset of the string
        section within the file (the first {\em INT32} value in the file) and
        by the offset of the string itself within the string section.

        {\em getstring()} returns a pointer to allocated memory, holding the
        read string. The caller is responsible for freeing this memory.

        Value --1 is returned when the reading failed; i.e., when file
        positioning failed or when no string was found at the specified
        position.
    }

Example:
{\footnotesize
    \begin{verbatim}
        // assuming 'infile' is opened for the binary file,
        // show the first string in the file (if any)
        INT32
            stringsection;

        rewind (infile);
        fread (&stringsection, sizeof (INT32), 1, infile);
        puts (getstring (infile, stringsection, 0));
    \end{verbatim}
} % end footnotesize
*/


#include "icrssdef.h"
#include "icm.h"

char *getstring (FILE *f, INT32 stringsec, size_t stringofs)
{
    INT32
        curoffs;
    char
        buf [80];
    register char
        *ret = NULL;
    register int
        done = 0;

    curoffs = ftell (f);

    if (fseek (f, stringsec + (INT32)stringofs, SEEK_SET))
        return ( (char *) -1 );

    while (! done)
    {
        if (! fgetz (buf, 79, f))
            return ( (char *) -1);
        ret = xstrcat (ret, buf);
        if (strlen (buf) < 78)
            done++;
    }

    fseek (f, curoffs, SEEK_SET);
    return (ret);
}

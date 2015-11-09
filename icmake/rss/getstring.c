/*
\funcref{rss_getString}{char $*$rss_getString (\params)}
    {
        {FILE} {*f} {binary file to read from}
        {int32_t} {stringsec} {offset of string section within file}
        {uint16_t} {stringofs} {offset of string within string section}
    }
    {pointer to read string, or --1 when reading failed}
    {}
    {rss_getOpcode()}
    {getstrin.c}
    {
        Function {\em getstring()} can be used to retrieve a string from the
        binary makefile. The string is identified by the offset of the string
        section within the file (the first {\em int32_t} value in the file) and
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
        int32_t
            stringsection;

        rewind (infile);
        fread (&stringsection, sizeof (int32_t), 1, infile);
        puts (rss_getString (infile, stringsection, 0));
    \end{verbatim}
} % end footnotesize
*/


#include "rss.ih"

char *rss_getString (FILE *f, int32_t stringsec, size_t stringofs)
{
    int32_t
        curoffs;
    char
        buf [80];
    register char
        *ret = NULL;
    register int
        done = 0;

    curoffs = ftell (f);

    if (fseek (f, stringsec + (int32_t)stringofs, SEEK_SET))
        return ( (char *) -1 );

    while (! done)
    {
        if (! rss_fgetz (buf, 79, f))
            return ( (char *) -1);
        ret = rss_strcat (ret, buf);
        if (strlen (buf) < 78)
            done++;
    }

    fseek (f, curoffs, SEEK_SET);
    return (ret);
}

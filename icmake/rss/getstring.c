/*
        Function {\em getstring()} can be used to retrieve a string from the
        binary makefile. The string is identified by the offset of the string
        section within the file (the first {\em int32_t} value in the file) and
        by the offset of the string itself within the string section.

        {\em getstring()} returns a pointer to allocated memory, holding the
        read string. The caller is responsible for freeing this memory.

        Value --1 is returned when the reading failed; i.e., when file
        positioning failed or when no string was found at the specified
        position.
*/

/* #define msg
*/

#include "rss.ih"

char *rss_getString(FILE *f, int32_t stringsec, size_t stringofs)
{
    int32_t curoffs;
    char buf [80];
    register char *ret = NULL;
    register int done = 0;

    curoffs = ftell(f);

    if (fseek(f, stringsec + (int32_t)stringofs, SEEK_SET))
        return (char *)-1;

    msg("Reading string at offset 0x%x", stringsec + (int32_t)stringofs);

    while (! done)
    {
        if (! rss_fgetz (buf, 79, f))
            return (char *)-1;

        msg("read: %s", buf);

        ret = rss_strcat(ret, buf);


        if (strlen (buf) < 78)
            ++done;
    }

    fseek (f, curoffs, SEEK_SET);
    return ret;
}

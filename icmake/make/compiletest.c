/*
                          C O M P I L E T . C
*/

#include "icmake.ih"

int compile_test()
{
    char buffer[100];
    BinHeader hdr;

    if
    (
        (flags & (f_compiler | f_preprocessor))
        ||
        !rss_exists(dest_name)
    )
        return (1);

    if (!(fdest = fopen(dest_name, rb)))
        rss_error(cant_read, dest_name);

    if (rss_younger(source_name, dest_name))
        return 1;

    hdr = *rss_readHeader(fdest, (size_t)version[0]);

    fseek(fdest, hdr.offset[2], SEEK_SET);  /* go to filenames area */

    while (fgets(buffer, 100, fdest))       /* read the next filename */
    {
        buffer[strlen(buffer) - 1] = 0;     /* remove \n */
        if (rss_younger(buffer, dest_name))     /* source name is younger */
            return 1;                     /* recompilation needed */
    }

    return 0;                             /* binary file up to date */
}





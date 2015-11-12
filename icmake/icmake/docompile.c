#include "icmake.ih"

    /*
        return 1 if compilation is necessary, otherwise return 0
    */
int doCompile()
{
    char buffer[_MAX_PATH];
    BinHeader hdr;

    if
    (
        (flags & (f_compile | f_preprocess))
        ||
        !rss_exists(bimFile)
    )
        return 1;

    if (!(fdest = fopen(bimFile, "rb")))
        rss_error("Can't read `%s'", bimFile);

    if (rss_younger(imFile, bimFile))
        return 1;

    hdr = *rss_readHeader(fdest, (size_t)version[0]);

    fseek(fdest, hdr.offset[2], SEEK_SET);  /* go to filenames area */

    while (fgets(buffer, _MAX_PATH, fdest)) /* read the next filename */
    {
        buffer[strlen(buffer) - 1] = 0;     /* remove \n */
        if (rss_younger(buffer, bimFile))   /* a source name is younger */
            return 1;                       /* so recompilation needed */
    }

    return 0;                             /* binary file up to date */
}





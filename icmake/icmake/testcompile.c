#define msg

#include "icmake.ih"

void testCompile()
{
    char buffer[_MAX_PATH];
    BinHeader hdr;

    if (!rss_exists(bimFile))           /* no bimfile yet       */
        return;                         /* so compilation is required */

    if (!(fdest = fopen(bimFile, "rb")))    /* bimfile exists: open it */
        rss_error("Can't read `%s'", bimFile);

    if (rss_younger(imFile, bimFile))   /* old bim-file: compilation needed */
        return;
                                        /* also check files used for .bim */
    hdr = *rss_readHeader(fdest, (size_t)version[0]);

    fseek(fdest, hdr.offset[2], SEEK_SET);  /* go to filenames area */

    while (fgets(buffer, _MAX_PATH, fdest)) /* read the next filename */
    {
        buffer[strlen(buffer) - 1] = 0;     /* remove \n */
        if (rss_younger(buffer, bimFile))   /* a source name is younger */
            return;                         /* so recompilation needed */
    }

                                            /* no compilation needed */
    flags &= ~(f_doPreProcess | f_rmPim | f_doCompile | f_rmBim);
}







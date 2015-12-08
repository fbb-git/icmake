#define msg

#include "icmake.ih"

void testCompile()
{
    char buffer[MAX_PATHLEN];
    BinHeader hdr;
                                    /* forced compilation or no bimfile yet */
                                    /* then compilation is required         */
    if (flags & f_force || !rss_exists(bimFile)) 
        return;

    if (!(fdest = fopen(bimFile, "rb")))    /* bimfile exists: open it */
        rss_fatal(0, 0, "Can't read `%s'", bimFile);

    if (rss_younger(imFile, bimFile))   /* old bim-file: compilation needed */
        return;
                                        /* also check files used for .bim */
    hdr = *rss_readHeader(fdest, (unsigned)version[0]);

    fseek(fdest, hdr.offset[2], SEEK_SET);  /* go to filenames area */

    while (fgets(buffer, MAX_PATHLEN, fdest)) /* read the next filename */
    {
        buffer[strlen(buffer) - 1] = 0;     /* remove \n */
        if (rss_younger(buffer, bimFile))   /* a source name is younger */
            return;                         /* so recompilation needed */
    }

                                            /* no compilation needed */
    flags &= ~(f_doPreProcess | f_rmPim | f_doCompile | f_rmBim);
}







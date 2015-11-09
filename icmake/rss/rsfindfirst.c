#include "rss.ih"

size_t rs_findFirst(char const * fspec, size_t attrib,
                                        struct find_t_ * fileinfo)
{
    gr_nextGlob = 1;                               /* next globbed name */
                                                /* expand file spec */
    glob(fspec, GLOB_NOCHECK, rs_globerr, &gr_globData);

    if (! gr_globData.gl_pathc)                       /* no files: -1 return */
        return ~0;

    strcpy (fileinfo->name, rs_filename(gr_globData.gl_pathv[0]));
                                                /* synthetise attribute */
    fileinfo->attrib = rs_makeAttribute(gr_globData.gl_pathv[0]);
    if (fileinfo->attrib == 0xdead )
        return ~0;

    return 0;
}






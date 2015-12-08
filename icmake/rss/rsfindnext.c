#include "rss.ih"

unsigned rs_findNext(struct find_t_ * fileinfo)
{
    if (gr_nextGlob >= gr_globData.gl_pathc)             /* done with list ? */
    {
        globfree (&gr_globData);                      /* yes.. free data */
        return ~0;
    }

    strcpy (fileinfo->name,                     /* make next name available */
            rs_filename(gr_globData.gl_pathv [gr_nextGlob]));
                                                /* make attribute */
    fileinfo->attrib = rs_makeAttribute (gr_globData.gl_pathv[gr_nextGlob]);
    ++gr_nextGlob;                                 /* set next name index */

    return 0;
}







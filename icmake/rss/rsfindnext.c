#include "rss.ih"

size_t rsFindNext(struct _find_t * fileinfo)
{
#ifdef HAVE_GLOB

    if (gr_nextGlob >= gr_globData.gl_pathc)             /* done with list ? */
    {
        globfree (&gr_globData);                      /* yes.. free data */
        return ~0;
    }

    strcpy (fileinfo->name,                     /* make next name available */
            filename (gr_globData.gl_pathv [gr_nextGlob]));
                                                /* make attribute */
    fileinfo->attrib = rs_makeAttribute (gr_globData.gl_pathv[gr_nextGlob]);
    ++gr_nextGlob;                                 /* set next name index */
    return 0;

# else

    char buf[_MAX_PATH];

    if (! fscanf (gr_fp, "%s", buf) ||             /* if no more strings, */
        feof (gr_fp)                               /* or at EOF in pipe: */
       )
    {
        fclose (gr_fp);                            /* all done, */
        return ~0;
    }

    strcpy (fileinfo->name, filename (buf));    /* set name, attrib */
    fileinfo->attrib = rs_makeAttribute (buf);       /* file should exist now */

    return 0;                                 /* return success */

#endif
}







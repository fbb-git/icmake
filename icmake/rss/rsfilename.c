#include "rss.ih"

char *rs_filename(char *fname)             /* return pointer into */
{                                               /* fname, just beyond */
    register char *cp;                          /* directory name */

    return (cp = strrchr(fname, DIRSEP)) && *(cp + 1) ?
                cp + 1
            : 
                fname;
}


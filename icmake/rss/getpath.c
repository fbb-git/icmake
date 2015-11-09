#include "rss.ih"

char const *rss_getPath(char const *n)
{
    register int last;

    rs_split(n);
    strcat(gr_drive, gr_dir);
    last = strlen(gr_drive);

    if (
        last 
        && gr_drive [last - 1] != DIRSEP 
        && gr_drive [last - 1] != DRIVESEP
    )
    {
        gr_drive[last] = DIRSEP;
        gr_drive[last + 1] = 0;
    }

    return gr_drive;
}

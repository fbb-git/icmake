#include "rss.ih"

char const *rss_changePath(char const *n, char const *p)
{
    register char *cp;

    rs_split(n);

    if (p)
    {
/*
        if (DRIVESEP && (cp = strchr(p, DRIVESEP)))
        {
            strcpy(gr_drive, p);
            *(strchr(gr_drive, DRIVESEP) + 1) = '\0';
            strcpy(gr_dir, cp + 1);
        }
        else
*/
            strcpy(gr_dir, p);
    }

    rs_join();

    return gr_name;
}

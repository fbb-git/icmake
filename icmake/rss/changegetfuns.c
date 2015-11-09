#include "rss.ih"

char const *change_path (char const *n, char const *p)
{
    register char
        *cp;

    rs_split(n);

    if (p)
    {
        if (DRIVESEP && (cp = strchr (p, DRIVESEP)))
        {
            strcpy (gr_drive, p);
            *(strchr (gr_drive, DRIVESEP) + 1) = '\0';
            strcpy (gr_dir, cp + 1);
        }
        else
            strcpy (gr_dir, p);
    }

    rs_join();

    return gr_name;
}

char const *get_ext(char const *n)
{
    rs_split(n);
    if (*gr_ext == '.')
        return (xstrdup (gr_ext + 1));
    return gr_ext;
}

char const *get_dext(char const *n)     /* including the dot */
{
    rs_split(n);
    return *gr_ext == '.' ? xstrdup(gr_ext) : gr_ext;
}

char const *get_base (char const *n)
{
    rs_split(n);
    return gr_fname;
}

char const *get_path (char const *n)
{
    register int
        last;

    rs_split(n);
    strcat (gr_drive, gr_dir);
    last = strlen (gr_drive);
    if (last && gr_drive [last - 1] != DIRSEP && gr_drive [last - 1] != DRIVESEP)
    {
        gr_drive[last] = DIRSEP;
        gr_drive[last + 1] = (char)0;
    }

    return gr_drive;
}

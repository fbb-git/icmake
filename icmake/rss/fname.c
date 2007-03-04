#include "icrssdef.h"

static char
    name [_MAX_PATH],
    drive [_MAX_PATH],
    dir [_MAX_PATH],
    fname [_MAX_PATH],
    ext [_MAX_PATH];

static void split (char const *n)
{
    _splitpath (n, drive, dir, fname, ext);
}

static void join (void)
{
    _makepath (name, drive, dir, fname, ext);
}

char const *change_ext (char const *n, char const *e)
{
    split (n);
    *ext = 0;
    if (e)
        strcpy (ext, e);
    join ();
    return name;
}

char const *change_base (char const *n, char const *b)
{
    split (n);
    *fname = 0;
    if (b)
        strcpy (fname, b);
    join ();
    return name;
}

char const *change_path (char const *n, char const *p)
{
    register char
        *cp;

    split (n);

    if (p)
    {
        if (DRIVESEP && (cp = strchr (p, DRIVESEP)))
        {
            strcpy (drive, p);
            *(strchr (drive, DRIVESEP) + 1) = '\0';
            strcpy (dir, cp + 1);
        }
        else
            strcpy (dir, p);
    }

    join ();

    return name;
}

char const *get_ext (char const *n)
{
    split (n);
    if (*ext == '.')
        return (xstrdup (ext + 1));
    return ext;
}

char const *get_base (char const *n)
{
    split (n);
    return fname;
}

char const *get_path (char const *n)
{
    register int
        last;

    split (n);
    strcat (drive, dir);
    last = strlen (drive);
    if (last && drive [last - 1] != DIRSEP && drive [last - 1] != DRIVESEP)
    {
        drive[last] = DIRSEP;
        drive[last + 1] = (char)0;
    }

    return drive;
}

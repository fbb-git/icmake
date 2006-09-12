/*
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "../icm.h"
*/

#include "icrssdef.h"

static char
    name [_MAX_PATH],
    drive [_MAX_PATH],
    dir [_MAX_PATH],
    fname [_MAX_PATH],
    ext [_MAX_PATH];

static void split (char *n)
{
    _splitpath (n, drive, dir, fname, ext);
}

static void join ()
{
    _makepath (name, drive, dir, fname, ext);
}

char *change_ext (char *n, char *e)
{
    split (n);
    *ext = 0;
    if (e)
        strcpy (ext, e);
    join ();
    return (xstrdup (name));
}

char *change_base (char *n, char *b)
{
    split (n);
    *fname = 0;
    if (b)
        strcpy (fname, b);
    join ();
    return (xstrdup (name));
}

char *change_path (char *n, char *p)
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

    return (xstrdup (name));
}

char *get_ext (char *n)
{
    split (n);
    if (*ext == '.')
        return (xstrdup (ext + 1));
    return (xstrdup (ext));
}

char *get_base (char *n)
{
    split (n);
    return (xstrdup (fname));
}

char *get_path (char *n)
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

    return (xstrdup (drive));
}

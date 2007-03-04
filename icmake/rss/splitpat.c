/*
    splitpath.c pwp 93 07 14
    replacement function for _splitpath
    for NON-MSDOS systems ONLY

    Parameters:
        path:   source path to be split

    The drive, dir fname, ext parameters are buffers provided by the
        caller; they should be large enough; this is NOT checked

        drive:  drive part of path, will be set to empty string
        dir:    directory part of path;
                if found, contains the leading DIRSEP
        fname:  the base file name without extensions
        ext:    the extension, if any, including the
                leading period
*/

#include "icrssdef.h"

void _splitpath(const char * path,
    char * drive, char * dir, char * fname, char * ext)
{

    char
        * p;

    drive[0] = '\x0';

    if ( (p = strrchr(path, DIRSEP)) )
    {
        char
            fname_first;

        fname_first = *(++p);
        *p = '\x0';
        strcpy(dir, path);
        *p = fname_first;
        path = p;               /*  path now points to filename part    */
    }
    else
        dir[0] = '\x0';

    if ( (p = strrchr(path, '.')) )
    {
        *p = '\x0';
        strcpy(fname, path);
        *p = '.';
        strcpy(ext, p);
    }
    else
    {
        strcpy(fname, path);
        ext[0] = '\x0';
    }
}


/*
    makepath.c pwp 93 07 14
    replacement function _makepath
    for NON-MSDOS systems ONLY

    Arguments:
        path:   buffer to contain the combined name; length _MAX_PATH
                this is NOT checked

        drive:  pointer to drive specifier; ignored
        dir:    directory string, can be NULL or empty ("");
                if not-empty, may have a trailing DIRSEP character
        fname:  basename string, can be NULL or empty ("")
        ext:    extension string, can be NULL or empty ("");
                if not empty, can have optional leading dot

*/

#include <stdio.h>
#include <string.h>
#include "icm.h"
#include "icrssdef.h"

static char
    dot[] = ".";

void _makepath(char * path,
    const char * drive, const char * dir, const char * fname, const char * ext)
{
    path[0] = '\x0';                        /*  prepare for strcats */

    if (dir && dir[0])
    {
        strcat(path, dir);

        if (dir[strlen(dir) - 1] != DIRSEP)
        {
            size_t l;

            path[l = strlen(path)] = DIRSEP;
            path[++l] = '\x0';              /*  make it an asciiz   */
        }
    }

    if (fname && fname[0])
        strcat(path, fname);

    if (ext && ext[0])
    {
        if (ext[0] != dot[0])
            strcat(path, dot);

        strcat(path, ext);
    }
}

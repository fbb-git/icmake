/*
    NON-MSDOS file name resulution emulation function.

    note: the _dos_findfirst/findnext emulation is controlled by the
    define HAVE_GLOB. If your setup has a function glob(), set HAVE_GLOB in
    main makefile and go for it. glob() must follow the syntaxis:

       #include <glob.h>
       int glob(const char *pattern, int flags,
                int errfunc(const char * epath, int eerrno),
                glob_t *pglob);
       void globfree(glob_t *pglob);

    This is the normal GNU C (Linux) glob() function.

    If you don't have glob(), don't set it. You will then get a poor man's
    solution: a pipe to a command "echo <pattern>", from which filenames
    are read.
*/

#ifdef HAVE_GLOB
#   include <glob.h>
#endif

#include "icrssdef.h"

#ifdef HAVE_GLOB
static glob_t
    gdata;                                      /* globbing struct */
static size_t
    nextglob;                                   /* next name in list */
#else
static FILE
    *fp = NULL;                                 /* echo program pipe */
#endif

static char *filename (char *fname)             /* return pointer into */
{                                               /* fname, just beyond */
    register char                               /* directory name */
        *cp;

    if (
           (cp = strrchr (fname, DIRSEP))
           &&
           *(cp + 1)
        )
         return (cp + 1);

    return (fname);
}

static int make_attrib (char *fname)            /* make DOS attribs */
{
    register int
        ret = 0;                                /* returned attribute */
    struct stat
        statbuf;                                /* stat () buffer */

    if (stat (fname, &statbuf) == -1)           /* if not stat-able .. */
        return (0xdead);                        /* dead flag return */

    if (S_ISDIR(statbuf.st_mode))               /* directory entry */
        ret |= A_SUBDIR;

    if (!(statbuf.st_mode & S_IWUSR))           /* S_IWRITE: not POSIX */
        ret |= A_RDONLY;                        /* non-writable entry */

    if (*fname == '.' &&                        /* .file */
        strcmp (fname, ".") &&
        strcmp (fname, "..")
       )
        ret |= A_HIDDEN;

    return (ret);                               /* return attrib */
}

#ifdef HAVE_GLOB
/* glob() error handler
   returns 0: signal for glob to ignore the error
*/
static int globerr (const char *path, int errnr)
{
    return (0);
}
#endif
                                                /* dos_findfirst emulator */
                                                /* ignores attribute! */
size_t _dos_findfirst(char const * fspec, size_t attrib,
    struct _find_t * fileinfo)
{
#ifdef HAVE_GLOB
    nextglob = 1;                               /* next globbed name */
                                                /* expand file spec */
    glob (fspec, GLOB_NOCHECK, globerr, &gdata);

    if (! gdata.gl_pathc)                       /* no files: -1 return */
        return (size_t)-1;

    strcpy (fileinfo->name, filename (gdata.gl_pathv[0]));
                                                /* synthetise attribute */
    if ( (fileinfo->attrib = make_attrib (gdata.gl_pathv[0])) == 0xdead )
        return (size_t)-1;

    return (0);
#else
    char
        buf[_MAX_PATH];                         /* filename buf */

    sprintf (buf, "echo %s", fspec);            /* open new pipe */
    if (!(fp = popen(buf, "r")) ||              /* read first name */
        !fscanf (fp, "%s", buf)
       )
    {
        fclose (fp);
        return -1;
    }

    strcpy (fileinfo->name, filename (buf));    /* set name and attribute */

                                                /* if non-existing.. */
    if ((fileinfo->attrib = make_attrib (buf)) == 0xdead)
        return (-1);

    return (0);                                 /* return success */
#endif
}

size_t _dos_findnext(struct _find_t * fileinfo)
{
#ifdef HAVE_GLOB
    if (nextglob >= gdata.gl_pathc)             /* done with list ? */
    {
        globfree (&gdata);                      /* yes.. free data */
        return (size_t)-1;
    }

    strcpy (fileinfo->name,                     /* make next name available */
            filename (gdata.gl_pathv [nextglob]));
                                                /* make attribute */
    fileinfo->attrib = make_attrib (gdata.gl_pathv[nextglob]);
    nextglob++;                                 /* set next name index */
    return (0);
#else
    char
        buf[_MAX_PATH];

    if (! fscanf (fp, "%s", buf) ||             /* if no more strings, */
        feof (fp)                               /* or at EOF in pipe: */
       )
    {
        fclose (fp);                            /* all done, */
        return -1;
    }

    strcpy (fileinfo->name, filename (buf));    /* set name, attrib */
    fileinfo->attrib = make_attrib (buf);       /* file should exist now */
    return (0);                                 /* return success */
#endif
}


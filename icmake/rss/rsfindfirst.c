/*
    NON-MSDOS file name resulution emulation function.

    note: the _dos_findfirst/findnext emulation is controlled by the
    define HAVE_GLOB. If your setup has a function glob(), set HAVE_GLOB in
    main makefile and go for it. glob() must follow the syntaxis:

       #include <glob.h>
       int glob(char const *pattern, int flags,
                int errfunc(char const * epath, int eerrno),
                glob_t *pglob);
       void globfree(glob_t *pglob);

    This is the normal GNU C (Linux) glob() function.

    If you don't have glob(), don't set it. You will then get a poor man's
    solution: a pipe to a command "echo <pattern>", from which filenames
    are read.
*/

#include "rss.ih"
                                                /* dos_findfirst emulator */
                                                /* ignores attribute! */
size_t rsFindFirst(char const * fspec, size_t attrib,
                                        struct _find_t * fileinfo)
{
#ifdef HAVE_GLOB

    gr_nextGlob = 1;                               /* next globbed name */
                                                /* expand file spec */
    glob (fspec, GLOB_NOCHECK, globerr, &gr_globData);

    if (! gr_globData.gl_pathc)                       /* no files: -1 return */
        return ~0;

    strcpy (fileinfo->name, filename (gr_globData.gl_pathv[0]));
                                                /* synthetise attribute */
    fileinfo->attrib = rs_makeAttribute(gr_globData.gl_pathv[0]);
    if (fileinfo->attrib == 0xdead )
        return ~0;

    return 0;

#else

    char buf[_MAX_PATH];                         /* filename buf */

    sprintf (buf, "echo %s", fspec);            /* open new pipe */
    if (!(gr_fp = popen(buf, "r")) ||              /* read first name */
        !fscanf (gr_fp, "%s", buf)
       )
    {
        fclose (gr_fp);
        return ~0;
    }

    strcpy (fileinfo->name, filename (buf));    /* set name and attribute */

                                                /* if non-existing.. */
    if ((fileinfo->attrib = rs_makeAttribute (buf)) == 0xdead)
        return ~0;

    return 0;                                 /* return success */

#endif
}






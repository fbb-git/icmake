/*
\funcref{fun\_stat}{void fun\_stat ()}
    {}
    {}
    {}
    {fun\_exec()}
    {funsyste.c}
    {

        This function expects a filename as last pushed {\em e\_str}
        value. The file attributes are retrieved by a {\em stat ()} call and
        the return register is set to the type {\em e\_list}. This list
        returns the following information:

        \begin{itemize}

            \item The first element represents the file attributes.

            \item The second element represents the file size.

        \end{itemize}

    }
*/

#include "builtin.ih"

void fun_stat ()
{
    struct stat statbuf;                        /* file stat buffer */
    int fileatt = 0;                            /* file attributes */

    int mode = intValue(top());                 /* get mode arg */
    char const *fname = stringStr(top() - 1);   /* get file name */

    reg = *listConstructor();                    /* return result as list */

    if (stat (fname, &statbuf))                 /* do stat call */
    {                                           /* failure to stat? */
        if (P_CHECKMODE (mode))                 /* if mode indicates abort..*/
            error ("stat - unable to stat file %s", fname);

        return;                                 /* no checking: return */

    }                                           /* empty list */

    if (statbuf.st_mode & S_IREAD)              /* set file attribute int */
        fileatt |= IS_IREAD;
    if (statbuf.st_mode & S_IWRITE)
        fileatt |= IS_IWRITE;
    if (statbuf.st_mode & S_IEXEC)
        fileatt |= IS_IEXEC;
    if (statbuf.st_mode & S_IFDIR)
        fileatt |= IS_IFDIR;
    if (statbuf.st_mode & S_IFCHR)
        fileatt |= IS_IFCHR;
    if (statbuf.st_mode & S_IFREG)
        fileatt |= IS_IFREG;

    {
        char buf [80];                          /* conversion buf */
        sprintf (buf, "%u", fileatt);           /* file attr --> string */
        listAdd_cP(&reg, buf);                     /* = element #0 */

        sprintf(buf, "%ld",                     /* file size --> string */
                    (long)statbuf.st_size);     /* = element #1 */

        listAdd_cP(&reg, buf);
    }
}




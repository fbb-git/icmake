/*
    This function expects a filename as last pushed {\em e\_str}
    value. The file attributes are retrieved by a {\em stat ()} call and
    the return register is set to the type {\em e\_list}. This list
    returns the following information:

    \begin{itemize}

        \item The first b_element represents the file attributes.

        \item The second b_element represents the file size.

    \end{itemize}
*/

#include "builtin.ih"

void b_stat()
{
    struct stat statbuf;                        /* file stat buffer */
    int fileatt = 0;                            /* file attributes */

    int mode = int_value(stack_top());                 /* get mode arg */
    char const *fname = string_charp(stack_top() - 1);   /* get file name */

    if (stat(fname, &statbuf))                  /* do stat call */
    {                                           /* failure to stat? */
        if (rss_checkMode (mode))                 /* if mode indicates abort..*/
            rss_fatal(0, 0, "stat - unable to stat file %s", fname);
        statbuf.st_size = -1;
    }                                           /* empty list */
    else
    {
        if (statbuf.st_mode & S_IREAD)          /* set file attribute int */
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
    }

    listcons(eb_releaseReg());                  /* return result as list */

    char buf[80];                          /* conversion buf */

    sprintf(buf, "%u", fileatt);           /* file attr --> string */
    list_add_charPtr(&gb_reg, buf);                     /* = b_element #0 */

    sprintf(buf, "%ld",                     /* file size --> string */
                (long)statbuf.st_size);     /* = b_element #1 */
    list_add_charPtr(&gb_reg, buf);
}




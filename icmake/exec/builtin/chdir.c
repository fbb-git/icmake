/*
\funcref{fun\_chdir}{void fun\_chdir ()}
    {}
    {}
    {}
    {}
    {funchdir.c}
    {

        This function expects a string to {\em chdir} to as second-but-last 
        argument on the stack.  The last argument is the mode, {\em 
        P\_CHECK} or {\em P\_NOCHECK}.  If the directory name is a non-null 
        string, then the current working directory is set to the indicated 
        path.  If the requested directory is an empty string, then a 
        change-dir is performed to the startup directory.  
        
        Modifier {\em P\_CHECK} causes this function to abort upon failure.

        Return register {\em reg} is set to type {\em e\_str}. The value of 
        the return register is set to the obtained working directory.  This 
        may not be the requested directory if the {\em chdir} fails.  

    }
*/

#include "builtin.ih"

static char dirsep[2] = {DIRSEP};

void fun_chdir ()
{
    register char *dir = xstrdup(stringStr(top() - 1)); /* duplicate dest */
    register char *last;
    register int mode = intValue(top());    /* mode of operation */
    char newdir [_MAX_PATH];
        
    if (! *dir)                         /* empty dest: */
        dir = xstrdup(orgdir);          /* change to org dir */

    last = dir + strlen (dir) - 1;      /* remove dir */
    if 
    ( 
        last != dir &&                 /* separator */
        (*last == '\\' || *last == '/') &&
        *(last - 1) != ':'
    )
        *last = 0;

    if (chdir(dir) && P_CHECKMODE(mode))                /* go to dir */
        error ("chdir - can't change dir to %s", dir);  /* or quit if */
                                                        /* P_CHECK is on */
    free(dir);
    
    getcwd (newdir, _MAX_PATH);                     /* return value: */

    if (newdir[strlen(newdir) - 1] != DIRSEP)       /* cwd */
        strcat (newdir, dirsep);

    reg = *stringConstructor_cP(newdir);
}

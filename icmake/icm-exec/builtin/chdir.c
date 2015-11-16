/*
    This function expects a string to {\em builtin_chDir} to as second-but-last 
    argument on the stack.  The last argument is the mode, {\em 
    P\_CHECK} or {\em P\_NOCHECK}.  

    If the directory name is a non-null string, then the current working
    directory is set to the indicated path.  If the requested directory is an
    empty string, then a change-dir is performed to the startup directory.
    
    Modifier {\em P\_CHECK} causes this function to abort upon failure.

    Return register {\em reg} is set to type {\em e\_str}. The value of 
    the return register is set to the obtained working directory.  This 
    may not be the requested directory if the {\em builtin_chDir} fails.  
*/

/* #define msg
*/

#include "builtin.ih"

static char dirsep[2] = {DIRSEP};

void builtin_chDir()
{
                                        /* copy the destination */
    register char *dir = rss_strdup(stringStr(top() - 1)); 
    register int mode = intValue(top());    /* obtain the mode of operation */
    char newdir[MAX_PATHLEN];
        
    if (!*dir)                          /* destination is an empty string:  */
    {
        free(dir);
        dir = rss_strdup(orgdir);       /* change to the startup dir        */
    }

    if (chdir(dir) && rss_checkMode(mode))    /* cd to the directory          */
        rss_error ("builtin_chDir - can't change dir to %s", dir);  

    free(dir);
    
                                        /* at the new destination: obtain   */
    getcwd(newdir, MAX_PATHLEN);   /* its absolute pathname            */

    if (newdir[strlen(newdir) - 1] != DIRSEP)   /* and append a DIRSEP      */
        strcat(newdir, dirsep);

    reg = *stringConstructor_cP(newdir);    /* set the return value in reg  */
}





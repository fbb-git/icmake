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

#include "icm-exec.h"

void fun_chdir ()
{
    register char
        *dir,
        *last;
    register int
    	mode;						/* mode of operation */
    char
        newdir [_MAX_PATH];
    static char
    	dirsep [2] = { DIRSEP, '\0' };
    	
    mode = stack [sp].vu.intval;			/* get mode */
    dir  = xstrdup (stack [sp - 1].vu.i->ls.str);	/* duplicate dest */

    if (! *dir)						/* empty dest: */
        dir = orgdir;					/* change to org dir */

    last = dir + strlen (dir) - 1;			/* remove dir */
    if ( last != dir &&					/* separator */
         (*last == '\\' || *last == '/') &&
         *(last - 1) != ':'
       )
        *last = '\0';

    if (chdir (dir) && P_CHECKMODE (mode))		/* go to dir */
    	error ("chdir - can't change dir to %s", dir);	/* or quit if */
    							/* P_CHECK is on */
    
    xrealloc (dir, 0);					/* free duplicate */
    
    getcwd (newdir, _MAX_PATH);				/* return value: */
    if (newdir [strlen (newdir) - 1] != DIRSEP)		/* cwd */
        strcat (newdir, dirsep);

    reg = newvar (e_str);
    reg.vu.i->ls.str = xstrdup (newdir);
}

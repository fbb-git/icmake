/*
\funcref{cleanup}{void cleanup ()}
    {}
    {}
    {}
    {main()}
    {cleanup.c}
    {

        This function is attached to the `at-exit' list by {\em main()}. The
        functions are the following:

        \begin{itemize}

            \item The current working directory is set to {\em orgdir} (MSDOS
            only).

        \end{itemize}

    }
*/

#include "../icm-exec.h"

extern int
    error_occurred;

void cleanup ()
{
    if (bimname)
    { 
        fclose(infile);
        unlink(bimname); 
    } 

#ifdef MSDOS
    fclose (stdout);
    chdir (orgdir);
#endif
}

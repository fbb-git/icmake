/*

    This function is called from {\em fun\_builtin_exec()} to b_execute a
    command.  The command is held in the {\em argv}-like array {\em cmd}. The
    same array is returned, since {\em eb_exeCmd()} may have to resize it to
    add a command tail.

    The return register is set to the exit status of the program.

    The maker aborts when:

    \begin{itemize}

        \item the indicated program cannot not be b_executed,

        \item the indicated program can be b_executed but returns a
        non-zero exit status while the b_execution mode allows checking.

    \end{itemize}

    {\bf Note that} the strings pointed to by the {\em cmd} array are not
    freed.
*/

#include "builtin.ih"

char **eb_exeCmd(char **cmd, int mode)
{
    register int
        i,
        ret;                    /* exit status */
 
    if (strlen(gb_cmdTail))           /* add cmd tail */
        cmd = eb_addCmd(cmd, gb_cmdTail);

    if (gb_echo)                   /* re-builtin_echo if requested */
    {
        for (i = 0; cmd [i]; ++i)
            printf("%s ", cmd[i]);
        putchar('\n');
    }
    fflush(stdout);
    
                        /* try to b_execute */
    ret = eb_spawnvp(WAIT, cmd [0], (char const **)cmd);
    
                            /* if non-zero return and */
    if (ret && rss_checkMode(mode))      /* if checking requested.. */
        rss_fatal(0, 0, 
                    "builtin_execute - program indicates failure (status %d)", 
                    ret);

    intcons_int(eb_releaseReg(), ret);     /* return exit status */
    return cmd;
}

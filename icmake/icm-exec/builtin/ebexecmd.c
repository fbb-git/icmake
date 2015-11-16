/*
\funcref{eb_exeCmd}{char $**$eb_exeCmd (\params)}
    {
        {char} {**cmd} {{\em argv}-like array of command}
        {int} {mode} {builtin_execution mode}
    }
    {spawn\_err(), rss_error()}
    {fun\_builtin_exec()}
    {eb_exeCmd.c}
    {

        This function is called from {\em fun\_builtin_exec()} to builtin_execute a command.
        The command is held in the {\em argv}-like array {\em cmd}. The same
        array is returned, since {\em eb_exeCmd()} may have to resize it to add a
        command tail.

        The return register is set to the exit status of the program.

        The maker aborts when:

        \begin{itemize}

            \item the indicated program cannot not be builtin_executed,

            \item the indicated program can be builtin_executed but returns a
            non-zero exit status while the builtin_execution mode allows checking.

        \end{itemize}

        {\bf Note that} the strings pointed to by the {\em cmd} array are not
        freed.
    }
*/

#include "builtin.ih"

char **eb_exeCmd (cmd, mode)
char **cmd;
int mode;
{
    register int
        i,
        ret;                    /* exit status */
 
    if (strlen(cmdtail))           /* add cmd tail */
        cmd = eb_addCmd(cmd, cmdtail);

    if (echo)                   /* re-builtin_echo if requested */
    {
        for (i = 0; cmd [i]; ++i)
            printf("%s ", cmd[i]);
        putchar('\n');
    }
    fflush(stdout);
    
                        /* try to builtin_execute */
    ret = eb_spawnvp(WAIT, cmd [0], (char const **)cmd);
    
                            /* if non-zero return and */
    if (ret && rss_checkMode(mode))      /* if checking requested.. */
        rss_error("builtin_execute - program indicates failure (status %d)", 
                                                                        ret);

    reg = *intcons_int(ret);     /* return exit status */
    return cmd;
}

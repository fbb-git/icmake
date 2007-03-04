/*
\funcref{execmd}{char $**$execmd (\params)}
    {
        {char} {**cmd} {{\em argv}-like array of command}
        {int} {mode} {execution mode}
    }
    {spawn\_err(), error()}
    {fun\_exec()}
    {execmd.c}
    {

        This function is called from {\em fun\_exec()} to execute a command.
        The command is held in the {\em argv}-like array {\em cmd}. The same
        array is returned, since {\em execmd()} may have to resize it to add a
        command tail.

        The return register is set to the exit status of the program.

        The maker aborts when:

        \begin{itemize}

            \item the indicated program cannot not be executed,

            \item the indicated program can be executed but returns a
            non-zero exit status while the execution mode allows checking.

        \end{itemize}

        {\bf Note that} the strings pointed to by the {\em cmd} array are not
        freed.
    }
*/

#include "builtin.ih"

char **execmd (cmd, mode)
char **cmd;
int mode;
{
    register int
        i,
        ret;                    /* exit status */
 
    if (strlen (cmdtail))           /* add cmd tail */
        cmd = addcmd (cmd, cmdtail);

    if (echo)                   /* re-echo if requested */
    {
        for (i = 0; cmd [i]; i++)
            printf ("%s ", cmd [i]);
        putchar ('\n');
    }
    fflush (stdout);
    
#ifdef MSDOS    
    _heapmin ();                /* max memory under DOS */
#endif    

                        /* try to execute */
    ret = _spawnvp (P_WAIT, cmd [0], (const char **) cmd);
    
                            /* if non-zero return and */
    if (ret && P_CHECKMODE (mode))      /* if checking requested.. */
        error ("execute - program indicates failure (status %d)", ret);

    reg = *intConstructor_i(ret);     /* return exit status */
    return (cmd);
}

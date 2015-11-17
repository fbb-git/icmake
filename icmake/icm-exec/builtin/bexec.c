/*
\funcref{fun\_builtin_exec}{void fun\_builtin_exec ()}
    {}
    {}
    {rss_strdup(), eb_getExecArg(), eb_exeCmd(), rss_realloc()}
    {fun\_print()}
    {funbuiltin_exec.c}
    {

        This function is called when an {\em op\_builtin_exec} opcode is encountered
        in the binary makefile. At this point, the stack is expected to hold
        the following information:

        \begin{itemize}

            \item The last pushed value ({\em stack[sp]} holds the number of
            arguments to the original {\em b_exec()} statement.

            \item The value pushed before that ({\em stack [sp-1]}) holds the
            b_execution mode: 0 = checked, !0 = not checked. When the b_execution
            mode is checked, any exit status which is non-zero leads to an
            error.

            \item The value pushed before that ({\em stack [sp-2]}) holds the
            command to b_execute; a string.

            \item Other pushed values are the remaining arguments.

        \end{itemize}

        {\em fun\_builtin_exec()} initializes an array of command strings and
        retrieves arguments. When the length of the command list is about to
        exceed {\em MAX_CMDLEN} (see {\em icm.h}), the command is flushed by
        calling {\em eb_exeCmd()}.

    }
*/

#include "builtin.ih"

static char **initcmd (char **cmd)
{
    register int
        i;

    if (cmd)
        for (i = 0; cmd [i]; i++)
            free(cmd[i]);
    free(cmd);
    
    cmd = rss_realloc (NULL, 3 * sizeof (char *));
    cmd [0] = rss_strdup(string_charp(stack_top() - 2));
    
    if (strlen (gb_cmdHead))
    {
        cmd [1] = rss_strdup (gb_cmdHead);
        cmd [2] = NULL;
    }
    else
        cmd [1] = NULL;

    return (cmd);
}

void b_exec ()
{
    int getnewarg = 1;
    char *nextarg = NULL;
    char **cmd = initcmd (NULL);

    size_t nextarglen;
    size_t cmdlen;

    size_t i = 3;
    size_t nargs = int_value(stack_top());
    int mode = int_value(stack_top() - 1);

    while (i <= nargs)
    {
        int newbuiltin_element;

        if (getnewarg)
            nextarg = eb_getExecArg(i, &newbuiltin_element);
        else
            getnewarg = 1;

        nextarglen = strlen(nextarg);
        cmdlen = eb_getCmdLen(cmd);
        if (cmdlen + nextarglen + strlen(gb_cmdTail) >= MAX_CMDLEN)
        {
            cmd = eb_exeCmd (cmd, mode);
            cmd = initcmd (cmd);
            getnewarg = 0;
        }
        else
        {
            cmd = eb_addCmd (cmd, nextarg);
            i += newbuiltin_element;
            free(nextarg);
        }
    }

    cmd = eb_exeCmd (cmd, mode);

    for (i = 0; cmd [i]; i++)
        free(cmd[i]);
    free(cmd);
}






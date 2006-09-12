/*
\funcref{fun\_exec}{void fun\_exec ()}
    {}
    {}
    {xstrdup(), getexecarg(), execmd(), xrealloc()}
    {fun\_print()}
    {funexec.c}
    {

        This function is called when an {\em op\_exec} opcode is encountered
        in the binary makefile. At this point, the stack is expected to hold
        the following information:

        \begin{itemize}

            \item The last pushed value ({\em stack[sp]} holds the number of
            arguments to the original {\em exec()} statement.

            \item The value pushed before that ({\em stack [sp-1]}) holds the
            execution mode: 0 = checked, !0 = not checked. When the execution
            mode is checked, any exit status which is non-zero leads to an
            error.

            \item The value pushed before that ({\em stack [sp-2]}) holds the
            command to execute; a string.

            \item Other pushed values are the remaining arguments.

        \end{itemize}

        {\em fun\_exec()} initializes an array of command strings and
        retrieves arguments. When the length of the command list is about to
        exceed {\em MAXCMDLEN} (see {\em icm.h}), the command is flushed by
        calling {\em execmd()}.

    }
*/

#include "icm-exec.h"

static char **initcmd (cmd)
char **cmd;
{
    register int
        i;

    if (cmd)
        for (i = 0; cmd [i]; i++)
            xrealloc (cmd [i], 0);
    xrealloc (cmd, 0);
    
    cmd = xrealloc (NULL, 3 * sizeof (char *));
    cmd [0] = xstrdup (stack [sp - 2].vu.i->ls.str);
    
    if (strlen (cmdhead))
    {
        cmd [1] = xstrdup (cmdhead);
        cmd [2] = NULL;
    }
    else
        cmd [1] = NULL;

    return (cmd);
}

void fun_exec ()
{
    register int
        i,
        nargs,
        mode,
        nextarglen,
        cmdlen,
        getnewarg;
    int
        newelement;
    register char
        *nextarg = NULL,
        **cmd;

    nargs = stack [sp].vu.intval;
    mode  = stack [sp - 1].vu.intval;

    cmd = initcmd (NULL);

    i = 3;
    getnewarg = 1;
    while (i <= nargs)
    {
        if (getnewarg)
            nextarg = getexecarg (i, &newelement);
        else
            getnewarg = 1;
        nextarglen = strlen (nextarg);
        cmdlen = getcmdlen (cmd);
        if (cmdlen + nextarglen + strlen (cmdtail) >= MAXCMDLEN)
        {
            cmd = execmd (cmd, mode);
            cmd = initcmd (cmd);
            getnewarg = 0;
        }
        else
        {
            cmd = addcmd (cmd, nextarg);
            i += newelement;
            xrealloc (nextarg, 0);
        }
    }

    cmd = execmd (cmd, mode);

    for (i = 0; cmd [i]; i++)
    	xrealloc (cmd [i], 0);
    xrealloc (cmd, 0);
}

/*                              G E T O P T . C

    % 1 name
\functoc {getopt}
    % 2 declaration
{int \fname (\params\ )}
    % 3 arguments
{
    {int *}{p_argc}{pointer to argument counter}
    {char **}{argv}{pointer to argument strings}
}
    % 4 return value
{The character value of the next option or -1 if no more options were found}
    % 5 functions used
{}
    % 6 see also
{getoptval, setoptchars, getoptindex}
    % 7 source file
{getopt.c}
    % 8 description
{The function scans the strings in the \Var{argv} array for the next
occurrence of an option character, and returns the character(s) immediately
following it. If no (more) option characters were found -1 is returned. The
value 0 is returned if the separator character is not followed by another
character as in, e.g.,
\begin{center}
    {\tt program -}
\end{center}
The function will reduce the value of \Var{*p_argc}, and will remove the option
from the \Var{argv} array.

However, if multiple characters follow the option character (e.g, -more), then
the individual characters are returned as successive option characters (in the
example: {\tt m, o, r, e}, respectively).

The switchcharacters may be defined by function \Function{setoptchar}, and
contains initially the characters {\tt `-'} and {\tt `/'}.
}
    % 9 example
{}
\footnotesize
\begin{verbatim}

#include <icce.h>

void main(int argc, char **argv)
{
    int
        c;

    while ((c = getopt(&argc, argv)) != -1)
        process_option(c);

    if (argc == 1)
        usage(argv);

    rest_of_program();
}

\end{verbatim}
\normalsize
*/

#include <stdio.h>
#include <string.h>
#include "icrssdef.h"

char
    *icce_beyond_optchar,              /* no character beyond optchar yet */
    *icce_optchar = "-",
    *icce_optval;

int
    icce_next_option = 0;


int ic_getopt(int *p_argc, char **argv)
{
    register int
        argc,
        index;
    char
        **org_argv;

    while (1)
    {
        if (icce_beyond_optchar)                 /* option found ? */
        {
            if (*icce_optval)              /* return next option character */
                return (*icce_optval++);

            if (!*icce_beyond_optchar)           /* no immediate option char */
            {
                icce_beyond_optchar = NULL;      /* option processed */
                return (0);
            }
            else
                icce_beyond_optchar = NULL;      /* option processed */
        }

        org_argv = argv;                        /* save original address */
        argv += icce_next_option;               /* point to next option string */
        argc = *p_argc;                         /* local argc counter */

        for
        (                                       /* walk along the options */
            index = icce_next_option;
                index < argc;                   /* as long as there are args */
                    index++, argv++             /* do next after code */
        )
        {
            if (strchr(icce_optchar, **argv))  /* option found ? */
            {
                icce_next_option = index;   /* prepare for next call */

                icce_optval = *argv + 1;    /* optval points to option string */
                icce_beyond_optchar = icce_optval;

                while (++index <= argc)     /* shift the argv's + extra NULL */
                    org_argv[index - 1] = org_argv[index];
                (*p_argc)--;                /* reduce external count */
            }
        }

        if (!icce_beyond_optchar)                /* no (more) options */
            return (-1);
    }
}

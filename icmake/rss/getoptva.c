/*                              G E T O P T V A . C

    % 1 name
\functoc {getoptval}
    % 2 declaration
{char *\fname (\params\ )}
    % 3 arguments
{
    {int *}{p_argc}{pointer to argument counter}
    {char **}{argv}{pointer to argument strings}
}
    % 4 return value
{A pointer to the string following an optioncharacter, or NULL if no such
string is found.}
    % 5 functions used
{}
    % 6 see also
{getopt, setoptchars, getoptindex}
    % 7 source file
{getoptva.c}
    % 8 description
{The function will return a pointer to the string immediately following an
option string if such a string exists. The following cases are recognized:
\begin{itemize}
    \item An option and its extra information forms one string, as in, e.g.,
        {\tt -s60}. The option is {\tt -s}, a pointer to the string {\tt 60}
        is returned.
    \item An option and its extra information form two strings, as in, e.g.,
        {\tt -s 60}. The option is {\tt -s}, a pointer to the string {\tt 60}
        is returned. As the string ``60'' is considered part of the option, it
        is removed from the argument vector, and the corresponding argument
        count is reduced.
    \item An option is not followed by a string, but immediately by another
        option, as in {\tt -s -q}. The option is {\tt -s}, and function
        \Function{\fname} returns NULL.
    \item An option is followed by a string, also containing  another
        option, as in {\tt -s xyz -q}. The option is {\tt -s}, the string
        xyz is removed from the argument vector, which now points at -q.
    \item An option was the last entry on the command line, and
        is not followed by a string as in {\tt -s}. The option is {\tt -s},
        and function \Function{\fname} returns NULL.
\end{itemize}

Function \Function{\fname} should be called only if function \Function{getopt}
dit not return \Define{-1}. All other cases produce unpredicable results.
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
    {
        if (val = getoptval(&argc, argv))
            printf("Option value is: %s\n", val);
        else
            puts("No option value");
    }

    rest_of_program();
}

\end{verbatim}
\normalsize
*/


#include <stdio.h>
#include <string.h>
#include "icrssdef.h"

extern char
    *icce_beyond_optchar,
    *icce_optchar,
    *icce_optval;
extern int
    icce_next_option;

static char
    *optval;

char *ic_getoptval(int *p_argc, char **argv)
{
    register int
        argc,
        index;

    if                                  /* -s60 case, beyond_optchar is 's' */
    (
        icce_beyond_optchar                 /* option character found */
        &&                                  /* and */
        *icce_optval                        /* something trailing */
    )
    {
        icce_beyond_optchar = NULL;
        return (icce_optval);               /* return pointer to trailing info */
    }

    icce_beyond_optchar = NULL;             /* option processed */
    argc = *p_argc;                         /* get local argc value */

    if
    (
        icce_next_option >= argc            /* no more entries */
        ||                                  /* or */
                                            /* next one is option ? */
        strchr(icce_optchar, *argv[icce_next_option])
    )
        return (NULL);                      /* then no value string */

    optval = argv[icce_next_option];        /* prepare return value */

                                            /* shift arguments */
    for (index = icce_next_option + 1; index <= argc; index++)
        argv[index - 1] = argv[index];

    (*p_argc)--;                            /* reduce external count */

    return (optval);                        /* return the option value. */
}





/*                              G E T O P T I N . C
    % 1 name
\functoc {getoptindex}
    % 2 declaration
{int \fname (\params\ )}
    % 3 arguments
{}
    % 4 return value
{The index in the \Var{argv} command line argument vector where the last option
was found}
    % 5 functions used
{}
    % 6 see also
{getoptval, setoptchars, getopt}
    % 7 source file
{getopt.c}
    % 8 description
{The function returns the index in the \Var{argv} vector where the last
argument was found after a call of \Function{getopt}. The returnvalue of the
function is undefined before the first call of function \Function{getopt}.

Note that after a call to \Function{getopt} the element
\Var{argv[getoptindex()]} does not point to the optionstring, but to the
command line entry which originally following the optionstring, as
\Function{getopt} removes the optionstring from the \Var{argv} array.
}
    % 9 example
{}
\footnotesize
\begin{verbatim}

#include <icce.h>

void main(int argc, char **argv)
{
    while ((c = getopt(&argc, argv)) != -1)
        printf("Command line option was at index %d\n", getoptindex());
}

\end{verbatim}
\normalsize
*/

#include "icrssdef.h"

extern int
    icce_next_option;

int ic_getoptindex()
{
    return (icce_next_option);
}

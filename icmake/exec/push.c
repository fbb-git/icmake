/*
\funcref{push}{void push (\params)}
    {
        {VAR\_} {v} {variable to push}
    }
    {}
    {xrealloc()}
    {pop()}
    {push.c}
    {

        This function pushes a variable of the {\em VAR\_} struct type onto
        the stack. The stack is relocatable and therefore grows upward. The
        reallocation of the stack occurs in blocks of 10 elements.

        The stack is pointed to by {\em VAR\_ $*$stack}. The last used
        element of the stack is indexed by {\em sp}. Therefore, {\em
        stack[sp]} is the pushed value after {\em push()} completes.

        Each stack element contains the following fields:

        \begin{itemize}

            \item the variable type is defined in field {\em type}. The type
            may be: {\em e\_int}, {\em e\_str} e\_list}. Other types, which are
            used by the {\em icmake} compiler, have no meaning in the execution
            phase.

            \item the variable value is kept in field {\em vu}. Depending on
            the variable type, {\em vu$\rightarrow$ls.str} is a pointer to an
            allocated string, {\em vu.intval} is an integer value, {\em
            vu$\rightarrow$ls.list} is a list.

            A list variable contains a {\em size} field, stating the number of
            elements in the list, and an {\em element} field which is a {\em
            char $**$}.

        \end{itemize}
    }
*/

#include "icm-exec.h"

static unsigned
    stacksize;

void push (VAR_ v)
{
    sp++;
    if (stacksize <= sp)
    {
        stacksize = sp + 10;
        stack = xrealloc (stack, stacksize * sizeof (VAR_));
    }
    stack [sp] = v;
}

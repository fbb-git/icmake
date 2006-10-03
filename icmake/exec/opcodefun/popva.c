/*
\funcref{fun\_pop\_var}{void fun\_pop\_var ()}
    {}
    {}
    {getint16(), pop()}
    {fun\_copy\_var()}
    {funpopva.c}
    {

        This function is called when an {\em op\_pop\_var} is encountered in
        the binary makefile. Following the opcode a variable index is expected.
        The logic of the function is as follows:

        \begin{itemize}

            \item The original contents of the variable are released if
            necessary by calling {\em discard()}.

            \item The last used stack element is copied into the variable.

            \item The stack pointer is decremented to reflect the shrinking of
            the stack.

        \end{itemize}

        Note that the memory associated with the stack variable remains
        unchanged.

    }
*/

#include "opcodefun.ih"

void fun_pop_var()
{
   assign(getdest(), top());   /* increments the reference count       */
   pop();                      /* and resets it to its former value    */
}

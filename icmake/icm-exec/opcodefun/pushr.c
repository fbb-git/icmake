/*
\funcref{fun\_push\_reg}{void fun\_push\_reg ()}
    {}
    {}
    {push()}
    {}
    {funpushr.c}
    {

        This function is called when the return register is to be pushed. The
        return register is used to return information from built-in functions.

        {\bf Note that} the {\em count} field of the return register is {\bf
        not} incremented when the register is pushed. The associated memory is
        assigned by internal functions and may be freed by subsequent {\em
        pop}-instructions.

        Therefore, also the builtin functions do not have to free the reg's
        memory when assigning a value to reg.
    }
*/

#include "opcodefun.ih"

void fun_push_reg()
{
    push(&reg);                 /* do not de-allocate, since it merely  */
                                /* transfers its memory to its dest.    */
}

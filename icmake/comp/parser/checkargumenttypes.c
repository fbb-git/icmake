#include "parser.ih"

void checkArgumentTypes(size_t nParams, Symbol const *funInfo, SemVal *a)
{
    size_t err = 0;
    register size_t idx;

    for (idx = 0; idx != nParams; ++idx, ++a)
    {
        if (symtabFunParameterType(funInfo, idx) != (a->type & e_typeMask))
        {
            size_t sem_err = g_sem_err;
            err = 1;
            semantic("Incorrect type of argument %u of function '%s()'",
                idx + 1, symtabFunName(funInfo));
            g_sem_err = sem_err;
        }
    }

    g_sem_err |= err;
}


#include "parser.ih"

void checkArgumentTypes(size_t nParams, size_t funIdx, SemVal *a)
{
    size_t err = 0;
    register size_t idx;

    for (idx = 0; idx != nParams; ++idx, ++a)
    {
        if (symtab_funParameterType(funIdx, idx) != (a->type & e_typeMask))
        {
            size_t sem_err = util_semErr();

            err = 1;
            util_semantic("Incorrect type of argument %u of function '%s()'",
                idx + 1, symtab_funName(funIdx));

            util_setSemErr(sem_err);
        }
    }

    util_orSemErr(err);
}


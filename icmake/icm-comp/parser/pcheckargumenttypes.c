#define msg
#include "parser.ih"

void p_checkArgumentTypes(size_t nParams, size_t funIdx, SemVal *a)
{
    register size_t idx;

    for (idx = 0; idx != nParams; ++idx, ++a)
    {
        if (symtab_funParameterType(funIdx, idx) != (a->type & e_typeMask))
            util_semantic("Function `%s', argument %u: type mismatch",
                idx + 1, symtab_funName(funIdx));
    }
}


#define msg
#include "parser.ih"

void p_checkArgumentTypes(unsigned nParams, unsigned funIdx, SemVal *a)
{
    register unsigned idx;

    for (idx = 0; idx != nParams; ++idx, ++a)
    {
        if (symtab_funParameterType(funIdx, idx) != (a->type & e_typeMask))
            util_semantic("Function `%s', argument %u: type mismatch",
                idx + 1, symtab_funName(funIdx));
    }
}


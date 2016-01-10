#define msgx
#include "parser.ih"

void p_checkArgumentTypes(unsigned nParams, unsigned funIdx, SemVal *args)
{
    register unsigned idx;

    msg("checking %d parameters", nParams);

    for (idx = 0; idx != nParams; ++idx, ++args)
    {
        if (symtab_funParameterType(funIdx, idx) != (args->type & e_typeMask))
            util_semantic("Function `%s', argument %u: type mismatch",
                symtab_funName(funIdx), idx + 1);
    }
}


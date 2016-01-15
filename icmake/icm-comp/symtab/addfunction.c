/*#define msg
*/

#include "symtab.ih"

int symtab_addFunction(ExprType type,   /* 0: function added, */
                        long offset)    /*  -1: already def'd */
{
    if (symtab_findFun() != -1)
        return -1;                          /* already defined */

    unsigned idx = st_nextFunIdx();

    FunInfo *next = gs_functions.info + idx;

    memset(next, 0, sizeof(FunInfo));
    next->name = rss_strdup(util_string());
    next->returnType = type | e_reg;
    next->address = offset;

    if (strcmp("main", next->name) == 0 && (type & e_typeMask))
        util_semantic("`main(...)' must have 'void' return type");

    msg("gs_vars.nParams is %u", gs_vars.nParams);

    return 0;
}

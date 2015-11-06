#include "symtab.ih"

int symtab_addFunction(ExprType type) /* 0: function added, -1: already def'd */
{
    if (symtab_findFun() != -1)
        return -1;                          /* already defined */

    size_t idx = st_nextFunIdx();

    FunInfo *next = gs_functions.info + idx;

    memset(next, 0, sizeof(FunInfo));
    next->name = xstrdup(util_string());
    next->returnType = type | e_reg;

    return 0;
}

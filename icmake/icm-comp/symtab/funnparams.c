#include "symtab.ih"

size_t symtab_fun_nParams(size_t funIdx)
{
//FBB fprintf(stderr, "n params of function %u\n", funIdx);
    return gs_functions.info[funIdx].nParams;
}

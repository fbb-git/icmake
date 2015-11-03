#include "symtab.ih"

Symbol const *symtabFunInfo(size_t funIdx)
{
    return gs_functions->symbol + funIdx;
}

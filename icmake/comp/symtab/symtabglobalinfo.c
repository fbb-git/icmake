#include "symtab.ih"

Symbol *symtabGlobalInfo(size_t idx)
{
    return gs_variables->symbol + idx;
}

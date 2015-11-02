#include "symtab.ih"

void st_free(Symtab *table)
{
    Symbol *ptr = table->symbol;

    for (size_t idx = table->nSymbols; idx--; )
        free(ptr++->name);
    
    table->nSymbols = 0;
}

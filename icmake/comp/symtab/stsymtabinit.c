#include "symtab.ih"

void st_symtab_init(Symtab *location)
{
    location->nSymbols  = 0;
    location->capacity  = 20;
    location->symbol    = xrealloc(0, 20 * sizeof(Symbol));
}

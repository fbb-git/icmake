#include "symtab.ih"

Symbol *st_next(Symtab *ptr)  /* return addr. of next available elem. */
{
    if (ptr->nSymbols == ptr->capacity)
        ptr->symbol = xrealloc(ptr->symbol, (ptr->capacity += 20) *
                                            sizeof(Symbol));

    return ptr + ptr->nSymbols++;
}

#include "symtab.ih"

int st_find(Symtab *symtab)         /* returns -1 if not found */
{
    register size_t idx = 0;

    for (idx = symtab->nSymbols; idx--; )
    {
        if (!strcmp(symtab->symbol[idx].name, g_lexstring))
            return idx;
    }

    return -1;                      
}

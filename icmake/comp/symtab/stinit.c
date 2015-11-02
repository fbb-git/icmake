#include "symtab.ih"

void st_init(Symtab **ptr, size_t count)
{
    *ptr = xrealloc(NULL, count * sizeof(Symtab));
    st_symtabInit(*ptr);
}

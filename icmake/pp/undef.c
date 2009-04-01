/*
\funcref{remove}{void remove(\params)}
    {
        {char} {*idname} {identifier to remove from symbols table}
    }
    {}
    {xrealloc()}
    {directive()}
    {remove.c}
    {
        {\em remove()} is called from {\em directive()} when an {\em \#undef}
        directive is read.

        The {\em idname} argument is looked up in the symbols table and is 
        removed from it if found. In that case, the counter {\em ndefined} is
        decreased. 
    }
*/

#include "icm-pp.h"


void undef(char *idname)
{
    int idx = finddef(idname);
    if (idx == -1)
        error("%s: #undef %s: no symbol %s defined", filestack[filesp].n,
                                                     idname, idname);
/*
fprintf(stderr, "Removed `%s'\n", defined[ndefined].ident);
*/

    free(defined[idx].ident);
    free(defined[idx].redef);

    memmove(defined + idx, defined + idx + 1, 
            (ndefined - (idx + 1)) * sizeof(DEFINED_));

    --ndefined;
}

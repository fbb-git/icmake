#include "symtab.ih"

VarIndex symtab_findVar() /* util_string() holds the name of an existing   */
{                           /* variable, returns -1 if not found            */
    VarIndex ret;

    for (unsigned nesting = gs_vars.nLevels; nesting--; )
    {
        int idx = st_findVar(nesting);

        if (idx != -1)
        {
            ret.idx = idx;
            ret.type = nesting > 0;

            return ret;
        }
    }
    ret.idx = -1;
    return ret;
}

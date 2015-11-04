#include "symtab.ih"

UNS16 const *symtabFunAddr()    /* uses g_lexstring (the name of an */
{                               /*  existing function )             */

    return &gs_functions->symbol[symtabFunIdx()].var.vu.i->count;
}

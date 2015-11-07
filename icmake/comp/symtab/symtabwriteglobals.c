#include "symtab.ih"

/* 
    Global variables are written like this:
        1st byte: their type
        next 2 bytes: their value
*/
    
void symtab_writeGlobals(FILE *bin)
{
    for (VarInfo *begin = gs_vars.varTab->info, 
                   *end = begin + gs_vars.varTab->nVars;     
            begin != end;
                ++begin)
    {        
        char type = (char)begin->type & ~e_var;
        util_out(bin, &type, sizeof(char));
        
        util_out(bin, &begin->value, sizeof(UNS16));
    }
}

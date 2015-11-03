#include "parser.ih"

int functionIdx()
{
    register int idx = symtabFunIdx();

    if (idx == -1)
        semantic("Function '%s()' not defined", g_lexstring);

    return idx;    
}

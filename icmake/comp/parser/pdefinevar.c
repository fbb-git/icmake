
#define msgx

#include "parser.ih"

void p_defineVar()
{
    VarIndex ret = symtab_defineVar(gp_varType);

    if (ret.idx == -1)
        util_semantic("%s p_multiply defined", util_string());
}

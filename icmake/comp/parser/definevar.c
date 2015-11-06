#include "parser.ih"

void defineVar()
{
    VarIndex ret = symtab_defineVar(gp_varType);

    if (ret.idx == -1)
        util_semantic("%s multiply defined", util_string());
}

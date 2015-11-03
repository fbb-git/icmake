#include "parser.ih"

void defineVar()
{
    int ret = symtabDefineVar(gp_varType);

    if (ret == -1)
        semantic("%s multiply defined", g_lexstring);
}

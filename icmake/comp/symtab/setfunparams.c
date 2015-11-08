/*
#define msg
*/

#include "symtab.ih"

    /* 
        local vars so far are parameters.
    */

void symtab_setFunParams()
{
    FunInfo *info = st_lastFunInfo();

    msg(__FILE__, "# params of %s: %u", \
            info->name, gs_vars.varTab[1].nVars);

                                /* set the fun's # params */
    info->nParams = gs_vars.nParams = gs_vars.varTab[1].nVars;    

                                /* room for the parameter types */
    info->paramType = xrealloc(NULL, gs_vars.nParams * sizeof(char));

                                /* assign the parameter types */
    for (size_t idx = 0; idx != gs_vars.nParams; ++idx)
    {
        msg("param. %u is %x", idx, st_paramType(idx));
        info->paramType[idx] = st_paramType(idx);
    }
}    

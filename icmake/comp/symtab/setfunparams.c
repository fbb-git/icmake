
/* #define msg
*/

#include "symtab.ih"

    /* 
        local vars so far are parameters.
    */

void symtab_setFunParams()
{
    FunInfo *info = st_lastFunInfo();

                                /* set the fun's # params */
    info->nParams = gs_vars.nParams = gs_vars.varTab[1].nVars;    

                                /* room for the parameter types */
    info->paramType = rss_realloc(NULL, gs_vars.nParams * sizeof(ExprType));

                                /* assign the parameter types */
    for (unsigned idx = 0; idx != gs_vars.nParams; ++idx)
        info->paramType[idx] = st_paramType(idx);
}    






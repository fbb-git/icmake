#include "symtab.ih"
                                /* set the details of the function that's
                                   currently being defined */
size_t symtab_setFunctionInfo(size_t address)        
{
                                /* pointer to its FunInfo record */
    st_lastFunInfo()->address = address;

    /*
        The parameter types of the function are set by symtab_setFunParams,
        called from parser/inc/funcdef.5's _funvars NT, once all parameters
        have been read
    */

//FBB     info->nParams = gs_vars.nParams;
//FBB
//FBB                                /* room for the parameter types */
//FBB    info->paramType = rss_realloc(NULL, gs_vars.nParams * sizeof(char));
//FBB
//FBB                                /* assign the parameter types */
//FBB    for (size_t idx = 0; idx != gs_vars.nParams; ++idx)
//FBB        info->paramType[idx] = symtab_localType(idx);

    return symtab_nLocals();
}

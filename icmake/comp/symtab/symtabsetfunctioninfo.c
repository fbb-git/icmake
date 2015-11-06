#include "symtab.ih"
                                /* set the details of the function that's
                                   currently being defined */
size_t symtab_setFunctionInfo(size_t address)        
{
                                /* pointer to its FunInfo record */
    FunInfo *info = gs_functions.info + gs_functions.nFunctions - 1;

    info->address = address;

    info->nParams = gs_vars.nParams;

                                /* room for the parameter types */
    info->paramType = xrealloc(NULL, gs_vars.nParams * sizeof(char));

                                /* assign the parameter types */
    for (size_t idx = 0; idx != gs_vars.nParams; ++idx)
        info->paramType[idx] = symtab_localType(idx);

    return symtab_nLocals();
}

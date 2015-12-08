#include "symtab.ih"
                                /* set the details of the function that's
                                   currently being defined */
unsigned symtab_setFunctionInfo(unsigned address)        
{
                                /* pointer to its FunInfo record */
    st_lastFunInfo()->address = address;

    /*
        The parameter types of the function are set by symtab_setFunParams,
        called from parser/inc/funcdef.5's _funvars NT, once all parameters
        have been read
    */

    return symtab_nLocals();
}

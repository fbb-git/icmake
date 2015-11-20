#include "symtab.ih"

//size_t symtab_setLastFunction(size_t nParams)
//{
//    if (gs_functions->nSymbols == 0)
//        return 0;
//
//                                            /* addr. of last function info */
//    Symbol *last = gs_functions[gs_functions->nSymbols - 1].symbol;
//
//                                            /* set offset of 1st byte       */
//    last->var.text->address = (size_t)ftell(gp_bin);
//
//    last->var.text->list.element =       /* room for type-bytes */
//                                rss_realloc(NULL, nParams * sizeof(char));
//
//    last->var.text->list.size = nParams; /* store # of params */
//
//    st_setParamTypes(last, nParams);        /* assign param. types */
//
//    return symtab_nLocalVariables();        /* return # of local variables */
//}











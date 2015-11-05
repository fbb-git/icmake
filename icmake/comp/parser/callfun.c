#include "parser.ih"

SemVal *callfun(int funIdx, SemVal *e)
{
    register size_t nParams;

/*
    fprintf(stderr,
        "type: %d\n"
        "truelen: %d\n"
        "falselen: %d\n"
        "codelen: %d\n"
        "evalue: %d\n"
        "truelist: %p\n"
        "falselist: %p\n"
        "code: %p\n",
        e->type,
        e->truelen,
        e->falselen,
        e->codelen,
        e->evalue,
        e->truelist,
        e->falselist,
        e->code);
*/            

    if (funIdx == -1)                   /* function name not found ? */
        return e;                       /* nothing to do here        */

    nParams = symtab_fun_nParams(funIdx);    /* then check correct # of args */
              
    if ((size_t)e->type == nParams)
        checkArgumentTypes(nParams, funIdx, (SemVal *)e->code);
    else
        semantic("Function '%s()' requires %u arguments",
                    symtab_funName(funIdx), nParams);

    catargs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    gencode(e, op_call, symtab_funAddress(funIdx));
    gencode(e, op_asp,  nParams);
    set_type(e, symtab_funType(funInfo));

    return e;                               /* return called function code */
}

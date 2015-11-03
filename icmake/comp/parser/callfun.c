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

    Symbol const *funInfo = symtabFunInfo(funIdx);

                                            /* then check correct # of args */
    nParams = symtabFun_nParams(funInfo);
              
    if ((size_t)e->type == nParams)
        checkArgumentTypes(nParams, funInfo, (SemVal *)e->code);
    else
        semantic("Function '%s()' requires %u arguments",
                    symtabFunName(funInfo), nParams);

    catargs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    gencode(e, op_call, symtabFunAddress(funInfo));
    gencode(e, op_asp,  nParams);
    set_type(e, symtabFunType(funInfo));

    return e;                               /* return called function code */
}

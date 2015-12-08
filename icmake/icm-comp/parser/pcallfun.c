#include "parser.ih"

SemVal *p_callFunction(int funIdx, SemVal *e)
{
    msg("calling function 0x%x", funIdx);

    register unsigned nParams;

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
              
    if ((unsigned)e->type == nParams)
        p_checkArgumentTypes(nParams, funIdx, (SemVal *)e->code);
    else
        util_semantic("Function '%s()' requires %u arguments",
                    symtab_funName(funIdx), nParams);

    p_catArgs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    p_generateCode(e, op_call, symtab_funAddress(funIdx));
    p_generateCode(e, op_asp,  nParams);
    set_type(e, symtab_funType(funIdx));

    return e;                               /* return called function code */
}

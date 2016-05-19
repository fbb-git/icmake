/*
    Frame organization:

            Low address
                        Local x     <- Var 0xbffc   = 0xbfff - x
                        Local ...   <- Var 0xbffd   = 0xbfff - ...
                        Local 1     <- Var 0xbffe   = 0xbfff - 1
                        Local 0     <- Var 0xbfff   = 0xbfff - 0
                        Old BP      <- Var 0xc000
                        RA          <- Var 0xc001
            parameters: Par 0       <- Var 0xc002   = 0xc002 + 0
                        Par 1       <- Var 0xc003   = 0xc002 + 1
                        ...
            High Address
*/

#include "parser.ih"

static SemVal ret;

SemVal *p_fetchVar()
{
    register int idx;
    ret = *p_stackFrame(e_null);

    VarIndex vi = symtab_findVar();      /* find the index of var.
                                               util_string() */

    if ((idx = vi.idx) == -1)                          
    {
        util_semantic("%s undefined", util_string());
        return &ret;
    }

    if (vi.type != st_global)
    {
        register unsigned nParams = symtab_nParams();

        if (idx < nParams)
            idx += 0xc002;                  /* offset of a parameter */
        else 
            idx = 0xbfff - (idx - nParams); /* offset of a local var */
    }

    ret.evalue = idx;
    ret.type = symtab_varType(vi);

    return &ret;                         /* return the frame */
}










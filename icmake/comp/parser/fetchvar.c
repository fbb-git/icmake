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

SemVal *fetchvar()
{
    register size_t idx;

    ret = *stackframe(e_null);

    idx = symtabVarIdx();                   /* find the index of var.
                                               g_lexstring */

    if (idx == -1)                          
    {
        semantic("%s undefined", g_lexstring);
        return &ret;
    }


    if (idx < gp_nParams)                   /* idx refers to a parameter */
        idx += 0xc002;
    else
        idx = 0xbfff - (idx - gp_nParams);  /* idx refers to a local var */

    ret.evalue = idx;
    ret.type = symtabVarType(idx);

//                                            /* not a local variable ? */
//    if ((idx = looksym(&gp_local)) == gp_local.n_defined)
//    {                                       /* not a global variable ? */
//        if ((idx = looksym(&g_globaltab)) != g_globaltab.n_defined)
//            type = g_globaltab.symbol[idx].var.type;
//        else
//        {
//            idx = 0xffff;
//            semantic("%s undefined", g_lexstring);
//        }
//    }
//    else
//    {
//        type = gp_local.symbol[idx].var.type;
//        if (idx < gp_nParams)               /* Parameters: */
//            idx += 0xc002;
//        else                                /* Locals: */
//            idx = 0xbfff - (idx - gp_nParams);
//    }
//
//    if (idx != 0xffff)
//    {
//        ret.evalue = idx;                /* set idx and type */
//        ret.type =  type;
//    }

    return &ret;                         /* return the frame */
}

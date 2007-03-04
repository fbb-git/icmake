/*
                            F E T C H V A R . C

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

#include "iccomp.h"

static ESTRUC_ ret;

ESTRUC_ *fetchvar()
{
    register size_t
        idx;
    E_TYPE_
        type = 0;

    ret = *stackframe(0);

    if (initialization)
    {
        semantic(init_expr_not_const);
        return &ret;
    }
                                            /* not a local variable ? */
    if ((idx = looksym(&local)) == local.n_defined)
    {                                       /* not a global variable ? */
        if ((idx = looksym(&global)) == global.n_defined)
        {
            idx = 0xffff;
            semantic("%s undefined", lexstring);
        }
        else
            type = global.symbol[idx].var.type;
    }
    else
    {
        type = local.symbol[idx].var.type;
        if (idx < n_params)               /* Parameters: */
            idx += 0xc002;
        else                                /* Locals: */
            idx = 0xbfff - (idx - n_params);
    }

    if (idx != 0xffff)
    {
        ret.evalue = idx;                /* set idx and type */
        ret.type =  type;
    }
    return &ret;                         /* return the frame */
}

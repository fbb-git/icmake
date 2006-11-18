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

ESTRUC_ fetchvar()
{
    register size_t
        index;
    E_TYPE_
        type = 0;
    ESTRUC_
        ret;

    ret = stackframe(0);

    if (initialization)
    {
        semantic(init_expr_not_const);
        return ret;
    }
                                            /* not a local variable ? */
    if ((index = looksym(&local)) == local.n_defined)
    {                                       /* not a global variable ? */
        if ((index = looksym(&global)) == global.n_defined)
        {
            index = 0xffff;
            semantic("%s undefined", lexstring);
        }
        else
            type = global.symbol[index].var.type;
    }
    else
    {
        type = local.symbol[index].var.type;
        if (index < n_params)               /* Parameters: */
            index += 0xc002;
        else                                /* Locals: */
            index = 0xbfff - (index - n_params);
    }

    if (index != 0xffff)
    {
        ret.evalue = index;                /* set index and type */
        ret.type =  type;
    }
    return (ret);                           /* return the frame */
}

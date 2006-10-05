/*
                                I N D E X O P . C
*/

#include "iccomp.h"

ESTRUC_ *indexOp(ESTRUC_ *larg, ESTRUC_ *rarg)
{
    register int ok;
    E_TYPE_ type = f_element;
    ESTRUC_ *tmp;


    etoc(larg);                             /* arg to stack */
    etoc(rarg);                             /* arg to stack */

    /* This follows the code of `twoargs.c' to compute a list/string    */
    /* element                                                          */

                                            /* first arg must be int */
    if (!test_type(larg, e_int))            /* first expression is no int */
    {
        tmp = larg;                         /* then swap    */
        larg = rarg;
        rarg = tmp;
    }

    if ( (ok = test_type(larg, e_int)) )    /* right arg must be int    */
    {                               /* second arg == list: ok */
        if (!(ok = test_type(rarg, e_list)))
        {                           /* second arg == string: ok */
            ok = test_type(rarg, e_str);
            type = f_str_el;        /* string element requested */
        }
    }

    if (ok)
    {
        catcode(rarg, larg);                /* make one code vector */
        callrss(rarg, type);
    }
    else
    {
        semantic(type_conflict, funstring[type]);
        discard(larg);
    }
    return (rarg);
}

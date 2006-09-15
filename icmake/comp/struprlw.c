/*
                             S T R U P R L W . C

*/

#include "iccomp.h"

ESTRUC_ *strupr_lwr(E_TYPE_ type, ESTRUC_ *arg)
{
    etoc(arg);                              /* arg to stack */

                                            /* test type of argument */
    if (!test_type(arg, e_str))
    {
        semantic(type_conflict, funstring[type]);
        return (arg);
    }

    callhidden                                  /* call a hidden function   */
    (                                           /* these functions are      */
                                                /* generated as code,       */
                                                /* defined in data.c        */
        type == f_strlwr ?
            he_strlwr
        :
            he_strupr,
        arg
    );

    return (arg);                           /* return called function code */
}




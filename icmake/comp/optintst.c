/*
                             O P T I N T S T . C

*/

#include "iccomp.h"

ESTRUC_ *optint_string(type, larg, rarg)
    E_TYPE_
        type;
    ESTRUC_
        *larg,
        *rarg;
{
    etoc(larg);                             /* argument to stack */

    if
    (
        test_type(larg, e_str)              /* left is string */
        &&
        !rarg->type                         /* right is zeroframe */
    )                                       /* -> P_CHECK implied */
    {
        rarg->type = e_int | e_const;       /* indicate constant */
        rarg->evalue = P_CHECK;             /* indicate P_CHECK  */
        etoc(rarg);                         /* right arg now code */
        catcode(larg, rarg);                /* catenate code */
    }
    else if
    (
        test_type(larg, e_int)              /* left is int: explicit check */
        &&
        test_type(rarg, e_str)              /* right must be string */
    )
    {
        etoc(rarg);                         /* right arg to code */
        catcode(rarg, larg);
        larg = rarg;
    }
    else
    {
        semantic(type_conflict, funstring[type]);
        discard (rarg);
        return (larg);
    }

    callrss(larg, type);                    /* call the function */
    return (larg);
}

/*
                                T H R E E A R G S . C
*/

#include "iccomp.h"

ESTRUC_ *threeargs(type, larg, marg, rarg)
    E_TYPE_
        type;
    ESTRUC_
        *larg,
        *marg,
        *rarg;
{
    register int
        ok;

    etoc(larg);                             /* arg to stack */
    etoc(marg);                             /* arg to stack */
    etoc(rarg);                             /* arg to stack */

    switch ((FUNNR_)type)
    {
        case f_substr:
            ok = test_type(larg, e_str) && 
                test_type(marg, e_int) && test_type(rarg, e_int);
        break;

        default:
            ok = 0;
    }

    if (ok)
    {
        catcode(rarg, marg);                /* make one code vector */
        catcode(rarg, larg);                /* make one code vector */
        callrss(rarg, type);
        return (rarg);
    }
    semantic(type_conflict, funstring[type]);
    return nullframe(larg);
}

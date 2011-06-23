/*
                             E X E C F P R I . C

*/

#include "iccomp.h"

ESTRUC_ *exec_fprintf(type, args)
    E_TYPE_
        type;
    ESTRUC_
        *args;
{
    register int
        ok;
    ESTRUC_
        *e0;

    if (args->type < 2)                     /* argcount must be at least 2 */
    {
        semantic(illegal_argcount, funstring[type]);
        return (args);
    }

    e0 = codestruc(args, 0);                /* pointer to first arg */

    switch ((FUNNR_)type)
    {
        case f_fprintf:                     /* first arg must be string */
            ok = test_type(e0, e_str);
        break;

        default:                            /* 1st arg must be int,   */
            ok = test_type(e0, e_int) &&    /* 2nd arg must be string */
                 test_type(codestruc(args, 1), e_str);
    }

    if (ok)
        return (specials(type, args));      /* return specials call */

    semantic(type_conflict, funstring[type]); /* type conflict error */
    return (args);
}

#include "parser.ih"

SemVal *p_fprintf(ExprType type, SemVal *args)
{
    register int ok;
    SemVal *e0;

    if (args->type < 2)                     /* argcount must be at least 2 */
    {
        util_semantic(gp_illegalArgCount, gp_funstring[type]);
        return (args);
    }

    e0 = codestruc(args, 0);                /* pointer to first arg */

    switch ((FunNr)type)
    {
        case f_fprintf:                     /* first arg must be string */
            ok = test_type(e0, e_str);
        break;

        default:                            /* 1st arg must be int,   */
            ok = test_type(e0, e_int) &&    /* 2nd arg must be string */
                 test_type(codestruc(args, 1), e_str);
    }

    if (ok)
        return (p_specials(type, args));      /* return p_specials call */

    util_semantic(gp_typeConflict, gp_funstring[type]); /* type p_conflict error */
    return (args);
}

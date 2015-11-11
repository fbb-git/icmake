#include "parser.ih"

SemVal *twoargs(ExprType type, SemVal *larg, SemVal *rarg)
{
    register int ok;

    eToStack(larg);                             /* arg to stack */
    eToStack(rarg);                             /* arg to stack */

    switch ((FUNNR_)type)
    {
        case f_fgets:
            ok = test_type(larg, e_str) && test_type(rarg, e_list);
        break;

        case f_element:                     /* f_element */
                                            /* first arg must be int */
            if ( (ok = test_type(larg, e_int)) )
            {                               /* second arg == list: ok */
                if (!(ok = test_type(rarg, e_list)))
                {                           /* second arg == string: ok */
                    ok = test_type(rarg, e_str);
                    type = f_str_el;        /* string element requested */
                }
            }
        break;

        default:
            /*
                case f_fields:
                case f_c_ext:
                case f_c_base:
                case f_c_path:
                case f_strfind:
            */
            ok = larg->type & rarg->type & e_str;
    }

    if (ok)
    {
        catcode(rarg, larg);                /* make one code vector */
        callrss(rarg, type);
    }
    else
    {
        util_semantic(gp_typeConflict, gp_funstring[type]);
        discard(larg);
    }
    return (rarg);
}

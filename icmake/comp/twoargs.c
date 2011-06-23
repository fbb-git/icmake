/*
                                T W O A R G S . C
*/

#include "iccomp.h"

ESTRUC_ *twoargs(type, larg, rarg)
    E_TYPE_
        type;
    ESTRUC_
        *larg,
        *rarg;
{
    register int
        ok;

    etoc(larg);                             /* arg to stack */
    etoc(rarg);                             /* arg to stack */

    switch ((FUNNR_)type)
    {
        case f_fgets:
            ok = test_type(larg, e_str) && test_type(rarg, e_int);
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
        semantic(type_conflict, funstring[type]);
        discard(larg);
    }
    return (rarg);
}

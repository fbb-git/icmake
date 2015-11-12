/*
                                    C A S T . C
*/

#include "parser.ih"

SemVal *p_cast(ExprType target, SemVal *e)
{
    p_bool2int(e);                                /* convert boolean to int */

    switch (target)
    {
        case e_int:                        /* p_cast to ints */
            p_iCast(e);
        break;

        case e_str:                        /* p_cast to strings */
            p_sCast(e);
        break;

        case e_list:                       /* p_cast to lists */
            p_lCast(e);
        break;

        default:
        /* 
            default is entered in the switch to prevent a long compiler
            warning
        */
break;
    }
    return (e);
}

/*
                                    C A S T . C
*/

#include "parser.ih"

SemVal *cast(ExprType target, SemVal *e)
{
    btoi(e);                                /* convert boolean to int */

    switch (target)
    {
        case e_int:                        /* cast to ints */
            icast(e);
        break;

        case e_str:                        /* cast to strings */
            scast(e);
        break;

        case e_list:                       /* cast to lists */
            lcast(e);
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

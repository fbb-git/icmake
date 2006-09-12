/*
                                    C A S T . C
*/

#include "iccomp.h"

ESTRUC_ *cast(target, e)
    E_TYPE_
        target;
    ESTRUC_
        *e;
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

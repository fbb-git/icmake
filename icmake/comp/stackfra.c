/*
                            S T A C K F R A . C
*/

#include "iccomp.h"

static ESTRUC_
    frame;

ESTRUC_ *stackframe(E_TYPE_ type)
{
    frame.type = type;

    switch ((int)type)
    {
        case e_int | e_const:
            frame.evalue = atoi(lexstring);
        break;

        case e_str | e_const:
            frame.evalue = lookstring(stringbuf);
        break;

        default:
            frame.evalue = 0;
    }

    return &frame;
}

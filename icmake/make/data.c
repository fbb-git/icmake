/*
                                D A T A . C
*/

#include "icmake.h"

char
    cant_read[] = "Can't read %s",
    *dest_name,
    r[]  = "r",
    rb[] = "rb",
    *source_name,
    *temporary;

FILE
    *fdest;

FLAGS_
    flags;

int
    errors;

unsigned
    redirect_nr = (unsigned)~0;

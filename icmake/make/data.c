/*
                                D A T A . C
*/

#include "icmake.h"

char
    cant_read[] = "Can't read %s",
    r[]  = "r",
    rb[] = "rb";

char *temporary;
char *source_name;
char *dest_name;
FILE *fdest;
FLAGS_ flags;
int errors;

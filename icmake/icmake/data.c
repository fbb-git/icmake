/*
                                D A T A . C
*/

#include "icmake.ih"


char const icm_comp[]  = LIBDIR "/icm-comp";
char const icm_exec[]  = LIBDIR "/icm-exec";
char const icm_pp[]    = LIBDIR "/icm-pp";

char *temporary;
char *source;
char *destination;
FILE *fdest;
FLAGS_ flags;
int errors;

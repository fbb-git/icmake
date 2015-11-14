#include "icmake.ih"

/*
char icm_comp[]  = LIBDIR "/icm-comp";
char icm_exec[]  = LIBDIR "/icm-exec";
char icm_pp[]    = LIBDIR "/icm-pp";
*/

char icm_comp[]  = "/home/frank/src/icmake/icm-comp/tmp/bin/binary";
char icm_exec[]  = "/home/frank/src/icmake/icm-exec/tmp/bin/binary";
char icm_pp[]    = "/home/frank/src/icmake/icm-pp/tmp/bin/binary";


char *imFile;
char *pimFile;
char *bimFile;

FILE *fdest;
FLAGS_ flags;
size_t execArgIdx;


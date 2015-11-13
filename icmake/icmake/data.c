#include "icmake.ih"

/*
char const icm_comp[]  = LIBDIR "/icm-comp";
char const icm_exec[]  = LIBDIR "/icm-exec";
char const icm_pp[]    = LIBDIR "/icm-pp";
*/

char const icm_comp[]  = "/home/frank/src/icmake/icm-comp/tmp/bin/binary";
char const icm_exec[]  = "/home/frank/src/icmake/icm-exec/tmp/bin/binary";
char const icm_pp[]    = "/home/frank/src/icmake/icm-pp/tmp/bin/binary";


char const *imFile;
char const *pimFile;
char const *bimFile;
FILE *fdest;
FLAGS_ flags;
size_t execArgIdx;


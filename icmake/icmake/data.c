#include "icmake.ih"

char icm_pre[]   = LIBDIR "/icm-dep";
char icm_comp[]     = LIBDIR "/icm-comp";
char icm_exec[]     = LIBDIR "/icm-exec";
char icm_pp[]       = LIBDIR "/icm-pp";

char *tmpDir;
char *imFile;
char *pimFile;
char *bimFile;

FILE *fdest;
FLAGS_ flags;
unsigned execArgIdx;

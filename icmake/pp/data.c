#include "icm-pp.h"

char
    *imdir,
    lexbuf [3000];

DEFINED_
    *defined;

FILE
    *outfile;

FILESTACK_
    *filestack;

int
    at_firstcol = 1,
    nocomment = 0,
    nofileinfo = 0,
    nostrings = 0,
    filesp = -1,
    ndefined,
    strict_directives,
    output_active = 1;

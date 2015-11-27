#include "icm-pp.h"

DEFINED_ *defined;
FILE *outfile;
FILESTACK_ *filestack;
STRING_ lexbuf = {0, 0, NULL};
char *imdir;
int at_firstcol = 1;
int filesp = -1;
int ndefined;
int nocomment = 0;
int nofileinfo = 0;
int nostrings = 0;
int output_active = 1;
int strict_directives;

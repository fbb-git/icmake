#include "../icm-exec.h"

BinHeader    *headerp;
FILE           *infile;
uint16_t           nvar;
Variable           *var;
char            orgdir[MAX_PATHLEN];
char           *bimname;
int             retval;
size_t          curoffs;

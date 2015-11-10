#include "../icm-exec.h"

BinHeader    *headerp;
FILE           *infile;
uint16_t           nvar;
VAR_           *var;
char            orgdir[_MAX_PATH];
char           *bimname;
int             retval;
size_t          curoffs;

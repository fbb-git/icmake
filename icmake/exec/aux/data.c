#include "../icm-exec.h"

BIN_HEADER_    *headerp;
FILE           *infile;
UNS16           nvar;
VAR_           *var;
char            orgdir[_MAX_PATH];
char           *bimname;
int             retval;
size_t          curoffs;

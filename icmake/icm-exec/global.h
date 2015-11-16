#ifndef _INCLUDED_GLOBAL_H_
#define _INCLUDED_GLOBAL_H_

#include "../rss/rss.h"

extern size_t     curoffs;
extern char         orgdir[];
extern FILE        *infile;
extern Variable        *var;
extern int          retval;
extern BinHeader *headerp;

#endif

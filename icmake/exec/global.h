#ifndef _INCLUDED_GLOBAL_H_
#define _INCLUDED_GLOBAL_H_

#include "../rss/icrss.h"

extern size_t     curoffs;
extern char         orgdir[];
extern FILE        *infile;
extern VAR_        *var;
extern int          retval;
extern BIN_HEADER_ *headerp;

#endif

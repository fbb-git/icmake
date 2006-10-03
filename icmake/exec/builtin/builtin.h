#ifndef _INCLUDED_BUILTIN_H_
#define _INCLUDED_BUILTIN_H_

#include "../../rss/icrssdef.h"

#include "../var/var.h"

extern char        *arghead;
extern char        *argtail;
extern char        *cmdhead;
extern char        *cmdtail;

extern VAR_         reg;

void builtin(size_t funnr);

#endif

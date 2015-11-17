#ifndef _INCLUDED_BUILTIN_H_
#define _INCLUDED_BUILTIN_H_

#include "../../rss/rss.h"

void        builtin(void);     /* prepare initial data, call only once */
void        builtin_call(size_t funIdx);
Variable    *builtin_regPtr();

#endif

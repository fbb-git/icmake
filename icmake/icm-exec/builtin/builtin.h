#ifndef _INCLUDED_BUILTIN_H_
#define _INCLUDED_BUILTIN_H_

//FBB void builtin(size_t funnr);
//FBB char const *builtin_orgDir(void);

#include "../../rss/rss.h"

void builtin();     /* prepare initial data, call only once */
Variable *builtin_regPtr();

#endif

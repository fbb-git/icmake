#ifndef _INCLUDED_STRING_H_
#define _INCLUDED_STRING_H_

#include "../../rss/icrss.h"

typedef VAR_    STRINGVAR_;

STRINGVAR_  *stringConstructor(void);
STRINGVAR_  *stringConstructor_cP(char const *str);
void        stringDestructor(STRINGVAR_ *var);
STRINGVAR_  *stringCopyCons(STRINGVAR_ const *var);

void        stringAssign(STRINGVAR_ *lhs, STRINGVAR_ const *rhs);

void        stringAdd(STRINGVAR_ *lhs, STRINGVAR_ const *rhs);
int         stringLogical(STRINGVAR_ const *lhs);

char        *stringStr(STRINGVAR_ const *lhs);  /* const removed */

#endif

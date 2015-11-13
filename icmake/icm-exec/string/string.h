#ifndef _INCLUDED_STRING_H_
#define _INCLUDED_STRING_H_

#include "../../rss/rss.h"

typedef VAR_    String;

String  *stringConstructor(void);
String  *stringConstructor_cP(char const *str);
void        stringDestructor(String *var);
String  *stringCopyCons(String const *var);

void        stringAssign(String *lhs, String const *rhs);

void        stringAdd(String *lhs, String const *rhs);
int         stringLogical(String const *lhs);

char        *stringStr(String const *lhs);  /* const removed */

String  *stringTrimLeft(String const *str);
String  *stringTrimRight(String const *str);

#endif

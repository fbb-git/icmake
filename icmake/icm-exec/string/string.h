#ifndef _INCLUDED_STRING_H_
#define _INCLUDED_STRING_H_

#include "../../rss/rss.h"

typedef Variable    String;

String      *stringcons(void);
String      *stringcons_charPtr(char const *str);
void        stringDestructor(String *var);
String      *stringcopycons(String const *var);

void        string_assign(String *lhs, String const *rhs);

void        string_add(String *lhs, String const *rhs);
int         string_bool(String const *lhs);      /* returns 0 if empty */

char        *string_charp(String const *lhs);    /* const removed */

String      *string_trimLeft(String const *str);
String      *string_trimRight(String const *str);

#endif

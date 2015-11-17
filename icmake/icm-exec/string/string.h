#ifndef _INCLUDED_STRING_H_
#define _INCLUDED_STRING_H_

#include "../../rss/rss.h"

typedef Variable    String;

    /* all constructors return a pointer to a statically allocated data
        struct. In order to use the returned data it needs to be copied
        to a locally defined variable
    */

String const *stringcons(void);
String const *stringcons_charPtr(char const *str);
String const *stringcopycons(String const *var);

void        stringDestructor(String *var);

void        string_assign(String *lhs, String const *rhs);

void        string_add(String *lhs, String const *rhs);
int         string_bool(String const *lhs);      /* returns 0 if empty */

char        *string_charp(String const *lhs);    /* const removed */

String const *string_trimLeft(String const *str);
String const *string_trimRight(String const *str);

#endif










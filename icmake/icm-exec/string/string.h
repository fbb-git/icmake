#ifndef _INCLUDED_STRING_H_
#define _INCLUDED_STRING_H_

#include "../../rss/rss.h"

typedef Variable    String;

    /* all constructors return a pointer to a statically allocated data
        struct. In order to use the returned data it needs to be copied
        to a locally defined variable
    */

void stringcons(String *str);
void stringcons_charPtr(String *str, char const *ntbs);
void stringcons_swallowCharPtr(String *str, char *ntbs);
void stringcopycons(String *str, String const *var);

void stringDestructor(String const *var);

void string_assign(String *lhs, String const *rhs);

void        string_add(String *lhs, String const *rhs);
int         string_bool(String const *lhs);      /* returns 0 if empty */

char const *string_charp(String const *lhs);
void    string_reduce(String *str, unsigned length);  /* reduce length */

void string_trimLeft(String *lhs, String const *str);
void string_trimRight(String *lhs, String const *str);

#endif










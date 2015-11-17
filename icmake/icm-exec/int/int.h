#ifndef _INCLUDED_INT_H_
#define _INCLUDED_INT_H_

#include "../../rss/rss.h"

typedef Variable    IntVariable;

    /* all constructors return a pointer to a statically allocated data
        struct. In order to use the returned data it needs to be copied
        to a locally defined variable
    */

IntVariable const *intcons(void);
IntVariable const *intcons_int(int value);
IntVariable const *intcopycons(IntVariable const *other);

void    intDestructor(Variable const *lhs);

void    int_assign(Variable *lhs, Variable const *rhs);

void    int_add(Variable *lhs, Variable const *rhs);
void    int_sub(Variable *lhs, Variable const *rhs); /* same as intCompare */
int     int_bool(IntVariable const *lhs);

void    int_assignInt(IntVariable *lhs, int value);

int     int_value(IntVariable const *lhs);   /* return the stored int */

#endif





#ifndef _INCLUDED_INT_H_
#define _INCLUDED_INT_H_

#include "../../rss/rss.h"

typedef Variable    IntVariable;

IntVariable     *intcons(void);
IntVariable     *intcons_int(int value);
IntVariable     *intcopycons(IntVariable const *other);

void        intDestructor(Variable *lhs);
void        int_assign(Variable *lhs, Variable const *rhs);

void        int_add(Variable *lhs, Variable const *rhs);
void        int_sub(Variable *lhs, Variable const *rhs);     /* same as intCompare */
int         int_bool(IntVariable const *lhs);

void        int_assignInt(IntVariable *lhs, int value);

int         int_value(IntVariable const *lhs);   /* return the stored int */

#endif

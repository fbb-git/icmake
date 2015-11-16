#ifndef _INCLUDED_INT_H_
#define _INCLUDED_INT_H_

#include "../../rss/rss.h"

typedef Variable    IntVariable;

IntVariable     *intConstructor(void);
IntVariable     *intConstructor_i(int value);
IntVariable     *intCopyCons(IntVariable const *other);

void        intDestructor(Variable *lhs);
void        intAssign(Variable *lhs, Variable const *rhs);

void        intAdd(Variable *lhs, Variable const *rhs);
void        intSub(Variable *lhs, Variable const *rhs);     /* same as intCompare */
int         intLogical(IntVariable const *lhs);

void        intSetValue(IntVariable *lhs, int value);

int         intValue(IntVariable const *lhs);   /* return the stored int */

#endif

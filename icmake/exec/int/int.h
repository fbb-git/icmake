#ifndef _INCLUDED_INT_H_
#define _INCLUDED_INT_H_

#include "../../rss/icrss.h"

typedef VAR_    INTVAR_;

INTVAR_     *intConstructor(void);
INTVAR_     *intConstructor_i(int value);
INTVAR_     *intCopyCons(INTVAR_ const *other);

void        intDestructor(VAR_ *lhs);
void        intAssign(VAR_ *lhs, VAR_ const *rhs);

void        intAdd(VAR_ *lhs, VAR_ const *rhs);
void        intSub(VAR_ *lhs, VAR_ const *rhs);     /* same as intCompare */
int         intLogical(INTVAR_ const *lhs);

void        intSetValue(INTVAR_ *lhs, int value);

int         intValue(INTVAR_ const *lhs);   /* return the stored int */

#endif

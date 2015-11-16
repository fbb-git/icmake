#ifndef _INCLUDED_VIRTUAL_H_
#define _INCLUDED_VIRTUAL_H_

#include "../../rss/rss.h"

//FBB
// Variable    *constructor(ExprType type);          /* default cons. sets count */
Variable    *copycons(Variable const *var);          /* increments count */    
void    destructor(Variable *var);              /* decrements count */

void   virtual_assign(Variable *lhs, Variable const *rhs); /* increments count */

// int     logical(Variable const *var);           /* convert var to logical value */

void   virtual_add(Variable *lhs, Variable const *rhs);
void   virtual_subtract(Variable *lhs, Variable const *rhs);
void   virtual_compare(Variable *lhs, Variable const *rhs);


#endif

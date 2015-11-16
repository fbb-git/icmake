#ifndef _INCLUDED_VIRTUAL_H_
#define _INCLUDED_VIRTUAL_H_

#include "../../rss/rss.h"

Variable    *constructor(ExprType type);          /* default cons. sets count */
Variable    *copyCons(Variable const *var);          /* increments count */    
void    destructor(Variable *var);              /* decrements count */

void    assign(Variable *lhs, Variable const *rhs); /* increments count */

int     logical(Variable const *var);           /* convert var to logical value */

void    add(Variable *lhs, Variable const *rhs);
void    subtract(Variable *lhs, Variable const *rhs);
void    compare(Variable *lhs, Variable const *rhs);


#endif

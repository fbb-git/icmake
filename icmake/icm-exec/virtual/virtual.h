#ifndef _INCLUDED_VIRTUAL_H_
#define _INCLUDED_VIRTUAL_H_

#include "../../rss/rss.h"

Variable    *constructor(ExprType type);    /* default cons. sets count */
Variable    *copycons(Variable const *var); /* increments count */    
void        destructor(Variable *var);      /* decrements count */
                                            /* assigns, updating count */
void        virtual_assign(Variable *lhs, Variable const *rhs); 
int         virtual_bool(Variable const *var);  /* var to bool value */
void        virtual_add(Variable *lhs, Variable const *rhs);
void        virtual_sub(Variable *lhs, Variable const *rhs);
void        virtual_compare(Variable *lhs, Variable const *rhs);


#endif

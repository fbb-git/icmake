#ifndef _INCLUDED_VIRTUAL_H_
#define _INCLUDED_VIRTUAL_H_

#include "../../rss/icrss.h"

VAR_    *constructor(E_TYPE_ type);          /* default cons. sets count */
VAR_    *copyCons(VAR_ const *var);          /* increments count */    
void    destructor(VAR_ *var);              /* decrements count */

void    assign(VAR_ *lhs, VAR_ const *rhs); /* increments count */

int     logical(VAR_ const *var);           /* convert var to logical value */

void    add(VAR_ *lhs, VAR_ const *rhs);
void    subtract(VAR_ *lhs, VAR_ const *rhs);
void    compare(VAR_ *lhs, VAR_ const *rhs);


#endif

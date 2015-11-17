#ifndef _INCLUDED_VIRTUAL_H_
#define _INCLUDED_VIRTUAL_H_

#include "../../rss/rss.h"

    /* all constructors return a pointer to a statically allocated data
        struct. In order to use the returned data it needs to be copied
        to a locally defined variable.

        The destructor expects a const *, which is used to allow passing of
        const and non-const objects. The destructor, as the object ceases to
        exist, casts away the const.
    */
Variable const *constructor(ExprType type);  /* default cons. sets count */
Variable const *copycons(Variable const *var); /* increments count */    

void        destructor(Variable const *var);    /* decrements count */
                                                /* assigns, updating count */
void        virtual_assign(Variable *lhs, Variable const *rhs); 
int         virtual_bool(Variable const *var);  /* var to bool value */
void        virtual_add(Variable *lhs, Variable const *rhs);
void        virtual_sub(Variable *lhs, Variable const *rhs);
void        virtual_compare(Variable *lhs, Variable const *rhs);


#endif

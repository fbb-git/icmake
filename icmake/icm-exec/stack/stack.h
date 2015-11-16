#ifndef _INCLUDED_STACK_H_
#define _INCLUDED_STACK_H_

#include "../../rss/rss.h"

void    push(Variable const *var);
void    pushBP(void);

void    pop(void);
void    popBP(void);
Variable   *top(void);

Variable   *local(int index);

#endif

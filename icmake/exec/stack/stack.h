#ifndef _INCLUDED_STACK_H_
#define _INCLUDED_STACK_H_

#include "../../rss/rss.h"

void        stack_push(Variable const *var);
void        stack_pushBP(void);

void        stack_pop(void);
void        stack_popBP(void);
Variable   *stack_top(void);

Variable   *stack_local(int index);

#endif

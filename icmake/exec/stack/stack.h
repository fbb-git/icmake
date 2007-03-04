#ifndef _INCLUDED_STACK_H_
#define _INCLUDED_STACK_H_

#include "../../rss/icrss.h"

void    push(VAR_ const *var);
void    pushBP(void);

void    pop(void);
void    popBP(void);
VAR_   *top(void);

VAR_   *local(int index);

#endif

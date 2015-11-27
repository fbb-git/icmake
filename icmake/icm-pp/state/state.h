#ifndef INCLUDED_STATE_H_
#define INCLUDED_STATE_H_

#include <stddef.h>

int state_active();

void state_init(void);          /* call once to initialze the state stack */

void state_push(int active);    /* active: 1, passive: 0, push also takes the
                                   previous state into account. */

void state_pop(void);           /* restores the former state */

void state_negate(void);        /* negates the current state, assuming the
                                   previous state was active */

size_t state_size(void);

#endif

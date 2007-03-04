#ifndef _INCLUDED_LIST_H_
#define _INCLUDED_LIST_H_

#include "../../rss/icrss.h"

typedef VAR_    LISTVAR_;

LISTVAR_    *listConstructor(void);
LISTVAR_    *listConstructor_s_cPP(size_t argc, char **argv);
LISTVAR_    *listConstructor_cP(char const *argv);

LISTVAR_    *listCopyCons(LISTVAR_ const *var);
void        listDestructor(LISTVAR_ *var);

void        listAssign(LISTVAR_ *lhs, LISTVAR_ const *rhs);

void        listAdd_cP(LISTVAR_ *list, char const *txt);
void        listAdd_swallow_cP(LISTVAR_ *list, char *txt);
void        listAdd_L(LISTVAR_ *lhs, LISTVAR_ const *rhs);

void        listSub(LISTVAR_ *lhs, LISTVAR_ const *rhs);
int         listLogical(LISTVAR_ const *lhs);
int         listContains(LISTVAR_ *lhs, char const *str);
size_t    listSize(LISTVAR_ const *list);
char const *listAt(LISTVAR_ const *list, size_t idx);
void        listSort(LISTVAR_ *list);

#endif

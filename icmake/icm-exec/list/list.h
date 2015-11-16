#ifndef _INCLUDED_ListH_
#define _INCLUDED_ListH_

#include "../../rss/rss.h"

typedef Variable    ListVariable;

ListVariable    *listConstructor(void);
ListVariable    *listConstructor_s_cPP(size_t argc, char **argv);
ListVariable    *listConstructor_cP(char const *argv);

ListVariable    *listCopyCons(ListVariable const *var);
void        listDestructor(ListVariable *var);

void        listAssign(ListVariable *lhs, ListVariable const *rhs);

void        listAdd_cP(ListVariable *list, char const *txt);
void        listAdd_swallow_cP(ListVariable *list, char *txt);
void        listAdd_L(ListVariable *lhs, ListVariable const *rhs);

void        listSub(ListVariable *lhs, ListVariable const *rhs);
int         listLogical(ListVariable const *lhs);
int         listContains(ListVariable *lhs, char const *str);
size_t      listSize(ListVariable const *list);
char const *listAt(ListVariable const *list, size_t idx);
void        listSort(ListVariable *list);

#endif

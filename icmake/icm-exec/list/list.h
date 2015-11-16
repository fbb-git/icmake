#ifndef _INCLUDED_ListH_
#define _INCLUDED_ListH_

#include "../../rss/rss.h"

typedef Variable    ListVariable;


ListVariable    *listcons(void);
ListVariable    *listcons_size_charPtrPtr(size_t argc, char **argv);
ListVariable    *listcons_charPtr(char const *argv);
ListVariable    *listcons_charPtrPtr(char **args);

ListVariable    *listcopycons(ListVariable const *var);
void            listDestructor(ListVariable *var);

// FBB void aux_environ2list(ListVariable *ret);

void        list_assign(ListVariable *lhs, ListVariable const *rhs);

void        list_add_charPtr(ListVariable *list, char const *txt);
void        list_add_grab_charPtr(ListVariable *list, char *txt);
void        list_add(ListVariable *lhs, ListVariable const *rhs);

void        list_sub(ListVariable *lhs, ListVariable const *rhs);
int         list_bool(ListVariable const *lhs);
int         list_contains(ListVariable *lhs, char const *str);
size_t      list_size(ListVariable const *list);
char const *list_at(ListVariable const *list, size_t idx);
void        list_sort(ListVariable *list);

#endif

#ifndef _INCLUDED_ListH_
#define _INCLUDED_ListH_

#include "../../rss/rss.h"

typedef Variable    ListVariable;


    /* all constructors return ptr to a static ListVariable,
        with its share-count initialized to 1 

        A ListVariable has a
            ExprType type (e_list)
            TextData *vu.i: a pointer to a allocated TextData, containing
                  count:    the share-count
                  TextFields ls.list:  the information about the text fields, 
                                being:
                          size: the number of strings, stored in the list
                          char **element: a pointer to pointers to allocated 
                                          NTBSs
        When the share count is 1 and the destructor is called, then
            ls.list.size pointers at ls.list.element are freed
            ls.list.element is freed
            vu.i is freed.

        A ListVariable itself is normally reached via a pointer, which
        is not dynamically allocated and therefore not deleted (at program
        startup the required number of ListVariables are dynamically
        allocated, but they are not deallocated by List functions).

        all constructors return a pointer to a statically allocated data
        struct. In order to use the returned data it needs to be copied
        to a locally defined variable
    */
ListVariable const *listcons(void);        
ListVariable const *listcons_size_charPtrPtr(size_t argc, char **argv);
ListVariable const *listcons_charPtr(char const *argv);
ListVariable const *listcons_charPtrPtr(char **args);
ListVariable const *listcopycons(ListVariable const *other);

void        listDestructor(ListVariable const *var);

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

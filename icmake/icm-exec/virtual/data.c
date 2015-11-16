#include "virtual.ih"

Variable *(*p_constructor[3])(void) = 
{
    intcons,
    stringcons,
    listcons,
};

Variable *(*p_copycons[3])(Variable const *) = 
{
    intcopycons,
    stringcopycons,
    listcopycons,
};

void (*p_destructor[3])(Variable *var) = 
{
    intDestructor, 
    stringDestructor, 
    listDestructor,
};

void (*p_assign[3])(Variable *lhs, Variable const *rhs) =
{
    int_assign,
    string_assign,
    list_assign,
};

int (*p_logical[3])(Variable const *var) = 
{
    int_bool, 
    string_bool, 
    list_bool,
};

void (*p_add[3])(Variable *lhs, Variable const *rhs) =
{
    int_add,
    string_add,
    list_add,
};

void (*p_sub[3])(Variable *lhs, Variable const *rhs) =
{
    int_sub,
    NULL,
    list_sub,
};

void (*p_compare[3])(Variable *lhs, Variable const *rhs) =
{
    int_sub,
    stringCompare,
    listCompare,
};



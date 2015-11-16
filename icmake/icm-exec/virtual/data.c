#include "virtual.ih"

Variable *(*p_constructor[3])(void) = 
{
    intConstructor,
    stringConstructor,
    listConstructor,
};

Variable *(*p_copycons[3])(Variable const *) = 
{
    intCopyCons,
    stringCopyCons,
    listCopyCons,
};

void (*p_destructor[3])(Variable *var) = 
{
    intDestructor, 
    stringDestructor, 
    listDestructor,
};

void (*p_assign[3])(Variable *lhs, Variable const *rhs) =
{
    intAssign,
    stringAssign,
    listAssign,
};

int (*p_logical[3])(Variable const *var) = 
{
    intLogical, 
    stringLogical, 
    listLogical,
};

void (*p_add[3])(Variable *lhs, Variable const *rhs) =
{
    intAdd,
    stringAdd,
    listAdd_L,
};

void (*p_sub[3])(Variable *lhs, Variable const *rhs) =
{
    intSub,
    NULL,
    listSub,
};

void (*p_compare[3])(Variable *lhs, Variable const *rhs) =
{
    intSub,
    stringCompare,
    listCompare,
};



#include "virtual.ih"

VAR_ *(*p_constructor[3])(void) = 
{
    intConstructor,
    stringConstructor,
    listConstructor,
};

VAR_ *(*p_copycons[3])(VAR_ const *) = 
{
    intCopyCons,
    stringCopyCons,
    listCopyCons,
};

void (*p_destructor[3])(VAR_ *var) = 
{
    intDestructor, 
    stringDestructor, 
    listDestructor,
};

void (*p_assign[3])(VAR_ *lhs, VAR_ const *rhs) =
{
    intAssign,
    stringAssign,
    listAssign,
};

int (*p_logical[3])(VAR_ const *var) = 
{
    intLogical, 
    stringLogical, 
    listLogical,
};

void (*p_add[3])(VAR_ *lhs, VAR_ const *rhs) =
{
    intAdd,
    stringAdd,
    listAdd_L,
};

void (*p_sub[3])(VAR_ *lhs, VAR_ const *rhs) =
{
    intSub,
    NULL,
    listSub,
};

void (*p_compare[3])(VAR_ *lhs, VAR_ const *rhs) =
{
    intSub,
    stringCompare,
    listCompare,
};



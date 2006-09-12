/*
\funcref{newvar}{VAR\_ newvar (\params)}
    {
        {E\_TYPE\_} {type} {type of variable to make}
    }
    {new variable}
    {initvar()}
    {initvar()}
    {newvar.c}
    {
        This function makes a new variable and returns it. The {\em type}
        indicates the type of the new variable (field {\em type}).

        When the variable is not of type {\em e\_int}, {\em initvar()} is
        called to initialize the variable. The {\em vu.i$\rightarrow$count}
        field is set to one, indicating that the variable shall be used to
        point to once used memory. All relevant pointers (to strings or lists)
        are set to {\em NULL}.
    }
*/

#include "icm-exec.h"

VAR_ newvar (type)
E_TYPE_ type;
{
    VAR_
        ret;

    ret.type = type;
    if (type & e_int)
        ret.vu.intval = 0;
    else
    {
        ret.vu.i = NULL;
        ret = initvar (ret);
    }

    return (ret);
}

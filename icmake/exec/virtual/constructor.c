#include "virtual.ih"

VAR_ *constructor(E_TYPE_ type)
{
    return p_constructor[type & e_list ? 2 : type & e_str ? 1 : 0]();
}


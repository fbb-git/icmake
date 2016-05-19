#ifndef _INCLUDED_VariableH_
#define _INCLUDED_VariableH_

#include "../../rss/rss.h"

inline ExprType var_type(Variable const *varp)
{
    return varp->type & e_typeMask;
}

inline int var_typeValue(Variable const *varp)
{
    return varp->type & e_list ? 2 : 
           varp->type & e_str  ? 1 : 
                                 0;
}

uint16_t  var_nShared(Variable const *var);
void   var_incShared(Variable *var);     

                            /* returns count following the reduction    */
                            /* (ignores the const                       */
uint16_t  var_decShared(Variable const *var);  

#endif

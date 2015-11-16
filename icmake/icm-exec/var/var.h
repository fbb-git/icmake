#ifndef _INCLUDED_VariableH_
#define _INCLUDED_VariableH_

#include "../../rss/rss.h"

#define typeValue(varp) ((varp)->type & (e_list | e_str | e_int))
#define typeIdx(varp) ((varp)->type & e_list ? 2 : (varp)->type & e_str ? 1 : 0)

uint16_t  varCount(Variable *var);
void   varIncCount(Variable *var);     
uint16_t  varDecCount(Variable *var);  /* returns count following the reduction */

#endif

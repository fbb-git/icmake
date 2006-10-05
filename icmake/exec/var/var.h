#ifndef _INCLUDED_VAR_H_
#define _INCLUDED_VAR_H_

#include "../../rss/icrss.h"

#define typeValue(varp) ((varp)->type & (e_list | e_str | e_int))
#define typeIdx(varp) ((varp)->type & e_list ? 2 : (varp)->type & e_str ? 1 : 0)

UNS16  varCount(VAR_ *var);
void   varIncCount(VAR_ *var);     
UNS16  varDecCount(VAR_ *var);  /* returns count following the reduction */

#endif

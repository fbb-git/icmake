#ifndef _INCLUDED_OPCODEFUN_H_
#define _INCLUDED_OPCODEFUN_H_

#include "../../rss/rss.h"

int     opcodefun_process(void);
void    opcodefun_setGlobalVariables();
void    opcodefun_setInfile(char const *arg);
void    opcodefun_close();


#endif

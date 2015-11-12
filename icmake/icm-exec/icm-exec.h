#include <unistd.h>
 
#include <signal.h>
#include <stdlib.h>
#include <string.h>

#include "../rss/rss.h"

#include "global.h"

#include "int/int.h"
#include "list/list.h"
#include "string/string.h"
#include "stack/stack.h"
#include "virtual/virtual.h"
#include "opcodefun/opcodefun.h"


extern uint16_t        nvar;
extern char         release[];
extern char         version[];
extern char        *bimname;
extern char        *bimname;


void    abnormal(int sig, int subcode);
void    cleanup(void);
void    environ2list(LISTVAR_ *list);

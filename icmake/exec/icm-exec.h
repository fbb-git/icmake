#include "../rss/icrssdef.h"

#ifdef MSDOS
#   include <icce.h>
#   include <conio.h>
#   include <process.h>
#   include <direct.h>
#   include <io.h>
#   include <dos.h>
#else
#   include <unistd.h>
#endif
 
#include <signal.h>
#include <stdlib.h>
#include <string.h>

#include "../rss/icrss.h"

#include "global.h"

#include "int/int.h"
#include "list/list.h"
#include "string/string.h"
#include "stack/stack.h"
#include "virtual/virtual.h"
#include "opcodefun/opcodefun.h"


extern UNS16        nvar;
extern char         release[];
extern char         version[];
extern char        *bimname;
extern char        *bimname;


void    abnormal(int sig, int subcode);
void    cleanup(void);
void    environ2list(LISTVAR_ *list);

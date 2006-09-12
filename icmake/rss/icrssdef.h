#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <ctype.h>
#include <stdarg.h>
#include <malloc.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifdef MSDOS
#   include <dos.h>
#   include <io.h>
#   include <process.h>
#else
#   include <unistd.h>
#endif

#include "icrss.h"

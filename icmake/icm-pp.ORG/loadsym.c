/*
    Load platform specific defines.

    Modify this file to your taste before compiling icmake: new symbols can be
    added by adding a macro block, as the ones defined below, using the name of
    your symbol. If your modification is useful outside of your local computing
    environment, please e-mail f.b.brokken@rug.nl so your suggestion can be
    handled in icmake's  next release.

*/

#include "icm-pp.h"

void loadsym()
{
#ifdef UNIX
    preload("UNIX", "1");
#else
    preload("UNIX", "0");
#endif

#ifdef unix
    preload("unix", "1");
#else
    preload("unix", "0");
#endif

#ifdef LINUX
    preload("LINUX", "1");
#else
    preload("LINUX", "0");
#endif

#ifdef linux
    preload("linux", "1");
#else
    preload("linux", "0");
#endif

#ifdef M_SYSV
    preload("M_SYSV", "1");
#else
    preload("M_SYSV", "0");
#endif

#ifdef M_UNIX
    preload("M_UNIX", "1");
#else
    preload("M_UNIX", "0");
#endif

#ifdef _POSIX_SOURCE
    preload("_POSIX_SOURCE", "1");
#else
    preload("_POSIX_SOURCE", "0");
#endif

#ifdef __hpux
    preload("__hpux", "1");
#else
    preload("__hpux", "0");
#endif

}

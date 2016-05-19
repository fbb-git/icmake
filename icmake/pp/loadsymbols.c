/*
    Load platform specific defines.

    Modify this file to your taste before compiling icmake: new symbols can be
    added by adding a macro block, as the ones defined below, using the name of
    your symbol. If your modification is useful outside of your local computing
    environment, please e-mail f.b.brokken@rug.nl so your suggestion can be
    handled in icmake's  next release.

*/

#include "icm-pp.ih"

void loadSymbols()
{
#ifdef UNIX
    linear_add("UNIX", "1");
#endif

#ifdef unix
    linear_add("unix", "1");
#endif

#ifdef LINUX
    linear_add("LINUX", "1");
#endif

#ifdef linux
    linear_add("linux", "1");
#endif

#ifdef M_SYSV
    linear_add("M_SYSV", "1");
#endif

#ifdef M_UNIX
    linear_add("M_UNIX", "1");
#endif

#ifdef _POSIX_SOURCE
    linear_add("_POSIX_SOURCE", "1");
#endif

#ifdef __hpux
    linear_add("__hpux", "1");
#endif

}

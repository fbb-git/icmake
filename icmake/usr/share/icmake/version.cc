//                     version.cc

#include "main.ih"
#include "VERSION"
#include "AUTHOR"

#ifndef AUTHOR
#define AUTHOR ""
#endif

#ifndef VERSION
#define VERSION "0.00.0"
#endif

namespace Icmbuild
{
    char version[]  = VERSION;
    char years[]     = YEARS;
    
    char author[] = AUTHOR;
}

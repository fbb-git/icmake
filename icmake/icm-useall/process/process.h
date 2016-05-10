#ifndef INCLUDED_PROCESS_
#define INCLUDED_PROCESS_

#include <regex.h>

#include "../options/options.h"
#include "../dependencies/dependencies.h"

typedef struct 
{
    Dependencies *dep;      // Dependencies struct

    int size;    
    int dry;
    int rm;
    char const *use_all;
    int verbose;
} Process;

Process *ProcessCons(Options *options, Dependencies *dep);
void actions(Process *process);

#endif








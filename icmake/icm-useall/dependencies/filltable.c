#include "dependencies.ih"

void fillTable(Dependencies *dep)
{
                                                // inspect all class-ih files
    for (int idx = 1, end = dep->size; idx != end; ++idx)
    {
        chdir(at(dep->dirNames, idx));
        inspectIH(dep, idx, ihFile(dep, idx));
        toCwd();
    }
    inspectIH(dep, 0, oMainih(dep->options));
}

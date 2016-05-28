#include "dependencies.ih"

void dFillTable()
{
                                                // inspect all class-ih files
    for (int idx = 1, end = sdep.d_size; idx != end; ++idx)
    {
        optMsg(4, "Inspecting '%s/'", depDir(idx));
        chdir(depDir(idx));
        dInspectIH(idx, dIhFile(idx));
        toCwd();
    }

    optMsg(4, "Inspecting './'");
    dInspectIH(0, optMainih());

    optMsg(4, "Header inspection completed"); 
}

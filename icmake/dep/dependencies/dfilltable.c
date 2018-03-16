#include "dependencies.ih"

void dFillTable()
{
                                                // inspect all class-ih files
    for (int idx = 1, end = sdep.d_size; idx != end; ++idx)
    {
        char const *dir = depDir(idx);

        optMsg(4, "Inspecting '%s/'", dir);

        if (chdir(dir) == 0)
            dInspectIH(idx, dIhFile(idx));
        else
            optMsg(4, "Cannot chdir to '%s/'", dir);

        toCwd();
    }

    optMsg(4, "Inspecting './'");
    dInspectIH(0, optMainih());

    optMsg(4, "Header inspection completed"); 
}

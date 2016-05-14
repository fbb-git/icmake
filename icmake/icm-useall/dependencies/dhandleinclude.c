#include "dependencies.ih"

void d_handleInclude(int idx, Vector *toDo, char const *line)
{
    Vector const *vector = regMatch(&sdep.includeRegex, line);

    if (vector == NULL)
        return;                         // no match

    char const *class = at(vector, 3);

    if (at(vector, 1) == NULL)    // local header, or main subhdr
    {
        if (class  == NULL)             // local header included
        {
            add(toDo, at(vector, 4));
            return;
        }
    }

    if (idx == 0 && at(vector, 1) != NULL)
        return;                         // parent dirs of main are ignored

    if (class == NULL)                  // include a main header
    {                                   // depending on a top level header:
        sdep.dependent[idx][0] = 1;  
        return;
    }

    int classIdx = find(sdep.dirNames, class);

    if (classIdx < 0)
    {
        vmsg(1, "no class '%s' reference in '%s'\n", class, line);
        return;
    }
                                        // depending on a local header
    sdep.dependent[idx][classIdx] = 1;  
}






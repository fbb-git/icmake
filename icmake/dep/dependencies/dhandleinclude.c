#include "dependencies.ih"

void dHandleInclude(int idx, Vector *toDo, char const *line, char const *hdr)
{
    Vector const *vector = regMatch(&sdep.d_includeRegex, line);

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
        sdep.d_dependent[idx][0] = 1;  
        return;
    }

    int classIdx = find(sdep.d_dirNames, class);

    if (classIdx < 0)
    {
        optMsg(4, "'%s' not in '%s' ('%s': `%s')", class, optClasses(),
                                                   hdr, line);
        return;
    }
                                        // depending on a local header
    sdep.d_dependent[idx][classIdx] = 1;  
}






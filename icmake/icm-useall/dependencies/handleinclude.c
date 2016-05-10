#include "dependencies.ih"

void handleInclude(Dependencies *dep, int idx, Vector *toDo, char const *line)
{
    Vector const *vector = regMatch(&dep->includeRegex, line);

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
    {
        dep->dependent[idx][0] = 1;     // depending on a top level header
        return;
    }

    int classIdx = find(dep->dirNames, class);
    if (classIdx < 0)
    {
        if (oVerbose(dep->options))
            fprintf(stderr, "no class '%s' reference in '%s'\n", class, line);
        return;
    }

    dep->dependent[idx][classIdx] = 1;  // depending on a local header
}






#include "dependencies.ih"

void handleInclude(Dependencies *dep, int idx, Vector *toDo, char const *line)
{
    Vector const *vector = regMatch(&dep->includeRegex, line);

    if (vector == NULL)
        return;                         // no match

//     fprintf(stderr, "     %s\n", line);

    char const *class = at(vector, 3);

    if (at(vector, 1) == NULL)    // local header, or main subhdr
    {
        if (class  == NULL)             // local header included
        {
//    fprintf(stderr, "Including local header: %s\n", vectorAt(vector, 4));
            add(toDo, at(vector, 4));
            return;
        }
    }

    if (idx == 0 && at(vector, 1) != NULL)
    {
//        printf("Parents of main ignored: %s\n", at(vector, 1));
        return;
    }

    if (class == NULL)                  // include a main header
    {
//        fprintf(stderr, "depending on  a top-level header\n");
        dep->dependsOn[idx][0] = 1;  
        return;
    }

    int classIdx = find(dep->dirNames, class);
    if (classIdx < 0)
    {
        if (oVerbose(dep->options))
            fprintf(stderr, "no class '%s' reference in '%s'\n", class, line);
        return;
    }

//    fprintf(stderr, "depending on a header in %s: idx = %d, classidx = %d\n", 
//class, idx, classIdx);
    dep->dependsOn[idx][classIdx] = 1;    
}






#include "process.ih"

int includesSearch(Process *process, int keyIdx, char const *subdir, 
                   char const *header)
{
    if (access(header, R_OK) != 0)
    {
        if (process->verbose > 1)
            printf("skipping non-existing %s\n", header);
        return 0;
    }

    FILE *in = openFile(header, "r");           // inspect a header in subdir

                                            // see if an #include in this
    char *line;                             // header refers to a dir. that
    while ((line = getLine(in)))            // is recompiled. If so, then this
    {                                       // directory is also recompiled
        char *includedDir = regMatch(process->include, line);

        if (includedDir != NULL)
        {
            appendValue(process, keyIdx, includedDir);
            if (process->verbose > 2)
                printf("requiring %s in %s\n", includedDir, header);
        }

                                            // included dir is recompiled
        int recompile = 
                includedDir && 
                (find(process->nSearch, process->search, includedDir) != -1);

        free(includedDir);

        if (recompile)
        {
            touch(process, subdir);
            insert(process, rss_strdup(subdir));
            return 1;
        }
    }
    return 0;
}

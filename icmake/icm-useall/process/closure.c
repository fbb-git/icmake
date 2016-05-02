#include "process.ih"

void closure(Process *process, int idx)
{
    int end = 0;

    char *entries = process->value[idx];

    if (*entries == 0)
        return;
               
    while (1)                  // next entry in the dependent directories
    {
        int begin = end + strspn(entries + end, " ");

        if (entries[begin] == 0)
            break;

        end = begin + strcspn(entries + begin, " ");
        entries[end] = 0;

        char *entry = entries + begin;


        int depIdx = find(process->nKey, process->key, entry);
        if (depIdx != -1)
        {
            char *candidates = rss_strdup(process->value[depIdx]);

            char *candidate = strtok(candidates, " ");
            while (candidate)
            {
                if (appendValue(process, idx, candidate))
                    entries = process->value[idx];

                candidate = strtok(NULL, " ");
            }

            free(candidates);
        }
        entry = strtok(NULL, " ");

        entries[end] = ' ';
    }    
}
            
        

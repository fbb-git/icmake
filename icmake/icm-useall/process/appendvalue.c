#include "process.ih"

int appendValue(Process *process, int keyIdx, char const *includedDir)
{
    if (strcmp(process->key[keyIdx], includedDir) == 0)     // dir is key
        return 0;

    if (keyIdx >= process->nValue)
    {
        process->value = (char **)rss_realloc(process->value, 
                                    (keyIdx + 1) * sizeof(char *));
        for (
            int idx = process->nValue, end = keyIdx + 1;
                idx != end;
                    ++idx
        )
            process->value[idx] = rss_strdup("");

        process->nValue = keyIdx + 1;
    }

    int len = strlen(includedDir);

    char sentinel[len + 3];
    sentinel[0] = ' ';
    memcpy(sentinel + 1, includedDir, len);
    strcpy(sentinel + 1 + len, " ");

    char *dest = process->value[keyIdx];

    if (strstr(dest, sentinel))
        return 0;

    process->value[keyIdx] = rss_strcat(dest, sentinel);
    return 1;
}





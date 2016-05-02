#include "util.ih"

static  regmatch_t subExpr[2];

char *regMatch(regex_t *regex, char const *line)
{
    if (regexec(regex, line, 2, subExpr, 0) != 0)
        return NULL;

    
    int begin = subExpr[1].rm_so;
    if (begin == -1)        // not found
        return NULL;

    int length =  subExpr[1].rm_eo - begin;
    char *ret = (char *)rss_realloc(0, length + 1);
    memcpy(ret, line + begin, length);
    ret[length] = 0;

    return ret;
}

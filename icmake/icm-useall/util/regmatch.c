#include "util.ih"

enum 
{
    NSUB = 5
};

static  regmatch_t subExpr[NSUB];

Vector const *regMatch(regex_t *regex, char const *line)
{
    if (regexec(regex, line, NSUB, subExpr, 0) != 0)
        return NULL;

    for (int idx = 0; idx != NSUB; ++idx)
    {
        int begin = subExpr[idx].rm_so;
//fprintf(stderr, "   idx: $d, begin = %d\n", idx, begin);

        if (begin == -1)        // not found
        {
            erase(&s_vector, idx);
            continue;
        }

        int length =  subExpr[idx].rm_eo - begin;
        replaceN(&s_vector, idx, line + begin, length);
    }

    return &s_vector;
}

#include "string.ih"

void stringAdd(STRINGVAR_ *lhs, STRINGVAR_ const *rhs)
{
    char *catstr = xstrcat(xstrdup(stringStr(lhs)), stringStr(rhs));

    destructor(lhs);
    *lhs = *stringConstructor_cP(catstr);

    free(catstr);
}


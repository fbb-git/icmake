#include "string.ih"

void stringCompare(STRINGVAR_ *lhs, STRINGVAR_ const *rhs)
{
    int ret = strcmp(stringStr(lhs), stringStr(rhs));

    destructor(lhs);

                                /* Can't use the return value as-is, since  */
                                /* the non-16 bit return value may have its */
                                /* lower 16 bits set to zero (as happened   */
                                /* on the powerpc                           */
    *lhs = *intConstructor_i(ret < 0 ? -1 : ret > 0 ? 1 : 0);
}


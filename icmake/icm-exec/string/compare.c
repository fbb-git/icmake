#include "string.ih"

void stringCompare(String *lhs, String const *rhs)
{
    int ret = strcmp(string_charp(lhs), string_charp(rhs));

    destructor(lhs);

                                /* Can't use the return value as-is, since  */
                                /* the non-16 bit return value may have its */
                                /* lower 16 bits set to zero (as happened   */
                                /* on the powerpc                           */
    *lhs = *intcons_int(ret < 0 ? -1 : ret > 0 ? 1 : 0);
}


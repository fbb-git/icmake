#include "string.ih"

void string_trimRight(String *lhs, String const *rhs)
{
    char *begin = s_str(rhs);
    char *cp = begin + strlen(begin);
    char org;
                                        /* find the last non-ws char. pos */
    for (; cp-- != begin && isspace(*cp); ) 
        ;

    org = *++cp;                        /* save the 1st RHS tail's ws char */
    *cp = 0;                            /* cut off the RHS tail */

    stringDestructor(lhs);
    stringcons_charPtr(lhs, cp);

    *cp = org;                          /* restore the RHS tail */
}


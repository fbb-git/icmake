#include "string.ih"

String const *string_trimRight(String const *param)
{
    char *begin = s_str(param);
    char *cp = begin + strlen(begin);

    char org;
    String const *ret;
                                        /* find the last non-ws char. pos */
    for (; cp-- != begin && isspace(*cp); ) 
        ;
    org = *++cp;                        /* save the 1st RHS tail's ws char */
    *cp = 0;                            /* cut off the RHS tail */

    ret = stringcons_charPtr(begin);  /* create the returned string */
    *cp = org;                          /* restore the RHS tail */

    return ret;
}


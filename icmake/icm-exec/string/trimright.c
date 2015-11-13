#include "string.ih"

String  *stringTrimRight(String const *param)
{
    char *begin = str(param);
    char *cp = begin + strlen(begin);

    char org;
    String *ret;
                                        /* find the last non-ws char. pos */
    for (; cp-- != begin && isspace(*cp); ) 
        ;
    org = *++cp;                        /* save the 1st RHS tail's ws char */
    *cp = 0;                            /* cut off the RHS tail */

    ret = stringConstructor_cP(begin);  /* create the returned string */
    *cp = org;                          /* restore the RHS tail */

    return ret;
}


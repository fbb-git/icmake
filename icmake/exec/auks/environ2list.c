#include "../icm-exec.h"

extern char       **environ;

void environ2list(LISTVAR_ *ret)
{
    char **env = environ;

    while (*env)
    {
        char *cp;
                                    /* separate on the last = or blank */
        if ((cp = strrchr(*env, '=')) || (cp = strrchr(*env, ' ')))
        {
            int c = *cp;
            *cp = 0;
            listAdd_cP(ret, *env);    /* add until = */
            *cp = c;
                                    /* add beyond */
            listAdd_cP(ret, *(cp + 1) ? cp + 1 : "");
        }
        env++;
    }
}

/*
\funcref{envp2list}{VAR\_ envp2list (\params)}
    {
        {char} {**envp} {array of environment settings}
    }
    {list variable holding environment}
    {newvar(), addtolist()}
    {main()}
    {envp2lis.c}
    {

        This function converts the array of strings, which is passed to the
        main function of {\em icm-exec} as {\em envp}, to a list. The list
        consists of an even number of elements. The first element of each pair
        is the name of the environment variable (e.g., ``path''); the second of
        each pair is the setting of the variable.

        The returned {\em VAR\_} structure is pushed onto the {\em icmake}
        stack by the {\em main()} function.

    }
*/

#include "icm-exec.h"

VAR_ envp2list (envp)
char **envp;
{
    VAR_
        ret;
    char
        buf [200];
    register char
        *cp;

    ret = newvar (e_list);
    while (*envp)
    {
        strncpy (buf, *envp, 199);
        if ( (cp = strrchr (buf, '=')) || (cp = strrchr (buf, ' ')) )
        {
            *cp = '\0';
            cp++;
            
            ret = addtolist (ret, buf);
            
            if (! *cp)
            	cp = " ";
            ret = addtolist (ret, cp);
        }
        envp++;
    }
    return (ret);
}

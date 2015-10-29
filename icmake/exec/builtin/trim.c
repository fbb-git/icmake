#include "builtin.ih"

void fun_trim()
{
    reg = *stringTrimLeft(stringTrimRight(top()));

//    fun_trimRight();                /* remove rhs blanks */
//
//    char *cp = stringStr(&reg);
//    
//		int len = 0 ;
//    char *cp = stringStr(top());
//    while(isspace(*cp))
//      cp++;
//    len = strlen(cp);
//    while(--len >= 0 && isspace(cp[len]));
//    reg = *stringConstructor_cPn(cp,len+1);
}

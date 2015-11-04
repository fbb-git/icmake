#include "symtab.ih"

int symtabDefineVar(ExprType type)
{
    return st_varIdx() == -1 ?               /* new variable ? */
                st_addVar(type)             /* add it */
            :
                -1;                         /* already defined */
}

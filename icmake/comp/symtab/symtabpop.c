#include "symtab.ih"

void symtabPop()
{
    gs_top->nVars = 0;          /* remove refs to local vars at this level */
    --gs_top;                   /* set the top-pointer to the previous level */
    --gs_nestingLevel;          /* reduce the nesting level         */
}

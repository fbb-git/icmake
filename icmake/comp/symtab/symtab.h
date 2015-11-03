#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include "../../rss/rss.h"

typedef struct                              /* symtab used with the compiler */
{
    VAR_ var;
    char *name;
} Symbol;


//size_t symtabNfunctions();  /* returns the # defined functions */

int symtabFunIdx();         /* g_lexstring holds the name of a function */
                            /* returns its idx or -1 if not found       */

int symtabVarIdx();         /* g_lexstring holds the name of a variable */
                            /* returns its idx or -1 if not found       */


int symtabAddFunction(ExprType type); /* add new function. returns 0 if 
                                           added,  != 0 if already def'd    */

void symtabReset();          /* initialize the symtabs at function begin */
void symtabPush();          /* initialize a new local symtab  */
void symtabPop();           /* remove the youngest local symtab  */

UNS16 const *symtabFunAddr();/* uses g_lexstring; returns address of fun    */
Symbol const *symtabLastFunction(); /* addr. of last defined function       */
                                    /* or NULL if none defined              */

size_t symtabSetLastFunction(size_t nParams); /* initializes the fields of    */
                                            /* the last defined function;   */
                                            /* returns # local variables    */
size_t symtab_nLocalVariables();    /* the number of local variables of the 
                                       function that's currently defined */
    
int symtabLocalType(size_t idx);    /* type of local variable idx, 1st local
                                        var has idx 0 */

ExprType symtabVarType(size_t idx); /* type of variable idx */
size_t symtab_nParams(size_t idx);  /* # params */

int symtabDefineVar(ExprType type); /* Define a local var. at the topmost
                                        symbol table (-1 if already def'd) */

void symtabCleanup();       /* pop all but the global symtab, patchup local
                                variable locations */

#endif


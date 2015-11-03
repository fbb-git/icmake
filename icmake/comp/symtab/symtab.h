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
int symtabAddFunction(E_TYPE_ type); /* add new function. returns 0 if 
                                           added,  != 0 if already def'd    */

void symtabReset();          /* initialize the symtabs at function begin */
void symtabPush();          /* initialize a new local symtab  */
void symtabPop();           /* remove the youngest local symtab  */

UNS16 const *symtabFunAddr();/* uses g_lexstring; returns address of fun    */
Symbol const *symtabLastFunction(); /* addr. of last defined function       */
                                    /* or NULL if none defined              */

void symtabSetLastFunction(size_t nParams); /* initializes the fields of    */
                                            /* the last defined function    */
    
#endif
